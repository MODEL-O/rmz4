// undefined FUN_080ca768(void)
// entry 0x80ca768


undefined4 FUN_080ca768(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,32000);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080ca7c8,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080ca7f4;
    uVar3 = DAT_080ca7f8;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1400;
    uVar3 = 0x2c0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2 + 0x100;
    uVar3 = DAT_080ca824;
  }
  else {
    iVar2 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2 + DAT_080ca7fc;
    uVar3 = 0x1000;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x11) & 1;
  *(byte *)(param_1 + 0x4d) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar1 << 5;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ca86c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080ca570(param_1);
  return in_lr;
}


