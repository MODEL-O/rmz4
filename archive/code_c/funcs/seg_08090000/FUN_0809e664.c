// undefined FUN_0809e664(void)
// entry 0x809e664


undefined4 FUN_0809e664(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 7;
    FUN_08005760(param_1 + 0x74,DAT_0809e6b0,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    FUN_0801cf00(param_1,DAT_0809e6b4);
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 | 7;
    FUN_08005760(param_1 + 0x74,DAT_0809e70c,param_1 + 0x54,3);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar2 = FUN_08128fb8(*(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_0809e710) << 8,0x14);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    FUN_0801cf00(param_1,DAT_0809e714);
  }
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0xb4) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0xb4) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(undefined4 *)(param_1 + 0x98) = DAT_0809e774;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809e778);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  FUN_0809e77c(param_1);
  return in_lr;
}


