// undefined FUN_080e38a0(void)
// entry 0x80e38a0


undefined4 FUN_080e38a0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(int *)(*DAT_080e38d0 + 0x54) < *(int *)(param_1 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    bVar1 = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    bVar1 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  *(byte *)(param_1 + 0x4a) = bVar1;
  return in_lr;
}


