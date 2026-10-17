// undefined FUN_080b0ccc(void)
// entry 0x80b0ccc


undefined4 FUN_080b0ccc(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080b0d00 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    bVar1 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    bVar1 = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  *(byte *)(param_1 + 0x4a) = bVar1;
  return in_lr;
}


