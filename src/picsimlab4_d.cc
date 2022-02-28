CPWindow4::CPWindow4(void)
{
//lxrad automatic generated block start, don't edit below!
  SetFOwner(this);
  SetClass(lxT("CPWindow"));
  SetName(lxT("window4"));
  SetTag(0);
  SetX(283);
  SetY(159);
  SetWidth(998);
  SetHeight(378);
  SetHint(lxT(""));
  SetEnable(1);
  SetVisible(0);
  SetPopupMenu(NULL);
  SetTitle(lxT("PICSimLab - Oscilloscope"));
  SetOverrideRedirect(0);
  EvOnDestroy=EVONDESTROY & CPWindow4::_EvOnDestroy;
  EvOnShow=EVONSHOW & CPWindow4::_EvOnShow;
  EvOnHide=EVONHIDE & CPWindow4::_EvOnHide;
  //draw1
  draw1.SetFOwner(this);
  draw1.SetClass(lxT("CDraw"));
  draw1.SetName(lxT("draw1"));
  draw1.SetTag(0);
  draw1.SetX(13);
  draw1.SetY(13);
  draw1.SetWidth(430);
  draw1.SetHeight(280);
  draw1.SetHint(lxT(""));
  draw1.SetEnable(1);
  draw1.SetVisible(1);
  draw1.SetPopupMenu(NULL);
  draw1.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow4::draw1_EvMouseButtonClick;
  draw1.SetTransparent(0);
  draw1.SetImgFileName(lxT(""));
  CreateChild(&draw1);
  //spind1
  spind1.SetFOwner(this);
  spind1.SetClass(lxT("CSpind"));
  spind1.SetName(lxT("spind1"));
  spind1.SetTag(0);
  spind1.SetX(510);
  spind1.SetY(64);
  spind1.SetWidth(150);
  spind1.SetHeight(34);
  spind1.SetHint(lxT(""));
  spind1.SetEnable(1);
  spind1.SetVisible(1);
  spind1.SetPopupMenu(NULL);
  spind1.SetValue(2.000000);
  spind1.SetMin(0.100000);
  spind1.SetMax(100.000000);
  spind1.SetInc(0.010000);
  spind1.SetDigits(2);
  CreateChild(&spind1);
  //spind2
  spind2.SetFOwner(this);
  spind2.SetClass(lxT("CSpind"));
  spind2.SetName(lxT("spind2"));
  spind2.SetTag(0);
  spind2.SetX(510);
  spind2.SetY(125);
  spind2.SetWidth(150);
  spind2.SetHeight(34);
  spind2.SetHint(lxT(""));
  spind2.SetEnable(1);
  spind2.SetVisible(1);
  spind2.SetPopupMenu(NULL);
  spind2.SetValue(0.000000);
  spind2.SetMin(-100.000000);
  spind2.SetMax(100.000000);
  spind2.SetInc(0.010000);
  spind2.SetDigits(2);
  CreateChild(&spind2);
  //spind3
  spind3.SetFOwner(this);
  spind3.SetClass(lxT("CSpind"));
  spind3.SetName(lxT("spind3"));
  spind3.SetTag(0);
  spind3.SetX(665);
  spind3.SetY(66);
  spind3.SetWidth(150);
  spind3.SetHeight(34);
  spind3.SetHint(lxT(""));
  spind3.SetEnable(1);
  spind3.SetVisible(1);
  spind3.SetPopupMenu(NULL);
  spind3.SetValue(2.000000);
  spind3.SetMin(0.100000);
  spind3.SetMax(100.000000);
  spind3.SetInc(0.010000);
  spind3.SetDigits(2);
  CreateChild(&spind3);
  //spind4
  spind4.SetFOwner(this);
  spind4.SetClass(lxT("CSpind"));
  spind4.SetName(lxT("spind4"));
  spind4.SetTag(0);
  spind4.SetX(665);
  spind4.SetY(125);
  spind4.SetWidth(150);
  spind4.SetHeight(34);
  spind4.SetHint(lxT(""));
  spind4.SetEnable(1);
  spind4.SetVisible(1);
  spind4.SetPopupMenu(NULL);
  spind4.SetValue(0.000000);
  spind4.SetMin(-100.000000);
  spind4.SetMax(100.000000);
  spind4.SetInc(0.010000);
  spind4.SetDigits(2);
  CreateChild(&spind4);
  //spind5
  spind5.SetFOwner(this);
  spind5.SetClass(lxT("CSpind"));
  spind5.SetName(lxT("spind5"));
  spind5.SetTag(0);
  spind5.SetX(822);
  spind5.SetY(66);
  spind5.SetWidth(150);
  spind5.SetHeight(34);
  spind5.SetHint(lxT(""));
  spind5.SetEnable(1);
  spind5.SetVisible(1);
  spind5.SetPopupMenu(NULL);
  spind5.SetValue(10.000000);
  spind5.SetMin(0.001000);
  spind5.SetMax(200.000000);
  spind5.SetInc(0.001000);
  spind5.SetDigits(3);
  spind5.EvOnChangeSpinDouble=EVONCHANGESPINDOUBLE & CPWindow4::spind5_EvOnChangeSpinDouble;
  CreateChild(&spind5);
  //spind6
  spind6.SetFOwner(this);
  spind6.SetClass(lxT("CSpind"));
  spind6.SetName(lxT("spind6"));
  spind6.SetTag(0);
  spind6.SetX(822);
  spind6.SetY(127);
  spind6.SetWidth(150);
  spind6.SetHeight(34);
  spind6.SetHint(lxT(""));
  spind6.SetEnable(1);
  spind6.SetVisible(1);
  spind6.SetPopupMenu(NULL);
  spind6.SetValue(0.000000);
  spind6.SetMin(-100.000000);
  spind6.SetMax(100.000000);
  spind6.SetInc(0.001000);
  spind6.SetDigits(3);
  spind6.EvOnChangeSpinDouble=EVONCHANGESPINDOUBLE & CPWindow4::spind6_EvOnChangeSpinDouble;
  CreateChild(&spind6);
  //togglebutton1
  togglebutton1.SetFOwner(this);
  togglebutton1.SetClass(lxT("CToggleButton"));
  togglebutton1.SetName(lxT("togglebutton1"));
  togglebutton1.SetTag(0);
  togglebutton1.SetX(510);
  togglebutton1.SetY(162);
  togglebutton1.SetWidth(150);
  togglebutton1.SetHeight(32);
  togglebutton1.SetHint(lxT(""));
  togglebutton1.SetEnable(1);
  togglebutton1.SetVisible(1);
  togglebutton1.SetPopupMenu(NULL);
  togglebutton1.SetText(lxT("On"));
  togglebutton1.SetCheck(1);
  CreateChild(&togglebutton1);
  //button1
  button1.SetFOwner(this);
  button1.SetClass(lxT("CButton"));
  button1.SetName(lxT("button1"));
  button1.SetTag(0);
  button1.SetX(510);
  button1.SetY(198);
  button1.SetWidth(150);
  button1.SetHeight(32);
  button1.SetHint(lxT(""));
  button1.SetEnable(1);
  button1.SetVisible(1);
  button1.SetPopupMenu(NULL);
  button1.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow4::button1_EvMouseButtonClick;
  button1.SetText(lxT("Color"));
  CreateChild(&button1);
  //togglebutton2
  togglebutton2.SetFOwner(this);
  togglebutton2.SetClass(lxT("CToggleButton"));
  togglebutton2.SetName(lxT("togglebutton2"));
  togglebutton2.SetTag(0);
  togglebutton2.SetX(665);
  togglebutton2.SetY(162);
  togglebutton2.SetWidth(150);
  togglebutton2.SetHeight(32);
  togglebutton2.SetHint(lxT(""));
  togglebutton2.SetEnable(1);
  togglebutton2.SetVisible(1);
  togglebutton2.SetPopupMenu(NULL);
  togglebutton2.SetText(lxT("On"));
  togglebutton2.SetCheck(1);
  CreateChild(&togglebutton2);
  //button2
  button2.SetFOwner(this);
  button2.SetClass(lxT("CButton"));
  button2.SetName(lxT("button2"));
  button2.SetTag(0);
  button2.SetX(665);
  button2.SetY(198);
  button2.SetWidth(150);
  button2.SetHeight(32);
  button2.SetHint(lxT(""));
  button2.SetEnable(1);
  button2.SetVisible(1);
  button2.SetPopupMenu(NULL);
  button2.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow4::button2_EvMouseButtonClick;
  button2.SetText(lxT("Color"));
  CreateChild(&button2);
  //togglebutton3
  togglebutton3.SetFOwner(this);
  togglebutton3.SetClass(lxT("CToggleButton"));
  togglebutton3.SetName(lxT("togglebutton3"));
  togglebutton3.SetTag(0);
  togglebutton3.SetX(510);
  togglebutton3.SetY(234);
  togglebutton3.SetWidth(150);
  togglebutton3.SetHeight(32);
  togglebutton3.SetHint(lxT(""));
  togglebutton3.SetEnable(1);
  togglebutton3.SetVisible(1);
  togglebutton3.SetPopupMenu(NULL);
  togglebutton3.SetText(lxT("Inv"));
  togglebutton3.SetCheck(0);
  CreateChild(&togglebutton3);
  //togglebutton4
  togglebutton4.SetFOwner(this);
  togglebutton4.SetClass(lxT("CToggleButton"));
  togglebutton4.SetName(lxT("togglebutton4"));
  togglebutton4.SetTag(0);
  togglebutton4.SetX(665);
  togglebutton4.SetY(234);
  togglebutton4.SetWidth(150);
  togglebutton4.SetHeight(32);
  togglebutton4.SetHint(lxT(""));
  togglebutton4.SetEnable(1);
  togglebutton4.SetVisible(1);
  togglebutton4.SetPopupMenu(NULL);
  togglebutton4.SetText(lxT("Inv"));
  togglebutton4.SetCheck(0);
  CreateChild(&togglebutton4);
  //colordialog1
  colordialog1.SetFOwner(this);
  colordialog1.SetClass(lxT("CColorDialog"));
  colordialog1.SetName(lxT("colordialog1"));
  colordialog1.SetTag(0);
  colordialog1.SetColorName(lxT("red"));
  colordialog1.EvOnClose=EVONCLOSE & CPWindow4::colordialog1_EvOnClose;
  CreateChild(&colordialog1);
  //togglebutton5
  togglebutton5.SetFOwner(this);
  togglebutton5.SetClass(lxT("CToggleButton"));
  togglebutton5.SetName(lxT("togglebutton5"));
  togglebutton5.SetTag(0);
  togglebutton5.SetX(822);
  togglebutton5.SetY(186);
  togglebutton5.SetWidth(150);
  togglebutton5.SetHeight(32);
  togglebutton5.SetHint(lxT(""));
  togglebutton5.SetEnable(1);
  togglebutton5.SetVisible(1);
  togglebutton5.SetPopupMenu(NULL);
  togglebutton5.SetText(lxT("Trigger"));
  togglebutton5.SetCheck(1);
  togglebutton5.EvOnToggleButton=EVONTOGGLEBUTTON & CPWindow4::togglebutton5_EvOnToggleButton;
  CreateChild(&togglebutton5);
  //spind7
  spind7.SetFOwner(this);
  spind7.SetClass(lxT("CSpind"));
  spind7.SetName(lxT("spind7"));
  spind7.SetTag(0);
  spind7.SetX(822);
  spind7.SetY(304);
  spind7.SetWidth(150);
  spind7.SetHeight(34);
  spind7.SetHint(lxT(""));
  spind7.SetEnable(1);
  spind7.SetVisible(1);
  spind7.SetPopupMenu(NULL);
  spind7.SetValue(2.500000);
  spind7.SetMin(-100.000000);
  spind7.SetMax(100.000000);
  spind7.SetInc(0.010000);
  spind7.SetDigits(2);
  spind7.EvOnChangeSpinDouble=EVONCHANGESPINDOUBLE & CPWindow4::spind7_EvOnChangeSpinDouble;
  CreateChild(&spind7);
  //combo1
  combo1.SetFOwner(this);
  combo1.SetClass(lxT("CCombo"));
  combo1.SetName(lxT("combo1"));
  combo1.SetTag(0);
  combo1.SetX(822);
  combo1.SetY(245);
  combo1.SetWidth(150);
  combo1.SetHeight(32);
  combo1.SetHint(lxT(""));
  combo1.SetEnable(1);
  combo1.SetVisible(1);
  combo1.SetPopupMenu(NULL);
  combo1.SetItems(lxT("1,2,"));
  combo1.SetText(lxT("1"));
  combo1.SetReadOnly(0);
  CreateChild(&combo1);
  //timer1
  timer1.SetFOwner(this);
  timer1.SetClass(lxT("CTimer"));
  timer1.SetName(lxT("timer1"));
  timer1.SetTag(0);
  timer1.SetTime(100);
  timer1.SetRunState(0);
  timer1.EvOnTime=EVONTIME & CPWindow4::timer1_EvOnTime;
  CreateChild(&timer1);
  //combo2
  combo2.SetFOwner(this);
  combo2.SetClass(lxT("CCombo"));
  combo2.SetName(lxT("combo2"));
  combo2.SetTag(0);
  combo2.SetX(57);
  combo2.SetY(306);
  combo2.SetWidth(200);
  combo2.SetHeight(32);
  combo2.SetHint(lxT(""));
  combo2.SetEnable(1);
  combo2.SetVisible(1);
  combo2.SetPopupMenu(NULL);
  combo2.SetItems(lxT(""));
  combo2.SetText(lxT("1"));
  combo2.SetReadOnly(0);
  combo2.EvOnComboChange=EVONCOMBOCHANGE & CPWindow4::combo2_EvOnComboChange;
  CreateChild(&combo2);
  //combo3
  combo3.SetFOwner(this);
  combo3.SetClass(lxT("CCombo"));
  combo3.SetName(lxT("combo3"));
  combo3.SetTag(0);
  combo3.SetX(323);
  combo3.SetY(306);
  combo3.SetWidth(200);
  combo3.SetHeight(32);
  combo3.SetHint(lxT(""));
  combo3.SetEnable(1);
  combo3.SetVisible(1);
  combo3.SetPopupMenu(NULL);
  combo3.SetItems(lxT(""));
  combo3.SetText(lxT("2"));
  combo3.SetReadOnly(0);
  combo3.EvOnComboChange=EVONCOMBOCHANGE & CPWindow4::combo3_EvOnComboChange;
  CreateChild(&combo3);
  //label1
  label1.SetFOwner(this);
  label1.SetClass(lxT("CLabel"));
  label1.SetName(lxT("label1"));
  label1.SetTag(0);
  label1.SetX(544);
  label1.SetY(44);
  label1.SetWidth(91);
  label1.SetHeight(20);
  label1.SetHint(lxT(""));
  label1.SetEnable(1);
  label1.SetVisible(1);
  label1.SetPopupMenu(NULL);
  label1.SetText(lxT("Ch 1 (V/div)"));
  label1.SetAlign(1);
  CreateChild(&label1);
  //label2
  label2.SetFOwner(this);
  label2.SetClass(lxT("CLabel"));
  label2.SetName(lxT("label2"));
  label2.SetTag(0);
  label2.SetX(700);
  label2.SetY(44);
  label2.SetWidth(88);
  label2.SetHeight(20);
  label2.SetHint(lxT(""));
  label2.SetEnable(1);
  label2.SetVisible(1);
  label2.SetPopupMenu(NULL);
  label2.SetText(lxT("Ch 2 (V/div)"));
  label2.SetAlign(1);
  CreateChild(&label2);
  //label3
  label3.SetFOwner(this);
  label3.SetClass(lxT("CLabel"));
  label3.SetName(lxT("label3"));
  label3.SetTag(0);
  label3.SetX(836);
  label3.SetY(163);
  label3.SetWidth(119);
  label3.SetHeight(20);
  label3.SetHint(lxT(""));
  label3.SetEnable(1);
  label3.SetVisible(1);
  label3.SetPopupMenu(NULL);
  label3.SetText(lxT("Trigger On/Off"));
  label3.SetAlign(1);
  CreateChild(&label3);
  //label4
  label4.SetFOwner(this);
  label4.SetClass(lxT("CLabel"));
  label4.SetName(lxT("label4"));
  label4.SetTag(0);
  label4.SetX(845);
  label4.SetY(43);
  label4.SetWidth(104);
  label4.SetHeight(20);
  label4.SetHint(lxT(""));
  label4.SetEnable(1);
  label4.SetVisible(1);
  label4.SetPopupMenu(NULL);
  label4.SetText(lxT("Time (ms/div)"));
  label4.SetAlign(1);
  CreateChild(&label4);
  //label5
  label5.SetFOwner(this);
  label5.SetClass(lxT("CLabel"));
  label5.SetName(lxT("label5"));
  label5.SetTag(0);
  label5.SetX(844);
  label5.SetY(104);
  label5.SetWidth(100);
  label5.SetHeight(20);
  label5.SetHint(lxT(""));
  label5.SetEnable(1);
  label5.SetVisible(1);
  label5.SetPopupMenu(NULL);
  label5.SetText(lxT("Time off. (ms)"));
  label5.SetAlign(1);
  CreateChild(&label5);
  //label6
  label6.SetFOwner(this);
  label6.SetClass(lxT("CLabel"));
  label6.SetName(lxT("label6"));
  label6.SetTag(0);
  label6.SetX(837);
  label6.SetY(222);
  label6.SetWidth(122);
  label6.SetHeight(20);
  label6.SetHint(lxT(""));
  label6.SetEnable(1);
  label6.SetVisible(1);
  label6.SetPopupMenu(NULL);
  label6.SetText(lxT("Trigger channel"));
  label6.SetAlign(1);
  CreateChild(&label6);
  //label7
  label7.SetFOwner(this);
  label7.SetClass(lxT("CLabel"));
  label7.SetName(lxT("label7"));
  label7.SetTag(0);
  label7.SetX(835);
  label7.SetY(283);
  label7.SetWidth(128);
  label7.SetHeight(20);
  label7.SetHint(lxT(""));
  label7.SetEnable(1);
  label7.SetVisible(1);
  label7.SetPopupMenu(NULL);
  label7.SetText(lxT("Trigger level (V)"));
  label7.SetAlign(1);
  CreateChild(&label7);
  //label8
  label8.SetFOwner(this);
  label8.SetClass(lxT("CLabel"));
  label8.SetName(lxT("label8"));
  label8.SetTag(0);
  label8.SetX(545);
  label8.SetY(103);
  label8.SetWidth(91);
  label8.SetHeight(20);
  label8.SetHint(lxT(""));
  label8.SetEnable(1);
  label8.SetVisible(1);
  label8.SetPopupMenu(NULL);
  label8.SetText(lxT("Ch 1 off. (V)"));
  label8.SetAlign(1);
  CreateChild(&label8);
  //label9
  label9.SetFOwner(this);
  label9.SetClass(lxT("CLabel"));
  label9.SetName(lxT("label9"));
  label9.SetTag(0);
  label9.SetX(699);
  label9.SetY(104);
  label9.SetWidth(89);
  label9.SetHeight(20);
  label9.SetHint(lxT(""));
  label9.SetEnable(1);
  label9.SetVisible(1);
  label9.SetPopupMenu(NULL);
  label9.SetText(lxT("Ch 2 off. (V)"));
  label9.SetAlign(1);
  CreateChild(&label9);
  //label10
  label10.SetFOwner(this);
  label10.SetClass(lxT("CLabel"));
  label10.SetName(lxT("label10"));
  label10.SetTag(0);
  label10.SetX(10);
  label10.SetY(312);
  label10.SetWidth(45);
  label10.SetHeight(20);
  label10.SetHint(lxT(""));
  label10.SetEnable(1);
  label10.SetVisible(1);
  label10.SetPopupMenu(NULL);
  label10.SetText(lxT("Ch 1"));
  label10.SetAlign(1);
  CreateChild(&label10);
  //label11
  label11.SetFOwner(this);
  label11.SetClass(lxT("CLabel"));
  label11.SetName(lxT("label11"));
  label11.SetTag(0);
  label11.SetX(278);
  label11.SetY(312);
  label11.SetWidth(42);
  label11.SetHeight(20);
  label11.SetHint(lxT(""));
  label11.SetEnable(1);
  label11.SetVisible(1);
  label11.SetPopupMenu(NULL);
  label11.SetText(lxT("Ch 2"));
  label11.SetAlign(1);
  CreateChild(&label11);
  //button3
  button3.SetFOwner(this);
  button3.SetClass(lxT("CButton"));
  button3.SetName(lxT("button3"));
  button3.SetTag(0);
  button3.SetX(510);
  button3.SetY(7);
  button3.SetWidth(150);
  button3.SetHeight(32);
  button3.SetHint(lxT(""));
  button3.SetEnable(1);
  button3.SetVisible(1);
  button3.SetPopupMenu(NULL);
  button3.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow4::button3_EvMouseButtonClick;
  button3.SetText(lxT("Autoset"));
  CreateChild(&button3);
  //togglebutton6
  togglebutton6.SetFOwner(this);
  togglebutton6.SetClass(lxT("CToggleButton"));
  togglebutton6.SetName(lxT("togglebutton6"));
  togglebutton6.SetTag(0);
  togglebutton6.SetX(665);
  togglebutton6.SetY(7);
  togglebutton6.SetWidth(150);
  togglebutton6.SetHeight(32);
  togglebutton6.SetHint(lxT(""));
  togglebutton6.SetEnable(1);
  togglebutton6.SetVisible(1);
  togglebutton6.SetPopupMenu(NULL);
  togglebutton6.SetText(lxT("Stop"));
  togglebutton6.SetCheck(0);
  togglebutton6.EvOnToggleButton=EVONTOGGLEBUTTON & CPWindow4::togglebutton6_EvOnToggleButton;
  CreateChild(&togglebutton6);
  //togglebutton7
  togglebutton7.SetFOwner(this);
  togglebutton7.SetClass(lxT("CToggleButton"));
  togglebutton7.SetName(lxT("togglebutton7"));
  togglebutton7.SetTag(0);
  togglebutton7.SetX(822);
  togglebutton7.SetY(7);
  togglebutton7.SetWidth(150);
  togglebutton7.SetHeight(32);
  togglebutton7.SetHint(lxT(""));
  togglebutton7.SetEnable(1);
  togglebutton7.SetVisible(1);
  togglebutton7.SetPopupMenu(NULL);
  togglebutton7.SetText(lxT("Single"));
  togglebutton7.SetCheck(0);
  CreateChild(&togglebutton7);
  //button4
  button4.SetFOwner(this);
  button4.SetClass(lxT("CButton"));
  button4.SetName(lxT("button4"));
  button4.SetTag(0);
  button4.SetX(528);
  button4.SetY(306);
  button4.SetWidth(150);
  button4.SetHeight(32);
  button4.SetHint(lxT(""));
  button4.SetEnable(1);
  button4.SetVisible(1);
  button4.SetPopupMenu(NULL);
  button4.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow4::button4_EvMouseButtonClick;
  button4.SetText(lxT("Save Png"));
  CreateChild(&button4);
  //filedialog1
  filedialog1.SetFOwner(this);
  filedialog1.SetClass(lxT("CFileDialog"));
  filedialog1.SetName(lxT("filedialog1"));
  filedialog1.SetTag(0);
  filedialog1.SetFileName(lxT("untitled.png"));
  filedialog1.SetFilter(lxT("PNG Files (*.png)|*.png"));
  filedialog1.SetType(129);
  filedialog1.EvOnClose=EVONCLOSE & CPWindow4::filedialog1_EvOnClose;
  CreateChild(&filedialog1);
  //button5
  button5.SetFOwner(this);
  button5.SetClass(lxT("CButton"));
  button5.SetName(lxT("button5"));
  button5.SetTag(0);
  button5.SetX(450);
  button5.SetY(46);
  button5.SetWidth(30);
  button5.SetHeight(20);
  button5.SetHint(lxT(""));
  button5.SetEnable(1);
  button5.SetVisible(1);
  button5.SetColor(lxT("#000001"));
  button5.SetPopupMenu(NULL);
  button5.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow4::button5_EvMouseButtonPress;
  button5.SetText(lxT(""));
  CreateChild(&button5);
  //button6
  button6.SetFOwner(this);
  button6.SetClass(lxT("CButton"));
  button6.SetName(lxT("button6"));
  button6.SetTag(0);
  button6.SetX(450);
  button6.SetY(96);
  button6.SetWidth(30);
  button6.SetHeight(20);
  button6.SetHint(lxT(""));
  button6.SetEnable(1);
  button6.SetVisible(1);
  button6.SetColor(lxT("#000001"));
  button6.SetPopupMenu(NULL);
  button6.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow4::button6_EvMouseButtonPress;
  button6.SetText(lxT(""));
  CreateChild(&button6);
  //button7
  button7.SetFOwner(this);
  button7.SetClass(lxT("CButton"));
  button7.SetName(lxT("button7"));
  button7.SetTag(0);
  button7.SetX(450);
  button7.SetY(146);
  button7.SetWidth(30);
  button7.SetHeight(20);
  button7.SetHint(lxT(""));
  button7.SetEnable(1);
  button7.SetVisible(1);
  button7.SetColor(lxT("#000001"));
  button7.SetPopupMenu(NULL);
  button7.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow4::button7_EvMouseButtonPress;
  button7.SetText(lxT(""));
  CreateChild(&button7);
  //button8
  button8.SetFOwner(this);
  button8.SetClass(lxT("CButton"));
  button8.SetName(lxT("button8"));
  button8.SetTag(0);
  button8.SetX(450);
  button8.SetY(196);
  button8.SetWidth(30);
  button8.SetHeight(20);
  button8.SetHint(lxT(""));
  button8.SetEnable(1);
  button8.SetVisible(1);
  button8.SetColor(lxT("#000001"));
  button8.SetPopupMenu(NULL);
  button8.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow4::button8_EvMouseButtonPress;
  button8.SetText(lxT(""));
  CreateChild(&button8);
  //button9
  button9.SetFOwner(this);
  button9.SetClass(lxT("CButton"));
  button9.SetName(lxT("button9"));
  button9.SetTag(0);
  button9.SetX(451);
  button9.SetY(246);
  button9.SetWidth(30);
  button9.SetHeight(20);
  button9.SetHint(lxT(""));
  button9.SetEnable(1);
  button9.SetVisible(1);
  button9.SetColor(lxT("#000001"));
  button9.SetPopupMenu(NULL);
  button9.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow4::button9_EvMouseButtonPress;
  button9.SetText(lxT(""));
  CreateChild(&button9);
  /*#Others*/
//lxrad automatic generated block end, don't edit above!
  button1.SetColor(255,0,0);
  button2.SetColor(0,255,0);

  Dt=0;
  Rt=0;
  usetrigger=1;
  triggerlv=2.5;
  chpin[0]=0;
  chpin[1]=1;
  toffset=250;
  run=1;
  
  fp = 0;
  tch = 0;
  is = 0;
  t = 0;
  tr = 0;
  update = 0;
  font = NULL;
  
  measures[0]=1;
  measures[1]=2;
  measures[2]=0;
  measures[3]=0;
  measures[4]=0;
  
  vmax = 5.0;
};
