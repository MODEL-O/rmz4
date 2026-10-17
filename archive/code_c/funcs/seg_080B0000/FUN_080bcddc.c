// undefined FUN_080bcddc(void)
// entry 0x80bcddc


undefined4 FUN_080bcddc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801cf00(param_1,0xee00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080bce24,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    uVar1 = DAT_080bce28;
  }
  else {
    FUN_0801cf00(param_1,DAT_080bcecc);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080bced0,param_1 + 0x54,0x78);
    *(int *)(param_1 + 0xa0) = param_1;
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + DAT_080bced4;
  *(uint *)(param_1 + 0x5c) = DAT_080bced8 + (uint)*(byte *)(param_1 + 0x11) * -6;
  *(undefined4 *)(param_1 + 0x60) = 0;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bcedc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080bcee0(param_1);
  return in_lr;
}


