// undefined FUN_08086de8(void)
// entry 0x8086de8


undefined4 FUN_08086de8(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_08086e58 + 0x54);
  cVar2 = *(char *)(param_1 + 0x10);
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08086e5c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  FUN_0801cc9c(param_1);
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(bool *)(param_1 + 0x4c) = bVar1;
  pbVar9 = (byte *)(param_1 + 0x4a);
  *pbVar9 = *pbVar9 & 0xef | bVar1 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar10 = DAT_08086eb8;
  iVar8 = param_1 + 0x74;
  FUN_08005760(iVar8,DAT_08086eb8,param_1 + 0x54,10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08086ebc;
  if (cVar2 == '\0') {
    uVar6 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08005784(iVar8,uVar10);
    FUN_0801cf00(param_1,0x1d00);
    FUN_0801cff0(param_1);
  }
  else if (cVar2 == '\x01') {
    uVar6 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08005784(iVar8,uVar10);
    FUN_0801cf00(param_1,0x1d00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *pbVar9 = *pbVar9 & 0xdf | 0x20;
    FUN_0801cff0(param_1);
  }
  iVar8 = *(int *)(param_1 + 0x54) + DAT_08086f5c;
  uVar10 = *(undefined4 *)(param_1 + 0x58);
  sVar4 = FUN_08007c7c(iVar8,uVar10);
  if (sVar4 == 0) {
    iVar8 = *(int *)(param_1 + 0x54) + 0x800;
    uVar10 = *(undefined4 *)(param_1 + 0x58);
    sVar4 = FUN_08007c7c(iVar8,uVar10);
    if (sVar4 == 0) goto LAB_08086f86;
    iVar7 = FUN_08008868(iVar8,uVar10);
    iVar8 = DAT_08086f9c;
  }
  else {
    iVar7 = FUN_08008988(iVar8,uVar10);
    iVar8 = 0x800;
  }
  *(int *)(param_1 + 0x54) = iVar7 + iVar8;
LAB_08086f86:
  FUN_08086fa0(param_1);
  return in_lr;
}


