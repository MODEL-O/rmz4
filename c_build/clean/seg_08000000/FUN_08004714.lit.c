// undefined FUN_08004714(void)
// entry 0x8004714


/* WARNING: Type propagation algorithm not settling */

void FUN_08004714(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  ushort *puVar14;
  byte *pbVar15;
  ushort *puVar16;
  uint uVar17;
  byte *local_58;
  int local_54;
  int local_50;
  uint local_4c;
  
  local_54 = *param_2;
  *param_1 = local_54;
  iVar7 = param_2[1];
  param_1[1] = iVar7;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  uVar1 = (ushort)0x000001ff;
  *(ushort *)(param_1 + 2) = (ushort)local_54 & uVar1;
  *(ushort *)((int)param_1 + 10) = (ushort)iVar7 & uVar1;
  local_54 = local_54 + -0x10;
  if (local_54 < 1) {
    local_54 = 0;
  }
  local_50 = param_2[1] + -0x10;
  if (local_50 < 1) {
    local_50 = 0;
  }
  iVar7 = FUN_08128fb8(local_54,0xf0);
  pbVar15 = (byte *)param_1[5];
  iVar3 = FUN_08128fb8(local_50,0xa0);
  local_58 = pbVar15 + (uint)*pbVar15 * iVar3 + iVar7 + 4;
  uVar4 = FUN_08129050(local_54,0xf0);
  iVar7 = FUN_08129050(local_50,0xa0);
  iVar3 = param_1[4];
  iVar13 = (int)(short)((uVar4 & 0xfffff) >> 4);
  iVar7 = (iVar7 << 0xc) >> 0x10;
  puVar16 = (ushort *)(iVar3 + (uint)*local_58 * 300 + iVar13 * 2 + iVar7 * 0x1e);
  uVar10 = 0;
  uVar4 = 0;
  uVar17 = 0;
LAB_080047fc:
  local_4c = 0;
  uVar8 = 0;
  iVar11 = (int)(short)uVar10;
LAB_0800480c:
  iVar5 = (int)(uVar8 * 0x10000) >> 0x10;
  uVar6 = uVar17;
  do {
    if (iVar11 == 0) {
      if (10 - iVar7 <= (int)(uVar6 * 0x10000) >> 0x10) break;
    }
    else if (iVar11 == 1) {
      iVar9 = (int)(uVar6 * 0x10000) >> 0x10;
      if ((0xc < iVar9) || (9 < iVar9 + -10 + iVar7)) break;
    }
    else if (0xc < (int)(uVar6 * 0x10000) >> 0x10) break;
    uVar4 = local_4c;
    if (uVar8 != 0) goto LAB_08004880;
    if ((int)(short)local_4c < 0xf - iVar13) {
      do {
        while( true ) {
          while( true ) {
            puVar12 = (ushort *)(param_1[3] + (uint)*puVar16 * 8);
            puVar14 = (ushort *)
                      (((local_50 >> 4) + ((int)(uVar6 * 0x10000) >> 0x10) & 0x1fU) * 0x80 +
                      ((local_54 >> 4) + (int)(short)uVar4 & 0x1fU) * 2 + param_3);
            *puVar14 = *puVar12 & 0xff | puVar12[1] << 8;
            puVar14[0x20] = puVar12[2] & 0xff | puVar12[3] << 8;
            puVar16 = puVar16 + 1;
            uVar10 = (int)(short)uVar4 + 1;
            uVar4 = uVar10 & 0xffff;
            if (uVar8 != 0) break;
            if (0xf - iVar13 <= (int)(short)uVar10) goto LAB_0800490a;
          }
LAB_08004880:
          sVar2 = (short)uVar4;
          if (iVar5 != 1) break;
          if ((0x13 < sVar2) || (0xe < sVar2 + -0xf + iVar13)) goto LAB_0800490a;
        }
      } while (sVar2 < 0x14);
    }
LAB_0800490a:
    puVar16 = puVar16 + (0xf - ((int)(short)uVar4 - (int)(short)local_4c));
    uVar6 = uVar6 * 0x10000 + 0x10000 >> 0x10;
  } while( true );
  if (iVar5 == 2) goto LAB_08004996;
  local_58 = local_58 + 1;
  if (iVar11 == 0) {
    puVar16 = (ushort *)(iVar3 + (uint)*local_58 * 300 + iVar7 * 0x1e);
  }
  else {
    puVar16 = (ushort *)(iVar3 + (uint)*local_58 * 300);
  }
  uVar10 = uVar8 * 0x10000 + 0x10000;
  uVar8 = uVar10 >> 0x10;
  local_4c = uVar4;
  if (2 < (int)uVar10 >> 0x10) goto LAB_08004996;
  goto LAB_0800480c;
LAB_08004996:
  if (iVar11 == 2) {
    return;
  }
  local_58 = local_58 + (*pbVar15 - 2);
  puVar16 = (ushort *)(iVar3 + (uint)*local_58 * 300 + iVar13 * 2);
  uVar10 = iVar11 + 1U & 0xffff;
  uVar17 = uVar6;
  if (2 < (int)((iVar11 + 1U) * 0x10000) >> 0x10) {
    return;
  }
  goto LAB_080047fc;
}


