// undefined FUN_080ad7ec(void)
// entry 0x80ad7ec


undefined4 FUN_080ad7ec(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ad844);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801cf00(param_1,0x9d00);
    *(undefined4 *)(param_1 + 0xb4) = 1;
  }
  else {
    FUN_0801cf00(param_1,DAT_080ad8a8);
    *(undefined4 *)(param_1 + 0xb4) = 3;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffb0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080ad8ac,param_1 + 0x54,0x80);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080ad8b0;
  FUN_080ad8b4(param_1);
  return in_lr;
}


