// undefined FUN_081046cc(void)
// entry 0x81046cc


undefined4 FUN_081046cc(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = DAT_081046fc;
  FUN_0801cf00(param_1,DAT_08104700);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  return in_lr;
}


