// undefined FUN_0811a10c(void)
// entry 0x811a10c


undefined4 FUN_0811a10c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  char cVar6;
  short sVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *piVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined4 in_lr;
  
  pcVar16 = (char *)(param_1 + DAT_0811a190);
  if (*pcVar16 == '\0') {
    FUN_0800249c(0x13,0);
    *DAT_0811a194 = (short)DAT_0811a198;
    *(undefined1 *)(param_1 + 0xdd2) = 0x2c;
    iVar17 = DAT_0811a19c;
    *(undefined1 *)(param_1 + DAT_0811a19c) = 0;
    *(undefined1 *)(param_1 + iVar17 + 1) = 0;
    *pcVar16 = *pcVar16 + '\x01';
  }
  pcVar16 = (char *)(param_1 + DAT_0811a1a0);
  if (*pcVar16 == '\0') {
    FUN_080025d8(*(byte *)(param_1 + 0xdd0) + 0x14);
    cVar6 = FUN_080025d8(0x13);
    if (cVar6 == '\x03') {
      FUN_08002624(0x13);
      *pcVar16 = *pcVar16 + '\x01';
    }
  }
  pbVar8 = (byte *)(param_1 + DAT_0811a19c);
  if (*pbVar8 < 8) {
    uVar12 = 8;
    iVar17 = DAT_0811a1a4;
  }
  else {
    uVar12 = (undefined2)DAT_0811a1d0;
    iVar17 = DAT_0811a1cc;
  }
  *(undefined2 *)(iVar17 + 4) = uVar12;
  *(undefined2 *)(iVar17 + 8) = 0x80;
  *pbVar8 = *pbVar8 + 1;
  if (*(byte *)(param_1 + 0xdd0) == 4) {
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    uVar19 = (uint)*(byte *)(param_1 + 0xdd0);
    uVar18 = (uVar19 & 7) << 5;
    uVar19 = (uVar19 + 1 & 7) << 5;
  }
  iVar17 = param_1 + DAT_0811a210;
  pbVar9 = (byte *)(param_1 + DAT_0811a214);
  if (*pbVar9 < 3) {
    FUN_0811ad3c(param_1);
    bVar1 = *(byte *)(param_1 + 0xdd0);
    if (bVar1 == 1) {
      *(ushort *)(iVar17 + 0x30) = (ushort)*pbVar8 * 0x40 + *(short *)(iVar17 + 0x30);
      *(undefined2 *)(iVar17 + 0x32) = 0;
      *(ushort *)(iVar17 + 0x34) = (ushort)*pbVar8 * 0x40 + *(short *)(iVar17 + 0x34);
      *(ushort *)(iVar17 + 0x36) = (ushort)*pbVar8 * 0x60 + *(short *)(iVar17 + 0x36);
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          *(undefined2 *)(iVar17 + 0x30) = 0;
          *(ushort *)(iVar17 + 0x32) = (ushort)*pbVar8 * 0x40 + *(short *)(iVar17 + 0x32);
          *(ushort *)(iVar17 + 0x34) = (ushort)*pbVar8 * 0x60 + *(short *)(iVar17 + 0x34);
          sVar7 = (ushort)*pbVar8 << 7;
LAB_0811a286:
          *(short *)(iVar17 + 0x36) = sVar7 + *(short *)(iVar17 + 0x36);
          goto LAB_0811a2b8;
        }
      }
      else if (bVar1 == 2) {
        *(ushort *)(iVar17 + 0x30) = (ushort)*pbVar8 * 0x60 + *(short *)(iVar17 + 0x30);
        *(ushort *)(iVar17 + 0x32) = (ushort)*pbVar8 * 0x40 + *(short *)(iVar17 + 0x32);
        *(undefined2 *)(iVar17 + 0x34) = 0;
        sVar7 = (ushort)*pbVar8 << 6;
        goto LAB_0811a286;
      }
      iVar17 = param_1 + DAT_0811a354;
      *(ushort *)(iVar17 + 0x30) = (ushort)*pbVar8 * 0x80 + *(short *)(iVar17 + 0x30);
      *(ushort *)(iVar17 + 0x32) = (ushort)*pbVar8 * 0x60 + *(short *)(iVar17 + 0x32);
      *(ushort *)(iVar17 + 0x34) = (ushort)*pbVar8 * 0x40 + *(short *)(iVar17 + 0x34);
      *(undefined2 *)(iVar17 + 0x36) = 0;
    }
  }
LAB_0811a2b8:
  puVar5 = DAT_0811a48c;
  if (*pbVar9 == 1) {
    *(ushort *)(DAT_0811a358 + 2) = (ushort)*pbVar8 * -2 + 0x10 & 0x1f | (ushort)*pbVar8 << 9;
    if (7 < *pbVar8) {
      *pbVar9 = 2;
      *(undefined1 *)(param_1 + 0xdd2) = 0xff;
    }
    iVar17 = FUN_08000a70(0x140);
    if (iVar17 == 0) goto LAB_0811a4f6;
    FUN_08000ab4(0x240,iVar17,0x140);
    uVar14 = 0;
    uVar12 = (undefined2)DAT_0811a35c;
    iVar2 = DAT_0811a360;
    if (uVar18 != 0) {
      do {
        *(undefined2 *)(uVar14 * 2 + iVar17) = uVar12;
        uVar14 = uVar14 + 1 & 0xff;
        iVar2 = DAT_0811a360;
      } while (uVar14 < uVar18);
    }
    for (; iVar4 = DAT_0811a360, uVar19 < 0x60; uVar19 = uVar19 + 1 & 0xff) {
      DAT_0811a360 = iVar2;
      *(undefined2 *)(uVar19 * 2 + iVar17) = uVar12;
      iVar2 = DAT_0811a360;
      DAT_0811a360 = iVar4;
    }
    piVar10 = (int *)(DAT_0811a360 + 0x174);
    DAT_0811a360 = iVar2;
    *piVar10 = iVar17;
    *(undefined4 *)(iVar4 + 0x178) = DAT_0811a364;
    puVar13 = (undefined4 *)(iVar4 + 0x17c);
  }
  else if (*pbVar9 == 2) {
    *(ushort *)(DAT_0811a410 + 2) = (*pbVar8 - 8) * -2 + 0x10 & 0x1f | (*pbVar8 - 8) * 0x200;
    if (0xf < *pbVar8) {
      *pbVar9 = 3;
    }
    iVar17 = FUN_08000a70(0x140);
    if (iVar17 == 0) goto LAB_0811a4f6;
    FUN_08000ab4(0x240,iVar17,0x140);
    uVar15 = 0;
    uVar12 = (undefined2)DAT_0811a414;
    uVar14 = uVar19;
    iVar2 = DAT_0811a418;
    uVar3 = DAT_0811a41c;
    uVar11 = uVar19;
    if (uVar18 != 0) {
      do {
        *(undefined2 *)(uVar15 * 2 + iVar17) = uVar12;
        uVar15 = uVar15 + 1 & 0xff;
        iVar2 = DAT_0811a418;
        uVar3 = DAT_0811a41c;
      } while (uVar15 < uVar18);
    }
    while (iVar4 = DAT_0811a418, DAT_0811a418 = iVar2, DAT_0811a41c = uVar3,
          -1 < (int)(uVar11 * 0x1000000)) {
      *(undefined2 *)(uVar14 * 2 + iVar17) = uVar12;
      uVar11 = uVar14 + 1;
      uVar14 = uVar11 & 0xff;
      iVar2 = DAT_0811a418;
      uVar3 = DAT_0811a41c;
      DAT_0811a418 = iVar4;
    }
    for (; uVar18 < uVar19; uVar18 = uVar18 + 1 & 0xff) {
      *(short *)(uVar18 * 2 + iVar17) = (short)uVar3;
    }
    *(int *)(iVar4 + 0x174) = iVar17;
    *(undefined4 *)(iVar4 + 0x178) = DAT_0811a420;
    puVar13 = (undefined4 *)(iVar4 + 0x17c);
  }
  else {
    DAT_0811a48c[1] = (*pbVar8 - 0x10) * -2 + 0x10 & 0x1f | (*pbVar8 - 0x10) * 0x200;
    if (0x17 < *pbVar8) {
      *(char *)(param_1 + 3) = *(char *)(param_1 + 0xdd0) + '\x03';
      *pbVar9 = 0;
      FUN_08001d30(DAT_0811a490,
                   ((uint)*(ushort *)(DAT_0811a494 + 0x86) -
                   (uint)(*(ushort *)(DAT_0811a490 + 6) >> 6)) * 0x20 + 0x10000);
      FUN_08002208(DAT_0811a498,
                   ((uint)*(ushort *)(DAT_0811a49c + 0x86) - (uint)*(byte *)(DAT_0811a498 + 7)) *
                   0x20 + 0x200);
      *puVar5 = 0;
      return in_lr;
    }
    iVar17 = FUN_08000a70(0x140);
    if (iVar17 == 0) goto LAB_0811a4f6;
    FUN_08000ab4(0x240,iVar17,0x140);
    iVar2 = DAT_0811a560;
    for (; DAT_0811a560 = iVar2, uVar18 < uVar19; uVar18 = uVar18 + 1 & 0xff) {
      *(undefined2 *)(uVar18 * 2 + iVar17) = 0x250;
      iVar2 = DAT_0811a560;
    }
    *(int *)(iVar2 + 0x174) = iVar17;
    *(undefined4 *)(iVar2 + 0x178) = DAT_0811a564;
    puVar13 = (undefined4 *)(iVar2 + 0x17c);
  }
  *puVar13 = DAT_0811a568;
LAB_0811a4f6:
  iVar17 = FUN_08000a70(0x140);
  if (iVar17 != 0) {
    FUN_08000ab4(0,iVar17,0x140);
    uVar18 = 0;
    param_1 = param_1 + DAT_0811a56c;
    do {
      *(short *)(uVar18 * 2 + iVar17) =
           (short)(char)((ushort)*(undefined2 *)(param_1 + (uVar18 >> 5) * 2) >> 8);
      iVar2 = DAT_0811a560;
      uVar18 = uVar18 + 1 & 0xff;
    } while (uVar18 < 0x60);
    *(int *)(DAT_0811a560 + 400) = iVar17;
    *(undefined4 *)(iVar2 + 0x194) = DAT_0811a570;
    *(undefined4 *)(iVar2 + 0x198) = DAT_0811a568;
  }
  return in_lr;
}


