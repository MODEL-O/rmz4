// undefined FUN_08003fe0(void)
// entry 0x8003fe0


void FUN_08003fe0(int *param_1,int *param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  ushort *puVar17;
  uint uVar18;
  byte *local_58;
  int local_54;
  int local_50;
  uint local_4c;
  
  local_54 = *param_2 + -0x20;
  if (local_54 < 1) {
    local_54 = 0;
  }
  local_50 = param_2[1] + -0x10;
  if (local_50 < 1) {
    local_50 = 0;
  }
  iVar3 = FUN_08128fb8(local_54,0xf0);
  pbVar16 = (byte *)param_1[5];
  iVar4 = FUN_08128fb8(local_50,0xa0);
  local_58 = pbVar16 + (uint)*pbVar16 * iVar4 + iVar3 + 4;
  uVar5 = FUN_08129050(local_54,0xf0);
  iVar3 = FUN_08129050(local_50,0xa0);
  iVar4 = param_1[4];
  iVar13 = (int)(short)((uVar5 & 0xfffff) >> 4);
  iVar3 = (iVar3 << 0xc) >> 0x10;
  puVar17 = (ushort *)(iVar4 + (uint)*local_58 * 300 + iVar13 * 2 + iVar3 * 0x1e);
  uVar10 = 0;
  uVar18 = 0;
  uVar5 = 0;
  do {
    local_4c = 0;
    uVar8 = 0;
    iVar11 = (int)(short)uVar10;
    do {
      iVar6 = (int)(uVar8 * 0x10000) >> 0x10;
      uVar10 = uVar18;
      if (iVar11 != 0) goto LAB_080040d0;
      uVar7 = uVar18 * 0x10000;
      if ((int)uVar7 >> 0x10 < 10 - iVar3) {
LAB_080040f8:
        do {
          uVar5 = local_4c;
          if (uVar8 != 0) goto LAB_08004120;
          if ((int)(short)local_4c < 0xf - iVar13) {
            do {
              while( true ) {
                while( true ) {
                  puVar15 = (undefined4 *)(param_1[3] + (uint)*puVar17 * 8);
                  iVar12 = (local_54 + (short)uVar5 * 0x10) * 0x10000;
                  puVar9 = (undefined4 *)
                           ((short)((ushort)((uint)iVar12 >> 0x10) & 0x100) * 8 +
                           (((local_50 + ((int)uVar7 >> 0xc)) * 0x10000 >> 0xe & 0x3c0U) +
                           (iVar12 >> 0x13 & 0x1eU)) * 2 + param_3);
                  *puVar9 = *puVar15;
                  puVar9[0x10] = puVar15[1];
                  puVar17 = puVar17 + 1;
                  uVar14 = (int)(short)uVar5 + 1;
                  uVar5 = uVar14 & 0xffff;
                  if (uVar8 != 0) break;
                  if (0xf - iVar13 <= (int)(short)uVar14) goto LAB_080041ac;
                }
LAB_08004120:
                sVar2 = (short)uVar5;
                if (iVar6 != 1) break;
                if ((0x13 < sVar2) || (0xe < sVar2 + -0xf + iVar13)) goto LAB_080041ac;
              }
            } while (sVar2 < 0x14);
          }
LAB_080041ac:
          puVar17 = puVar17 + (0xf - ((int)(short)uVar5 - (int)(short)local_4c));
          uVar10 = uVar10 * 0x10000 + 0x10000 >> 0x10;
          if (iVar11 == 0) {
            uVar7 = uVar10 * 0x10000;
            if (10 - iVar3 <= (int)uVar7 >> 0x10) break;
            goto LAB_080040f8;
          }
LAB_080040d0:
          if (iVar11 == 1) {
            uVar7 = uVar10 * 0x10000;
            if ((0xc < (int)uVar7 >> 0x10) || (9 < ((int)uVar7 >> 0x10) + -10 + iVar3)) break;
            goto LAB_080040f8;
          }
          uVar7 = uVar10 * 0x10000;
        } while ((int)uVar7 >> 0x10 < 0xd);
      }
      if (iVar6 == 2) break;
      local_58 = local_58 + 1;
      if (iVar11 == 0) {
        puVar17 = (ushort *)(iVar4 + (uint)*local_58 * 300 + iVar3 * 0x1e);
      }
      else {
        puVar17 = (ushort *)(iVar4 + (uint)*local_58 * 300);
      }
      uVar10 = uVar8 * 0x10000 + 0x10000;
      uVar8 = uVar10 >> 0x10;
      local_4c = uVar5;
    } while ((int)uVar10 >> 0x10 < 3);
    if (iVar11 == 2) break;
    local_58 = local_58 + (*pbVar16 - 2);
    puVar17 = (ushort *)(iVar4 + (uint)*local_58 * 300 + iVar13 * 2);
    uVar18 = uVar7 >> 0x10;
    uVar10 = iVar11 + 1U & 0xffff;
  } while ((int)((iVar11 + 1U) * 0x10000) >> 0x10 < 3);
  iVar4 = *param_2;
  uVar1 = (ushort)DAT_080042a0;
  *(ushort *)(param_1 + 2) = (ushort)iVar4 & uVar1;
  iVar3 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)iVar3 & uVar1;
  *param_1 = iVar4;
  param_1[1] = iVar3;
  return;
}


