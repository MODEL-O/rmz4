// undefined FUN_080b2588(void)
// entry 0x80b2588


undefined4 FUN_080b2588(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,DAT_080b25a0);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x11) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080b2600,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b2604;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080b2608;
  *(undefined1 *)(param_1 + 0xd) = 4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


