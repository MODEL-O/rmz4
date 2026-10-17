// undefined FUN_08003620(void)
// entry 0x8003620


void FUN_08003620(uint *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  ushort *puVar19;
  byte *pbVar20;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  
  bVar3 = false;
  uVar12 = *param_2;
  if ((uVar12 & 0x10) == (*param_1 & 0x10)) {
    bVar3 = true;
    uVar12 = param_2[1];
  }
  else if ((int)*param_1 < (int)uVar12) {
    local_54 = uVar12 + 0x110;
    uVar12 = param_2[1];
    local_50 = uVar12 - 0x10;
  }
  else {
    local_54 = uVar12 - 0x20;
    uVar12 = param_2[1];
    local_50 = uVar12 - 0x10;
  }
  bVar4 = false;
  if ((uVar12 & 0x10) == (param_1[1] & 0x10)) {
    bVar4 = true;
  }
  else if ((int)param_1[1] < (int)uVar12) {
    local_4c = *param_2 - 0x20;
    local_48 = uVar12 + 0xb0;
  }
  else {
    local_4c = *param_2 - 0x20;
    local_48 = uVar12 - 0x10;
  }
  if ((int)local_54 < 0) {
    local_54 = 0;
  }
  if ((int)local_50 < 0) {
    local_50 = 0;
  }
  if ((int)local_4c < 0) {
    local_4c = 0;
  }
  if ((int)local_48 < 0) {
    local_48 = 0;
  }
  if (!bVar3) {
    iVar5 = FUN_08128fb8(local_54,0xf0);
    pbVar20 = (byte *)param_1[5];
    iVar6 = FUN_08128fb8(local_50,0xa0);
    pbVar18 = pbVar20 + (uint)*pbVar20 * iVar6 + iVar5 + 4;
    uVar12 = FUN_08129050(local_54,0xf0);
    uVar12 = (uVar12 & 0xfffff) >> 4;
    uVar14 = FUN_08129050(local_50,0xa0);
    uVar15 = param_1[4];
    iVar5 = (int)(uVar14 << 0xc) >> 0x10;
    puVar19 = (ushort *)
              (uVar15 + (uint)*pbVar18 * 300 + ((int)(uVar12 << 0x10) >> 0xf) + iVar5 * 0x1e);
    uVar10 = 0;
    iVar5 = 10 - iVar5;
    uVar16 = (int)local_54 >> 3;
    if (0 < iVar5) {
      uVar13 = param_1[3];
      do {
        puVar17 = (undefined4 *)((uint)*puVar19 * 8 + uVar13);
        puVar7 = (undefined4 *)
                 ((((int)(((local_50 & 0xffff) + (short)uVar10 * 0x10) * 0x10000) >> 0xe & 0x3c0U) +
                  (uVar16 & 0x1e)) * 2 + param_3 + (local_54 & 0x100) * 8);
        *puVar7 = *puVar17;
        puVar7[0x10] = puVar17[1];
        puVar19 = puVar19 + 0xf;
        uVar9 = (int)(short)uVar10 + 1;
        uVar10 = uVar9 & 0xffff;
      } while ((int)(uVar9 * 0x10000) >> 0x10 < iVar5);
    }
    bVar1 = *pbVar20;
    iVar5 = (int)(uVar12 << 0x10) >> 0xf;
    puVar19 = (ushort *)(uVar15 + (uint)pbVar18[bVar1] * 300 + iVar5);
    iVar6 = uVar10 << 0x10;
    if ((iVar6 >> 0x10 < 0xd) &&
       (iVar8 = (int)(short)((uVar14 & 0xfffff) >> 4), (iVar6 >> 0x10) + -10 + iVar8 < 10)) {
      do {
        puVar17 = (undefined4 *)(param_1[3] + (uint)*puVar19 * 8);
        puVar7 = (undefined4 *)
                 ((((int)(((iVar6 >> 0x10) * 0x10 + (local_50 & 0xffff)) * 0x10000) >> 0xe & 0x3c0U)
                  + (uVar16 & 0x1e)) * 2 + param_3 + (local_54 & 0x100) * 8);
        *puVar7 = *puVar17;
        puVar7[0x10] = puVar17[1];
        puVar19 = puVar19 + 0xf;
        uVar12 = (iVar6 >> 0x10) + 1;
        uVar10 = uVar12 & 0xffff;
        iVar6 = uVar12 * 0x10000;
        if (0xc < iVar6 >> 0x10) break;
      } while ((iVar6 >> 0x10) + -10 + iVar8 < 10);
    }
    puVar19 = (ushort *)(uVar15 + (uint)(pbVar18 + bVar1)[*pbVar20] * 300 + iVar5);
    iVar5 = uVar10 << 0x10;
    if (iVar5 >> 0x10 < 0xd) {
      uVar12 = param_1[3];
      do {
        puVar17 = (undefined4 *)(uVar12 + (uint)*puVar19 * 8);
        puVar7 = (undefined4 *)
                 ((local_54 & 0x100) * 8 +
                 (((int)(((iVar5 >> 0x10) * 0x10 + (local_50 & 0xffff)) * 0x10000) >> 0xe & 0x3c0U)
                 + (uVar16 & 0x1e)) * 2 + param_3);
        *puVar7 = *puVar17;
        puVar7[0x10] = puVar17[1];
        puVar19 = puVar19 + 0xf;
        iVar5 = ((iVar5 >> 0x10) + 1) * 0x10000;
      } while (iVar5 >> 0x10 < 0xd);
    }
  }
  if (!bVar4) {
    iVar5 = FUN_08128fb8(local_4c,0xf0);
    pbVar18 = (byte *)param_1[5];
    iVar6 = FUN_08128fb8(local_48,0xa0);
    pbVar18 = pbVar18 + (uint)*pbVar18 * iVar6 + iVar5 + 4;
    uVar12 = FUN_08129050(local_4c,0xf0);
    uVar14 = FUN_08129050(local_48,0xa0);
    uVar15 = param_1[4];
    sVar11 = (short)((uVar12 & 0xfffff) >> 4);
    puVar19 = (ushort *)
              (uVar15 + (uint)*pbVar18 * 300 + sVar11 * 2 + ((int)(uVar14 << 0xc) >> 0x10) * 0x1e);
    uVar12 = 0;
    iVar5 = 0xf - sVar11;
    if (0 < iVar5) {
      uVar16 = param_1[3];
      do {
        puVar17 = (undefined4 *)((uint)*puVar19 * 8 + uVar16);
        uVar10 = ((local_4c & 0xffff) + (short)uVar12 * 0x10) * 0x10000;
        puVar7 = (undefined4 *)
                 (((int)(uVar10 & 0x1000000) >> 0x10) * 8 +
                 ((local_48 & 0xf0) * 4 + ((int)uVar10 >> 0x13 & 0x1eU)) * 2 + param_3);
        *puVar7 = *puVar17;
        puVar7[0x10] = puVar17[1];
        puVar19 = puVar19 + 1;
        uVar10 = (int)(short)uVar12 + 1;
        uVar12 = uVar10 & 0xffff;
      } while ((int)(uVar10 * 0x10000) >> 0x10 < iVar5);
    }
    iVar5 = (int)(short)((uVar14 & 0xfffff) >> 4);
    puVar19 = (ushort *)(uVar15 + (uint)pbVar18[1] * 300 + iVar5 * 0x1e);
    iVar6 = uVar12 << 0x10;
    if ((iVar6 >> 0x10 < 0x14) && ((iVar6 >> 0x10) + -0xf + (int)sVar11 < 0xf)) {
      do {
        puVar17 = (undefined4 *)(param_1[3] + (uint)*puVar19 * 8);
        uVar12 = ((iVar6 >> 0x10) * 0x10 + (local_4c & 0xffff)) * 0x10000;
        puVar7 = (undefined4 *)
                 (((int)(uVar12 & 0x1000000) >> 0x10) * 8 +
                 ((local_48 & 0xf0) * 4 + ((int)uVar12 >> 0x13 & 0x1eU)) * 2 + param_3);
        *puVar7 = *puVar17;
        puVar7[0x10] = puVar17[1];
        puVar19 = puVar19 + 1;
        uVar14 = (iVar6 >> 0x10) + 1;
        uVar12 = uVar14 & 0xffff;
        iVar6 = uVar14 * 0x10000;
        if (0x13 < iVar6 >> 0x10) break;
      } while ((iVar6 >> 0x10) + -0xf + (int)sVar11 < 0xf);
    }
    puVar19 = (ushort *)(uVar15 + (uint)pbVar18[2] * 300 + iVar5 * 0x1e);
    iVar5 = uVar12 << 0x10;
    if (iVar5 >> 0x10 < 0x14) {
      uVar12 = param_1[3];
      do {
        puVar17 = (undefined4 *)((uint)*puVar19 * 8 + uVar12);
        uVar14 = ((iVar5 >> 0x10) * 0x10 + (local_4c & 0xffff)) * 0x10000;
        puVar7 = (undefined4 *)
                 (((int)(uVar14 & 0x1000000) >> 0x10) * 8 +
                 ((local_48 & 0xf0) * 4 + ((int)uVar14 >> 0x13 & 0x1eU)) * 2 + param_3);
        *puVar7 = *puVar17;
        puVar7[0x10] = puVar17[1];
        puVar19 = puVar19 + 1;
        iVar5 = ((iVar5 >> 0x10) + 1) * 0x10000;
      } while (iVar5 >> 0x10 < 0x14);
    }
  }
  uVar14 = *param_2;
  uVar2 = (ushort)DAT_08003af0;
  *(ushort *)(param_1 + 2) = (ushort)uVar14 & uVar2;
  uVar12 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)uVar12 & uVar2;
  *param_1 = uVar14;
  param_1[1] = uVar12;
  return;
}


