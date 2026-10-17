// undefined FUN_080b2b38(void)
// entry 0x80b2b38


undefined4 FUN_080b2b38(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080b2b6c + 0x54)) {
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


