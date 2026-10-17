// undefined FUN_081045ec(void)
// entry 0x81045ec


undefined4 FUN_081045ec(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = DAT_08104620;
  FUN_0801cf00(param_1,0xd900);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  return in_lr;
}


