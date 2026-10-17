// undefined FUN_080d64b0(void)
// entry 0x80d64b0


undefined4 FUN_080d64b0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar8 + 10);
  bVar18 = bVar1 >> 4 & 1;
  bVar1 = bVar1 >> 5;
  uVar16 = (uint)*(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cc9c(param_1);
  bVar7 = bVar18;
  if (uVar16 == 1) {
    bVar7 = bVar18 ^ 1;
  }
  if (bVar7 == 0) {
    bVar6 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar6 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar6;
  *(byte *)(param_1 + 0x4c) = bVar7;
  pbVar13 = (byte *)(param_1 + 0x4a);
  *pbVar13 = *pbVar13 & 0xef | bVar7 << 4;
  bVar7 = *(byte *)(iVar8 + 10) >> 5;
  bVar6 = bVar7 & 1;
  if ((bVar7 & 1) == 0) {
    bVar7 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar7 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar7;
  *(byte *)(param_1 + 0x4d) = bVar6;
  *pbVar13 = *pbVar13 & 0xdf | bVar6 << 5;
  if ((*(char *)(param_1 + 0x78) == '\x02') && (uVar16 == 2)) {
    uVar16 = 1;
  }
  FUN_0801cf00(param_1,*(undefined2 *)(uVar16 * 2 + DAT_080d6608));
  iVar10 = DAT_080d66c0;
  puVar5 = DAT_080d66bc;
  uVar11 = DAT_080d6668;
  iVar15 = DAT_080d6664;
  iVar9 = DAT_080d6660;
  puVar4 = DAT_080d665c;
  iVar8 = DAT_080d6610;
  puVar3 = DAT_080d660c;
  if ((char)bVar18 != 0) {
    uVar16 = 2 - uVar16;
  }
  cVar2 = *(char *)(param_1 + 0x78);
  if (cVar2 == '\x02') {
    iVar15 = *(int *)(param_1 + 0x74) >> 6;
    iVar9 = (char)bVar18 + 1;
    if (iVar9 * 0x1000000 >> 0x18 == 2) {
      iVar9 = 0xff;
    }
    iVar10 = iVar15;
    if (iVar15 < 0) {
      iVar10 = -iVar15;
    }
    iVar9 = iVar9 << 0x18;
    if (iVar10 < 0x80) {
      iVar15 = iVar9 >> 0x11;
    }
    iVar10 = iVar15;
    if (iVar15 < 0) {
      iVar10 = -iVar15;
    }
    if (0x100 < iVar10) {
      iVar15 = iVar9 >> 0x10;
    }
    uVar11 = *DAT_080d660c * DAT_080d6610 + DAT_080d6614;
    uVar17 = uVar11 & 0x7fffffff;
    *DAT_080d660c = uVar17;
    *(uint *)(param_1 + 0x5c) =
         (uVar16 - 1) * 0x100 + (iVar9 >> 0x18) * ((uVar11 & 0x7fffffff) >> 0x10 & DAT_080d6618) +
         iVar15;
    if ((bVar1 & 1) != 0) goto LAB_080d66d4;
    uVar16 = uVar17 * iVar8 + DAT_080d6614;
    *puVar3 = uVar16 & 0x7fffffff;
    uVar11 = (uVar16 & 0x1ffffff) >> 0x10;
LAB_080d66b4:
    *(uint *)(param_1 + 0x60) = DAT_080d66d0 - uVar11;
  }
  else {
    if (cVar2 == '\x01') {
      uVar17 = DAT_080d6660 * *DAT_080d665c + DAT_080d6664;
      *(uint *)(param_1 + 0x5c) =
           (uVar16 - 1) * 0x100 + ((uVar17 & 0x7fffffff) >> 0x10 & DAT_080d6668) + DAT_080d666c;
      uVar16 = iVar9 * (uVar17 & 0x7fffffff) + iVar15;
      *puVar4 = uVar16 & 0x7fffffff;
      *(uint *)(param_1 + 0x60) = DAT_080d6670 - ((uVar16 & 0x7fffffff) >> 0x10 & uVar11);
      goto LAB_080d66e6;
    }
    uVar17 = DAT_080d66c0 * *DAT_080d66bc + DAT_080d66c4;
    uVar14 = uVar17 & 0x7fffffff;
    *DAT_080d66bc = uVar14;
    uVar11 = DAT_080d66c8;
    *(uint *)(param_1 + 0x5c) =
         (uVar16 - 1) * 0x100 + ((uVar17 & 0x7fffffff) >> 0x10 & DAT_080d66c8) + DAT_080d66cc;
    if ((bVar1 & 1) == 0) {
      uVar16 = iVar10 * uVar14 + DAT_080d66c4;
      *puVar5 = uVar16 & 0x7fffffff;
      uVar11 = (uVar16 & 0x7fffffff) >> 0x10 & uVar11;
      goto LAB_080d66b4;
    }
LAB_080d66d4:
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if ((bVar1 & 1) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0xa00;
  }
LAB_080d66e6:
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar12 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d6710);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar12 + 4);
  FUN_080d62b4(param_1);
  return in_lr;
}


