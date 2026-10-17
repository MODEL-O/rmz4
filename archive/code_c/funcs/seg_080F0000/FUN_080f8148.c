// undefined FUN_080f8148(void)
// entry 0x80f8148


undefined4 FUN_080f8148(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 0x13;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080f81bc,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_0801cf00(param_1,DAT_080f81c0);
  *(undefined1 *)(param_1 + 0xb4) = 0;
  return in_lr;
}


