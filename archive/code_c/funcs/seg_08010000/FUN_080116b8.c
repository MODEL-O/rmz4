// undefined FUN_080116b8(void)
// entry 0x80116b8


undefined4 FUN_080116b8(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = *(short *)(param_1 + 0x68) + -1;
  *(short *)(param_1 + 0x68) = sVar1;
  if (sVar1 == 0) {
    *(char *)(DAT_080116d8 + DAT_080116dc) = *(char *)(DAT_080116d8 + DAT_080116dc) + '\x01';
  }
  return in_lr;
}


