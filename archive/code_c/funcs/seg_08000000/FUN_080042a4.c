// undefined FUN_080042a4(void)
// entry 0x80042a4


undefined4 FUN_080042a4(int param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  ushort uVar11;
  undefined4 *puVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 in_lr;
  
  uVar11 = *param_2;
  sVar3 = FUN_08128fb8((int)(short)uVar11,0xf);
  pbVar14 = *(byte **)(param_1 + 0x14);
  uVar2 = param_2[1];
  sVar4 = FUN_08128fb8((int)(short)uVar2);
  pbVar14 = pbVar14 + (uint)*pbVar14 * (int)sVar4 + sVar3 + 4;
  sVar3 = FUN_08129050((int)(short)uVar11,0xf);
  sVar4 = FUN_08129050((int)(short)uVar2,10);
  iVar15 = (int)sVar3;
  iVar8 = (int)sVar4;
  puVar16 = (ushort *)(*(int *)(param_1 + 0x10) + (uint)*pbVar14 * 300 + iVar15 * 2 + iVar8 * 0x1e);
  uVar18 = 0;
  uVar17 = 0;
  if ((0 < 10 - iVar8) && (0 < (short)param_2[3])) {
    do {
      uVar11 = param_2[1];
      uVar17 = 0;
      if ((0 < 0xf - iVar15) && (0 < (short)param_2[2])) {
        do {
          puVar12 = (undefined4 *)(*(int *)(param_1 + 0xc) + (uint)*puVar16 * 8);
          uVar9 = ((uint)*param_2 + (int)(short)uVar17) * 0x100000;
          puVar5 = (undefined4 *)
                   (((int)(uVar9 & 0x1000000) >> 0x10) * 8 +
                   (((int)(((uint)uVar11 * 0x10 + ((int)(uVar18 << 0x10) >> 0xc)) * 0x10000) >> 0xe
                    & 0x3c0U) + ((int)uVar9 >> 0x13 & 0x1eU)) * 2 + param_3);
          *puVar5 = *puVar12;
          puVar5[0x10] = puVar12[1];
          puVar16 = puVar16 + 1;
          uVar9 = (int)(short)uVar17 + 1;
          uVar17 = uVar9 & 0xffff;
          iVar7 = (int)(uVar9 * 0x10000) >> 0x10;
          if (0xf - iVar15 <= iVar7) break;
        } while (iVar7 < (short)param_2[2]);
      }
      puVar16 = puVar16 + (0xf - (short)uVar17);
      uVar9 = uVar18 * 0x10000 + 0x10000;
      uVar18 = uVar9 >> 0x10;
      iVar7 = (int)uVar9 >> 0x10;
    } while ((iVar7 < 10 - iVar8) && (iVar7 < (short)param_2[3]));
  }
  pbVar14 = pbVar14 + 1;
  iVar15 = *(int *)(param_1 + 0x10);
  puVar16 = (ushort *)(iVar15 + (uint)*pbVar14 * 300 + sVar4 * 0x1e);
  iVar8 = uVar17 * 0x10000;
  uVar18 = 0;
  iVar7 = 10 - sVar4;
  pbVar10 = *(byte **)(param_1 + 0x14);
  uVar11 = param_2[3];
  if ((0 < iVar7) && (0 < (short)uVar11)) {
    do {
      uVar11 = param_2[1];
      iVar8 = uVar17 << 0x10;
      uVar9 = uVar17;
      if (iVar8 >> 0x10 < (int)(short)param_2[2]) {
        iVar6 = *(int *)(param_1 + 0xc);
        do {
          puVar12 = (undefined4 *)((uint)*puVar16 * 8 + iVar6);
          uVar9 = ((uint)*param_2 + (iVar8 >> 0x10)) * 0x100000;
          puVar5 = (undefined4 *)
                   (((int)(uVar9 & 0x1000000) >> 0x10) * 8 +
                   (((int)(((uint)uVar11 * 0x10 + ((int)(uVar18 << 0x10) >> 0xc)) * 0x10000) >> 0xe
                    & 0x3c0U) + ((int)uVar9 >> 0x13 & 0x1eU)) * 2 + param_3);
          *puVar5 = *puVar12;
          puVar5[0x10] = puVar12[1];
          puVar16 = puVar16 + 1;
          uVar13 = (iVar8 >> 0x10) + 1;
          uVar9 = uVar13 & 0xffff;
          iVar8 = uVar13 * 0x10000;
        } while (iVar8 >> 0x10 < (int)(short)param_2[2]);
      }
      iVar8 = uVar9 << 0x10;
      puVar16 = puVar16 + (0xf - ((iVar8 >> 0x10) - (int)(short)uVar17));
      uVar9 = uVar18 * 0x10000 + 0x10000;
      uVar18 = uVar9 >> 0x10;
      iVar6 = (int)uVar9 >> 0x10;
      uVar11 = param_2[3];
    } while ((iVar6 < iVar7) && (iVar6 < (short)uVar11));
  }
  bVar1 = *pbVar10;
  iVar7 = (int)sVar3;
  puVar16 = (ushort *)(iVar15 + (uint)(pbVar14 + bVar1)[-1] * 300 + iVar7 * 2);
  iVar6 = uVar18 * 0x10000;
  if (iVar6 < (int)((uint)uVar11 * 0x10000)) {
    uVar17 = uVar18;
    do {
      uVar11 = param_2[1];
      uVar9 = 0;
      if ((0 < 0xf - iVar7) && (0 < (short)param_2[2])) {
        do {
          puVar12 = (undefined4 *)(*(int *)(param_1 + 0xc) + (uint)*puVar16 * 8);
          uVar13 = ((uint)*param_2 + (int)(short)uVar9) * 0x100000;
          puVar5 = (undefined4 *)
                   (((int)(uVar13 & 0x1000000) >> 0x10) * 8 +
                   (((int)(((uint)uVar11 * 0x10 + (iVar6 >> 0xc)) * 0x10000) >> 0xe & 0x3c0U) +
                   ((int)uVar13 >> 0x13 & 0x1eU)) * 2 + param_3);
          *puVar5 = *puVar12;
          puVar5[0x10] = puVar12[1];
          puVar16 = puVar16 + 1;
          uVar13 = (int)(short)uVar9 + 1;
          uVar9 = uVar13 & 0xffff;
          iVar8 = (int)(uVar13 * 0x10000) >> 0x10;
          if (0xf - iVar7 <= iVar8) break;
        } while (iVar8 < (short)param_2[2]);
      }
      iVar8 = uVar9 << 0x10;
      puVar16 = puVar16 + (0xf - (iVar8 >> 0x10));
      uVar17 = uVar17 * 0x10000 + 0x10000 >> 0x10;
      iVar6 = uVar17 << 0x10;
      uVar11 = param_2[3];
    } while (iVar6 >> 0x10 < (int)(short)param_2[3]);
  }
  puVar16 = (ushort *)(iVar15 + (uint)pbVar14[bVar1] * 300);
  iVar15 = uVar18 * 0x10000;
  if (iVar15 < (int)((uint)uVar11 * 0x10000)) {
    sVar3 = (short)((uint)iVar8 >> 0x10);
    do {
      uVar11 = param_2[1];
      sVar4 = sVar3;
      if (iVar8 >> 0x10 < (int)(short)param_2[2]) {
        iVar6 = *(int *)(param_1 + 0xc);
        iVar7 = iVar8;
        do {
          puVar12 = (undefined4 *)((uint)*puVar16 * 8 + iVar6);
          uVar17 = ((uint)*param_2 + (iVar7 >> 0x10)) * 0x100000;
          puVar5 = (undefined4 *)
                   (((int)(uVar17 & 0x1000000) >> 0x10) * 8 +
                   (((int)(((uint)uVar11 * 0x10 + (iVar15 >> 0xc)) * 0x10000) >> 0xe & 0x3c0U) +
                   ((int)uVar17 >> 0x13 & 0x1eU)) * 2 + param_3);
          *puVar5 = *puVar12;
          puVar5[0x10] = puVar12[1];
          puVar16 = puVar16 + 1;
          iVar7 = (iVar7 >> 0x10) + 1;
          sVar4 = (short)iVar7;
          iVar7 = iVar7 * 0x10000;
        } while (iVar7 >> 0x10 < (int)(short)param_2[2]);
      }
      puVar16 = puVar16 + (0xf - ((int)sVar4 - (int)sVar3));
      uVar18 = uVar18 * 0x10000 + 0x10000 >> 0x10;
      iVar15 = uVar18 << 0x10;
    } while (iVar15 >> 0x10 < (int)(short)param_2[3]);
  }
  return in_lr;
}


