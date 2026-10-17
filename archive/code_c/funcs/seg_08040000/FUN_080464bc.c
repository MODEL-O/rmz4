// undefined FUN_080464bc(void)
// entry 0x80464bc


undefined4 FUN_080464bc(int param_1)

{
  undefined4 in_lr;
  byte abStack_10 [8];
  
  FUN_08129258(abStack_10,DAT_08046510,5);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08046514 + (uint)abStack_10[*(byte *)(param_1 + 0x11)] & 0xffff);
  FUN_0801d134(param_1);
  FUN_08046330(param_1);
  return in_lr;
}


