// undefined FUN_08003be4(void)
// entry 0x8003be4


void FUN_08003be4(uint *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  byte *pbVar17;
  ushort *puVar18;
  short sVar19;
  uint uVar20;
  uVar3 = *param_2;
  uVar11 = param_2[1];
  iVar4 = FUN_08128fb8(uVar3,0xf0);
  pbVar17 = (byte *)param_1[5];
  iVar5 = FUN_08128fb8(uVar11,0xa0);
  pbVar17 = pbVar17 + (uint)*pbVar17 * iVar5 + iVar4 + 4;
  uVar6 = FUN_08129050(uVar3,0xf0);
  uVar7 = FUN_08129050(uVar11,0xa0);
  sVar10 = (short)((uVar6 & 0xfffff) >> 4);
  iVar4 = (int)(uVar7 << 0xc) >> 0x10;
  puVar18 = (ushort *)(param_1[4] + (uint)*pbVar17 * 300 + sVar10 * 2 + iVar4 * 0x1e);
  uVar6 = 0;
  uVar20 = 0;
  iVar4 = 10 - iVar4;
  if (0 < iVar4) {
    iVar5 = 0xf - sVar10;
    do {
      uVar20 = 0;
      if (0 < iVar5) {
        uVar8 = param_1[3];
        do {
          puVar15 = (undefined4 *)((uint)*puVar18 * 8 + uVar8);
          uVar12 = ((short)uVar20 * 0x10 + (uVar3 & 0xffff)) * 0x10000;
          puVar9 = (undefined4 *)
                   (((int)(uVar12 & 0x1000000) >> 0x10) * 8 +
                   (((int)(((uVar11 & 0xffff) + ((int)(uVar6 << 0x10) >> 0xc)) * 0x10000) >> 0xe &
                    0x3c0U) + ((int)uVar12 >> 0x13 & 0x1eU)) * 2 + param_3);
          *puVar9 = *puVar15;
          puVar9[0x10] = puVar15[1];
          puVar18 = puVar18 + 1;
          uVar12 = (int)(short)uVar20 + 1;
          uVar20 = uVar12 & 0xffff;
        } while ((int)(uVar12 * 0x10000) >> 0x10 < iVar5);
      }
      puVar18 = puVar18 + (0xf - (short)uVar20);
      uVar8 = uVar6 * 0x10000 + 0x10000;
      uVar6 = uVar8 >> 0x10;
    } while ((int)uVar8 >> 0x10 < iVar4);
  }
  pbVar17 = pbVar17 + 1;
  uVar8 = param_1[4];
  iVar4 = (int)(short)((uVar7 & 0xfffff) >> 4);
  puVar18 = (ushort *)(uVar8 + (uint)*pbVar17 * 300 + iVar4 * 0x1e);
  iVar5 = uVar20 * 0x10000;
  uVar6 = 0;
  iVar4 = 10 - iVar4;
  pbVar13 = (byte *)param_1[5];
  if (0 < iVar4) {
    do {
      iVar5 = uVar20 << 0x10;
      uVar7 = uVar20;
      if (iVar5 >> 0x10 < 0x10) {
        uVar12 = param_1[3];
        do {
          puVar15 = (undefined4 *)((uint)*puVar18 * 8 + uVar12);
          uVar7 = ((iVar5 >> 0x10) * 0x10 + (uVar3 & 0xffff)) * 0x10000;
          puVar9 = (undefined4 *)
                   (((int)(uVar7 & 0x1000000) >> 0x10) * 8 +
                   (((int)(((uVar11 & 0xffff) + ((int)(uVar6 << 0x10) >> 0xc)) * 0x10000) >> 0xe &
                    0x3c0U) + ((int)uVar7 >> 0x13 & 0x1eU)) * 2 + param_3);
          *puVar9 = *puVar15;
          puVar9[0x10] = puVar15[1];
          puVar18 = puVar18 + 1;
          uVar16 = (iVar5 >> 0x10) + 1;
          uVar7 = uVar16 & 0xffff;
          iVar5 = uVar16 * 0x10000;
        } while (iVar5 >> 0x10 < 0x10);
      }
      iVar5 = uVar7 << 0x10;
      puVar18 = puVar18 + (0xf - ((iVar5 >> 0x10) - (int)(short)uVar20));
      uVar7 = uVar6 * 0x10000 + 0x10000;
      uVar6 = uVar7 >> 0x10;
    } while ((int)uVar7 >> 0x10 < iVar4);
  }
  bVar1 = *pbVar13;
  puVar18 = (ushort *)(uVar8 + (uint)(pbVar17 + bVar1)[-1] * 300 + sVar10 * 2);
  iVar4 = uVar6 << 0x10;
  if (iVar4 >> 0x10 < 0xb) {
    iVar14 = 0xf - sVar10;
    uVar7 = uVar6;
    do {
      uVar20 = 0;
      if (0 < iVar14) {
        uVar12 = param_1[3];
        do {
          puVar15 = (undefined4 *)((uint)*puVar18 * 8 + uVar12);
          uVar16 = ((short)uVar20 * 0x10 + (uVar3 & 0xffff)) * 0x10000;
          puVar9 = (undefined4 *)
                   (((int)(uVar16 & 0x1000000) >> 0x10) * 8 +
                   (((int)(((uVar11 & 0xffff) + (iVar4 >> 0xc)) * 0x10000) >> 0xe & 0x3c0U) +
                   ((int)uVar16 >> 0x13 & 0x1eU)) * 2 + param_3);
          *puVar9 = *puVar15;
          puVar9[0x10] = puVar15[1];
          puVar18 = puVar18 + 1;
          uVar16 = (int)(short)uVar20 + 1;
          uVar20 = uVar16 & 0xffff;
        } while ((int)(uVar16 * 0x10000) >> 0x10 < iVar14);
      }
      iVar5 = uVar20 * 0x10000;
      puVar18 = puVar18 + (0xf - (iVar5 >> 0x10));
      uVar7 = uVar7 * 0x10000 + 0x10000 >> 0x10;
      iVar4 = uVar7 << 0x10;
    } while (iVar4 >> 0x10 < 0xb);
  }
  puVar18 = (ushort *)(uVar8 + (uint)pbVar17[bVar1] * 300);
  iVar4 = uVar6 << 0x10;
  if (iVar4 >> 0x10 < 0xb) {
    sVar10 = (short)((uint)iVar5 >> 0x10);
    do {
      sVar19 = sVar10;
      if (iVar5 >> 0x10 < 0x10) {
        uVar7 = param_1[3];
        iVar14 = iVar5;
        do {
          puVar15 = (undefined4 *)((uint)*puVar18 * 8 + uVar7);
          uVar20 = ((iVar14 >> 0x10) * 0x10 + (uVar3 & 0xffff)) * 0x10000;
          puVar9 = (undefined4 *)
                   (((int)(uVar20 & 0x1000000) >> 0x10) * 8 +
                   (((int)(((uVar11 & 0xffff) + (iVar4 >> 0xc)) * 0x10000) >> 0xe & 0x3c0U) +
                   ((int)uVar20 >> 0x13 & 0x1eU)) * 2 + param_3);
          *puVar9 = *puVar15;
          puVar9[0x10] = puVar15[1];
          puVar18 = puVar18 + 1;
          iVar14 = (iVar14 >> 0x10) + 1;
          sVar19 = (short)iVar14;
          iVar14 = iVar14 * 0x10000;
        } while (iVar14 >> 0x10 < 0x10);
      }
      puVar18 = puVar18 + (0xf - ((int)sVar19 - (int)sVar10));
      uVar6 = uVar6 * 0x10000 + 0x10000 >> 0x10;
      iVar4 = uVar6 << 0x10;
    } while (iVar4 >> 0x10 < 0xb);
  }
  uVar6 = *param_2;
  uVar2 = (ushort)0x000001ff;
  *(ushort *)(param_1 + 2) = (ushort)uVar6 & uVar2;
  uVar3 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)uVar3 & uVar2;
  *param_1 = uVar6;
  param_1[1] = uVar3;
  return;
}


