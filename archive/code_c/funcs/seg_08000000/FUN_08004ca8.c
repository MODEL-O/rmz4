// undefined FUN_08004ca8(void)
// entry 0x8004ca8


undefined4
FUN_08004ca8(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5,
            byte *param_6)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  ushort *puVar18;
  byte *pbVar19;
  undefined4 in_lr;
  uint local_54;
  
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(int *)(param_1 + 0x10) = param_5;
  *(byte **)(param_1 + 0x14) = param_6;
  uVar7 = *param_2;
  iVar3 = FUN_08128fb8(uVar7,0xf);
  uVar11 = param_2[1];
  iVar4 = FUN_08128fb8(uVar11,10);
  param_6 = param_6 + (uint)*param_6 * iVar4 + iVar3 + 4;
  sVar1 = FUN_08129050(uVar7,0xf);
  sVar2 = FUN_08129050(uVar11,10);
  iVar4 = (int)sVar1;
  iVar3 = (int)sVar2;
  puVar18 = (ushort *)(param_5 + (uint)*param_6 * 300 + iVar4 * 2 + iVar3 * 0x1e);
  uVar8 = 0;
  uVar13 = 0;
  uVar16 = 0;
  do {
    local_54 = 0;
    uVar12 = 0;
    iVar9 = (int)(short)uVar13;
    pbVar19 = param_6;
    do {
      iVar6 = (int)(uVar12 * 0x10000) >> 0x10;
      uVar13 = uVar8;
      if (iVar9 != 0) goto LAB_08004d86;
joined_r0x08004d80:
      uVar5 = uVar13 << 0x10;
      if ((int)uVar5 >> 0x10 < 10 - iVar3) {
LAB_08004dd2:
        do {
          uVar16 = local_54;
          if (uVar12 != 0) goto LAB_08004dec;
          if ((int)(short)local_54 < 0xf - iVar4) {
            do {
              while( true ) {
                while( true ) {
                  puVar14 = (ushort *)(*(int *)(param_1 + 0xc) + (uint)*puVar18 * 8);
                  puVar17 = (ushort *)(((int)uVar5 >> 9) + (short)uVar16 * 2 + param_3);
                  *puVar17 = *puVar14 & 0xff | puVar14[1] << 8;
                  puVar17[0x20] = puVar14[2] & 0xff | puVar14[3] << 8;
                  puVar18 = puVar18 + 1;
                  uVar15 = (int)(short)uVar16 + 1;
                  uVar16 = uVar15 & 0xffff;
                  if (uVar12 != 0) break;
                  if (0xf - iVar4 <= (int)(short)uVar15) goto LAB_08004e76;
                }
LAB_08004dec:
                sVar1 = (short)uVar16;
                if (iVar6 != 1) break;
                iVar10 = sVar1 + -0xf + iVar4;
LAB_08004e10:
                if (0xe < iVar10) goto LAB_08004e76;
              }
              if (iVar6 == 2) {
                if (sVar1 < 0x20) {
                  iVar10 = (int)sVar1 + iVar4 + -0x1e;
                  goto LAB_08004e10;
                }
                break;
              }
            } while (sVar1 < 0x20);
          }
LAB_08004e76:
          puVar18 = puVar18 + (0xf - ((int)(short)uVar16 - (int)(short)local_54));
          uVar13 = uVar13 * 0x10000 + 0x10000 >> 0x10;
          if (iVar9 == 0) goto joined_r0x08004d80;
LAB_08004d86:
          if (iVar9 == 1) {
            iVar10 = (short)uVar13 + -10 + iVar3;
          }
          else if (iVar9 == 2) {
            uVar5 = uVar13 << 0x10;
            if (0x1f < (int)uVar5 >> 0x10) break;
            iVar10 = ((int)uVar5 >> 0x10) + iVar3 + -0x14;
          }
          else {
            if (iVar9 != 3) {
              uVar5 = uVar13 << 0x10;
              if (0x1f < (int)uVar5 >> 0x10) break;
              goto LAB_08004dd2;
            }
            uVar5 = uVar13 << 0x10;
            if (0x1f < (int)uVar5 >> 0x10) break;
            iVar10 = ((int)uVar5 >> 0x10) + iVar3 + -0x1e;
          }
          uVar5 = uVar13 << 0x10;
          if (9 < iVar10) break;
        } while( true );
      }
      if (iVar6 == 3) break;
      pbVar19 = pbVar19 + 1;
      if (iVar9 == 2) {
        iVar10 = *(int *)(param_1 + 0x10) + (uint)*pbVar19 * 300;
        iVar6 = iVar3 * 0x1e;
      }
      else {
        iVar6 = (uint)*pbVar19 * 300;
        iVar10 = *(int *)(param_1 + 0x10);
      }
      puVar18 = (ushort *)(iVar10 + iVar6);
      uVar13 = uVar12 * 0x10000 + 0x10000;
      uVar12 = uVar13 >> 0x10;
      local_54 = uVar16;
    } while ((int)uVar13 >> 0x10 < 4);
    if (iVar9 == 4) {
      return in_lr;
    }
    param_6 = param_6 + **(byte **)(param_1 + 0x14);
    puVar18 = (ushort *)(*(int *)(param_1 + 0x10) + (uint)*param_6 * 300 + iVar4 * 2);
    uVar8 = uVar5 >> 0x10;
    uVar13 = iVar9 + 1U & 0xffff;
    if (4 < (int)((iVar9 + 1U) * 0x10000) >> 0x10) {
      return in_lr;
    }
  } while( true );
}


