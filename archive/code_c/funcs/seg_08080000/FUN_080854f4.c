// undefined FUN_080854f4(void)
// entry 0x80854f4


undefined4 FUN_080854f4(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08085558);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  FUN_08005760(param_1 + 0x74,DAT_0808555c,param_1 + 0x54,2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08085560;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar3 == 0) {
    *(undefined1 *)(param_1 + 0xc2) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xc2) = 1;
  }
  FUN_0801cc9c(param_1);
  bVar1 = 0 < *(int *)(*DAT_08085590 + 0x54) - *(int *)(param_1 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cf00(param_1,0x1b00);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08085624;
  sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
  if (sVar3 != 0) {
    uVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
  }
  iVar6 = FUN_0807f90c(param_1);
  if (iVar6 != 0) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08085628));
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808562c));
  }
  *(undefined1 *)(param_1 + 0xc3) = 0;
  FUN_08085630(param_1);
  return in_lr;
}


