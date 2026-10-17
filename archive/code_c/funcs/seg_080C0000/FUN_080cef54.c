// undefined FUN_080cef54(void)
// entry 0x80cef54


undefined4 FUN_080cef54(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080cefc4);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080cefc8,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080cefcc;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = 0xffffff40;
  }
  else {
    uVar1 = 0xc0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = DAT_080cf008;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cf00c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080ceef4(param_1);
  return in_lr;
}


