// undefined FUN_080b564c(void)
// entry 0x80b564c


undefined4 FUN_080b564c(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080b5680 + 0x54)) {
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


