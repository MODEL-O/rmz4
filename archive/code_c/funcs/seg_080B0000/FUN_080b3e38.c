// undefined FUN_080b3e38(void)
// entry 0x80b3e38


undefined8 FUN_080b3e38(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080b3e74 + 0x54)) {
    *(byte *)(param_1 + 10) = bVar1 | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  return CONCAT44(in_lr,(uint)((bVar1 >> 4 & 1) != (*(byte *)(param_1 + 10) >> 4 & 1)));
}


