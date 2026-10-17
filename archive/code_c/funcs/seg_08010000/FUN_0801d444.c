// undefined FUN_0801d444(void)
// entry 0x801d444


undefined4 FUN_0801d444(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_lr;
  
  puVar4 = DAT_0801d4d4;
  iVar6 = FUN_08129120(*DAT_0801d4d4,0x14);
  iVar5 = DAT_0801d4e0;
  iVar9 = DAT_0801d4dc;
  piVar1 = DAT_0801d4e8;
  iVar2 = DAT_0801d4ec;
  iVar3 = DAT_0801d4f0;
  for (iVar6 = iVar6 * 0x10000 + DAT_0801d4d8; DAT_0801d4e8 = piVar1, DAT_0801d4ec = iVar2,
      DAT_0801d4f0 = iVar3, -1 < iVar6; iVar6 = (iVar6 + -1) * 0x10000) {
    iVar6 = iVar6 >> 0x10;
    *(ushort *)(iVar6 * 2 + iVar9) = *(ushort *)((int)puVar4 + iVar6 * 0x14 + 6) >> 6;
    *(ushort *)(iVar6 * 2 + iVar5) = (ushort)*(byte *)(iVar6 * 0x14 + DAT_0801d4e4 + 7);
    piVar1 = DAT_0801d4e8;
    iVar2 = DAT_0801d4ec;
    iVar3 = DAT_0801d4f0;
  }
  uVar7 = ((*piVar1 << 0xe) >> 0x10) - 1;
  uVar10 = uVar7 & 0xffff;
  while (-1 < (int)(uVar7 * 0x10000)) {
    iVar6 = (int)(uVar7 * 0x10000) >> 0x10;
    iVar9 = iVar6 * 2;
    *(ushort *)(iVar9 + iVar2) = *(ushort *)((int)piVar1 + iVar6 * 4 + piVar1[iVar6] + 6) >> 6;
    if (iVar6 < 0x50) {
      *(undefined2 *)(iVar9 + iVar3) = 0;
    }
    else {
      if (iVar6 < 0x80) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ushort)*(byte *)(iVar6 * 4 + piVar1[iVar6] + DAT_0801d528 + 7);
      }
      *(ushort *)(iVar9 + iVar3) = uVar8;
    }
    uVar10 = uVar10 * 0x10000 + DAT_0801d52c >> 0x10;
    uVar7 = uVar10;
  }
  return in_lr;
}


