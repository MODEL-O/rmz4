// undefined FUN_080eaabc(void)
// entry 0x80eaabc


undefined4 FUN_080eaabc(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = *(short *)(param_1 + 0xba);
  if (sVar1 != 0) {
    *(short *)(param_1 + 0xba) = sVar1 + -1;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080eaae4));
  return in_lr;
}


