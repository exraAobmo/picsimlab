/* ########################################################################

   PICsimLab - PIC laboratory simulator

   ########################################################################

   Copyright (c) : 2010-2022  Luis Claudio Gambôa Lopes

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   For e-mail suggestions :  lcgamboa@yahoo.com
   ######################################################################## */

#include "input_LDR.h"
#include "../oscilloscope.h"
#include "../picsimlab.h"
#include "../spareparts.h"

/* outputs */
enum { O_P1, O_P2, O_F1, O_F2, O_PO1, O_LED };

/* inputs */
enum { I_PO1 };

static PCWProp pcwprop[5] = {{PCW_LABEL, "1 - VCC,+5V"},
                             {PCW_COMBO, "2 - D0"},
                             {PCW_COMBO, "3 - A0"},
                             {PCW_LABEL, "4 - VSS,GND"},
                             {PCW_SPIND, "Vth"}};

cpart_LDR::cpart_LDR(const unsigned x, const unsigned y, const char* name, const char* type)
    : part(x, y, name, type),
      font(9, lxFONTFAMILY_TELETYPE, lxFONTSTYLE_NORMAL, lxFONTWEIGHT_BOLD),
      font_p(7, lxFONTFAMILY_TELETYPE, lxFONTSTYLE_NORMAL, lxFONTWEIGHT_BOLD) {
    output_pins[0] = 0;
    output_pins[1] = 0;
    vmax = 5.0;
    vthreshold = 2.5;
    value = 0;
    active = 0;

    SetPCWProperties(pcwprop, 5);
}

void cpart_LDR::RegisterRemoteControl(void) {
    input_ids[I_PO1]->status = &value;
    input_ids[I_PO1]->update = &output_ids[O_PO1]->update;
}

cpart_LDR::~cpart_LDR(void) {
    delete Bitmap;
    canvas.Destroy();
}

void cpart_LDR::Reset(void) {
    vmax = PICSimLab.GetBoard()->MGetVCC();
}

void cpart_LDR::Draw(void) {
    int i;
    char val[10];

    Update = 0;

    for (i = 0; i < outputc; i++) {
        if (output[i].update)  // only if need update
        {
            output[i].update = 0;

            if (!Update) {
                canvas.Init(Scale, Scale, Orientation);
                canvas.SetFont(font);
            }
            Update++;  // set to update buffer

            switch (output[i].id) {
                case O_P1:
                    canvas.SetColor(49, 61, 99);
                    canvas.Rectangle(1, output[i].x1, output[i].y1, output[i].x2 - output[i].x1,
                                     output[i].y2 - output[i].y1);
                    canvas.SetFgColor(255, 255, 255);
                    if (output_pins[output[i].id - O_P1] == 0)
                        canvas.RotatedText("NC", output[i].x1, output[i].y2, 90);
                    else
                        canvas.RotatedText(SpareParts.GetPinName(output_pins[output[i].id - O_P1]), output[i].x1,
                                           output[i].y2, 90);
                    break;
                case O_P2:
                    canvas.SetColor(49, 61, 99);
                    canvas.Rectangle(1, output[i].x1, output[i].y1, output[i].x2 - output[i].x1,
                                     output[i].y2 - output[i].y1);
                    canvas.SetFgColor(255, 255, 255);
                    if (output_pins[output[i].id - O_P1] == 0)
                        canvas.RotatedText("NC", output[i].x1, output[i].y2, 90);
                    else
                        canvas.RotatedText(SpareParts.GetPinName(output_pins[output[i].id - O_P1]), output[i].x1,
                                           output[i].y2, 90);
                    break;
                case O_F1:
                    canvas.SetColor(49, 61, 99);
                    canvas.Rectangle(1, output[i].x1, output[i].y1, output[i].x2 - output[i].x1,
                                     output[i].y2 - output[i].y1);
                    canvas.SetFgColor(155, 155, 155);
                    canvas.RotatedText("+5V", output[i].x1, output[i].y2, 90);
                    break;
                case O_F2:
                    canvas.SetColor(49, 61, 99);
                    canvas.Rectangle(1, output[i].x1, output[i].y1, output[i].x2 - output[i].x1,
                                     output[i].y2 - output[i].y1);
                    canvas.SetFgColor(155, 155, 155);
                    canvas.RotatedText("GND", output[i].x1, output[i].y2, 90);
                    break;
                case O_PO1:
                    lux = powf(10, ((200 - value) / 33.33) - 1);
                    if (log10(lux) < 3) {
                        snprintf(val, 10, "%4.1f", lux);
                    } else {
                        snprintf(val, 10, "%4.0fk", lux / 1000);
                    }
                    DrawSlider(&output[i], value, val, font_p);
                    canvas.SetFont(font);
                    break;
                case O_LED:
                    canvas.SetColor((vout > vthreshold) ? 255 : 55, 0, 0);
                    canvas.Rectangle(1, output[i].x1, output[i].y1, output[i].x2 - output[i].x1,
                                     output[i].y2 - output[i].y1);
                    break;
            }
        }
    }

    if (Update) {
        canvas.End();
    }
}

void cpart_LDR::PostProcess(void) {
    const float gamma = 0.7;
    const float r10 = 20000.0;
    const float res = r10 / (powf(10, gamma * log10(lux / 10.0)));
    vout = (res * vmax) / (res + 10000.0);
    const int vd = (vout > vthreshold) ? 1 : 0;

    if (output_ids[O_LED]->value != vd) {
        if (output_pins[0]) {
            SpareParts.SetPin(output_pins[0], vd);
        }
        output_ids[O_LED]->update = 1;
        output_ids[O_LED]->value = vd;
    }

    if (output_pins[1]) {
        SpareParts.SetAPin(output_pins[1], vout);
    }
}

void cpart_LDR::EvMouseButtonPress(uint button, uint x, uint y, uint state) {
    int i;

    for (i = 0; i < inputc; i++) {
        if (PointInside(x, y, input[i])) {
            RotateCoords(&x, &y);
            switch (input[i].id) {
                case I_PO1:
                    value = (y - input[i].y1) * 1.66;
                    if (value > 200)
                        value = 200;
                    active = 1;
                    output_ids[O_PO1]->update = 1;
                    break;
            }
        }
    }
}

void cpart_LDR::EvMouseButtonRelease(uint button, uint x, uint y, uint state) {
    int i;

    for (i = 0; i < inputc; i++) {
        if (PointInside(x, y, input[i])) {
            switch (input[i].id) {
                case I_PO1:
                    active = 0;
                    output_ids[O_PO1]->update = 1;
                    break;
            }
        }
    }
}

void cpart_LDR::EvMouseMove(uint button, uint x, uint y, uint state) {
    int i;

    for (i = 0; i < inputc; i++) {
        if (PointInside(x, y, input[i])) {
            RotateCoords(&x, &y);

            if (active) {
                value = ((y - input[i].y1) * 1.66);
                if (value > 200)
                    value = 200;
                output_ids[O_PO1 + input[i].id - I_PO1]->update = 1;
            }
        } else {
            active = 0;
        }
    }
}

unsigned short cpart_LDR::GetInputId(char* name) {
    if (strcmp(name, "PO_1") == 0)
        return I_PO1;

    printf("Erro input '%s' don't have a valid id! \n", name);
    return -1;
}

unsigned short cpart_LDR::GetOutputId(char* name) {
    if (strcmp(name, "PN_1") == 0)
        return O_P1;
    if (strcmp(name, "PN_2") == 0)
        return O_P2;

    if (strcmp(name, "PN_F1") == 0)
        return O_F1;
    if (strcmp(name, "PN_F2") == 0)
        return O_F2;

    if (strcmp(name, "PO_1") == 0)
        return O_PO1;

    if (strcmp(name, "LED") == 0)
        return O_LED;

    printf("Erro output '%s' don't have a valid id! \n", name);
    return 1;
}

lxString cpart_LDR::WritePreferences(void) {
    char prefs[256];

    sprintf(prefs, "%hhu,%hhu,%hhu,%f", output_pins[0], output_pins[1], value, vthreshold);

    return prefs;
}

void cpart_LDR::ReadPreferences(lxString value_) {
    sscanf(value_.c_str(), "%hhu,%hhu,%hhu,%f", &output_pins[0], &output_pins[1], &value, &vthreshold);
}

void cpart_LDR::ConfigurePropertiesWindow(CPWindow* WProp) {
    SetPCWComboWithPinNames(WProp, "combo2", output_pins[0]);
    SetPCWComboWithPinNames(WProp, "combo3", output_pins[1]);

    ((CSpind*)WProp->GetChildByName("spind5"))->SetMax(vmax);
    ((CSpind*)WProp->GetChildByName("spind5"))->SetValue(vthreshold);
}

void cpart_LDR::ReadPropertiesWindow(CPWindow* WProp) {
    output_pins[0] = GetPWCComboSelectedPin(WProp, "combo2");
    output_pins[1] = GetPWCComboSelectedPin(WProp, "combo3");

    vthreshold = ((CSpind*)WProp->GetChildByName("spind5"))->GetValue();
}

part_init(PART_LDR_Name, cpart_LDR, "Input");