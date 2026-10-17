// undefined FUN_080e7948(void)
// entry 0x80e7948


undefined4 FUN_080e7948(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar4 = *DAT_080e7a34;
  iVar7 = DAT_080e7a34[1];
  iVar10 = DAT_080e7a34[2];
  iVar5 = DAT_080e7a34[3];
  iVar8 = DAT_080e7a34[4];
  iVar11 = DAT_080e7a34[5];
  iVar6 = DAT_080e7a34[6];
  iVar9 = DAT_080e7a34[7];
  uVar13 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_08002b10(0x52);
  }
  local_28 = *(int *)(param_1 + 0x54) + (uVar13 * 2 + -1) * iVar4;
  local_24 = *(int *)(param_1 + 0x58) + iVar7;
  uVar13 = uVar13 | uVar13 << 4;
  FUN_080d4c8c(&local_28,DAT_080e7a38,0,uVar13,iVar4,iVar7,iVar10,iVar5,iVar8,iVar11,iVar6,iVar9);
  iVar1 = DAT_080e7a3c;
  iVar14 = 0;
  iVar12 = 3;
  do {
    uVar2 = DAT_080e7a44 * *DAT_080e7a40 + iVar1;
    local_28 = *(int *)(param_1 + 0x54) + (((uVar2 & 0x7fffffff) >> 0x10 & 0x1f) - 0xf) * 0x100;
    uVar2 = DAT_080e7a44 * (uVar2 & 0x7fffffff) + iVar1;
    *DAT_080e7a40 = uVar2 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x58) + ((uVar2 & 0x7fffffff) >> 0x10 & 0x1f) * 0x100 + 0x100;
    FUN_080d4c8c(&local_28,iVar14 + DAT_080e7a38,0,uVar13,iVar4,iVar7,iVar10,iVar5,iVar8,iVar11,
                 iVar6,iVar9);
    iVar14 = iVar14 + 0x1c;
    iVar12 = iVar12 + -1;
  } while (-1 < iVar12);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e7a48);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  return in_lr;
}


