// undefined FUN_0801c204(void)
// entry 0x801c204


undefined4 FUN_0801c204(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = *(short *)(param_1 + 0x68) + -1;
  *(short *)(param_1 + 0x68) = sVar1;
  if (sVar1 == 0) {
    *(char *)(DAT_0801c224 + DAT_0801c228) = *(char *)(DAT_0801c224 + DAT_0801c228) + '\x01';
  }
  return in_lr;
}


