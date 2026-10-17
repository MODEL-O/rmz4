// undefined FUN_080ac340(void)
// entry 0x80ac340


undefined4 FUN_080ac340(int param_1,int *param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_lr;
  byte local_68 [16];
  byte local_58 [16];
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  pbVar6 = local_68;
  param_3 = param_3 & 0xff;
  uVar10 = 0;
  uVar7 = 1;
  piVar2 = param_2;
  if (1 < param_3) {
    do {
      iVar4 = (param_2 + uVar10 * 2)[1];
      if ((piVar2[3] <= iVar4) && ((piVar2[3] != iVar4 || (piVar2[2] <= param_2[uVar10 * 2])))) {
        uVar10 = uVar7 & 0xff;
      }
      uVar7 = uVar7 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar7 < (int)param_3);
  }
  uVar7 = 0;
  uVar8 = 1;
  piVar2 = param_2;
  if (1 < param_3) {
    do {
      iVar4 = (param_2 + uVar7 * 2)[1];
      if ((iVar4 <= piVar2[3]) && ((piVar2[3] != iVar4 || (param_2[uVar7 * 2] <= piVar2[2])))) {
        uVar7 = uVar8 & 0xff;
      }
      uVar8 = uVar8 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar8 < (int)param_3);
  }
  uVar8 = uVar10;
  local_68[0] = (byte)uVar10;
  local_48 = param_1;
LAB_080ac3ee:
  uVar8 = FUN_08129050(uVar8 + 1,param_3);
  if (uVar8 == uVar7) {
    pbVar6[1] = (byte)uVar7;
    iVar9 = 0;
    iVar4 = DAT_080ac408;
    while( true ) {
      if (param_2[(uint)local_68[iVar9] * 2] < iVar4) {
        iVar4 = param_2[(uint)local_68[iVar9] * 2];
      }
      if (local_68[iVar9] == uVar7) break;
      iVar9 = iVar9 + 1;
    }
    if (iVar4 < 0xf1) {
      uVar8 = uVar10;
      iVar4 = 0;
      local_58[0] = (byte)uVar10;
      while (uVar8 = FUN_08129050((uVar8 - 1) + param_3,param_3), uVar8 != uVar7) {
        if ((param_2 + (uint)local_58[iVar4] * 2)[1] == (param_2 + uVar8 * 2)[1]) {
          if (param_2[(uint)local_58[iVar4] * 2] < param_2[uVar8 * 2]) {
            local_58[iVar4] = (byte)uVar8;
          }
        }
        else {
          local_58[iVar4 + 1] = (byte)uVar8;
          iVar4 = iVar4 + 1;
        }
      }
      local_58[iVar4 + 1] = (byte)uVar7;
      iVar4 = -1;
      iVar9 = 0;
      while( true ) {
        if (iVar4 < param_2[(uint)local_58[iVar9] * 2]) {
          iVar4 = param_2[(uint)local_58[iVar9] * 2];
        }
        if (local_58[iVar9] == uVar7) break;
        iVar9 = iVar9 + 1;
      }
      if (-1 < iVar4) {
        iVar4 = param_2[uVar10 * 2 + 1];
        local_34 = param_2[uVar7 * 2 + 1];
        if ((iVar4 < 0xa0) && (0 < local_34)) {
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          if (0xa0 < local_34) {
            local_34 = 0xa0;
          }
          local_40 = 1;
          local_44 = 1;
          local_38 = 0;
          local_3c = 0;
          local_30 = param_2[(uint)local_68[1] * 2] - param_2[(uint)local_68[0] * 2];
          iVar9 = (param_2 + (uint)local_68[1] * 2)[1] - (param_2 + (uint)local_68[0] * 2)[1];
          if (iVar9 == 0) {
            iVar9 = 1;
          }
          local_2c = param_2[(uint)local_58[1] * 2] - param_2[(uint)local_58[0] * 2];
          iVar5 = (param_2 + (uint)local_58[1] * 2)[1] - (param_2 + (uint)local_58[0] * 2)[1];
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          if (iVar4 < local_34) {
            do {
              iVar3 = param_2[(uint)local_68[local_44] * 2 + 1];
              local_28 = iVar4 + 1;
              local_24 = iVar4 << 1;
              uVar10 = (uint)local_68[local_44];
              while (iVar3 < iVar4) {
                local_3c = local_44;
                local_44 = local_44 + 1 & 0xff;
                uVar7 = (uint)local_68[local_44];
                local_30 = param_2[uVar7 * 2] - param_2[uVar10 * 2];
                iVar3 = (param_2 + uVar7 * 2)[1];
                iVar9 = iVar3 - (param_2 + uVar10 * 2)[1];
                uVar10 = uVar7;
                if (iVar9 == 0) {
                  iVar9 = 1;
                }
              }
              iVar3 = param_2[(uint)local_58[local_40] * 2 + 1];
              uVar10 = (uint)local_58[local_40];
              while (iVar3 < iVar4) {
                local_38 = local_40;
                local_40 = local_40 + 1 & 0xff;
                uVar7 = (uint)local_58[local_40];
                local_2c = param_2[uVar7 * 2] - param_2[uVar10 * 2];
                iVar3 = (param_2 + uVar7 * 2)[1];
                iVar5 = iVar3 - (param_2 + uVar10 * 2)[1];
                uVar10 = uVar7;
                if (iVar5 == 0) {
                  iVar5 = 1;
                }
              }
              bVar1 = local_68[local_3c];
              iVar3 = FUN_08128fb8((iVar4 - (param_2 + (uint)bVar1 * 2)[1]) * local_30,iVar9);
              iVar3 = param_2[(uint)bVar1 * 2] + iVar3;
              bVar1 = local_58[local_38];
              iVar4 = FUN_08128fb8((iVar4 - (param_2 + (uint)bVar1 * 2)[1]) * local_2c,iVar5);
              iVar4 = param_2[(uint)bVar1 * 2] + iVar4;
              if (iVar3 < 0) {
                iVar3 = 0;
              }
              if (0xf0 < iVar4) {
                iVar4 = 0xf0;
              }
              *(ushort *)(local_24 + local_48) = (ushort)(iVar3 << 8) | (ushort)iVar4;
              iVar4 = local_28;
            } while (local_28 < local_34);
          }
        }
      }
    }
    return in_lr;
  }
  if ((param_2 + (uint)*pbVar6 * 2)[1] == (param_2 + uVar8 * 2)[1]) goto code_r0x080ac3e0;
  pbVar6 = pbVar6 + 1;
  goto LAB_080ac3ec;
code_r0x080ac3e0:
  if (param_2[uVar8 * 2] < param_2[(uint)*pbVar6 * 2]) {
LAB_080ac3ec:
    *pbVar6 = (byte)uVar8;
  }
  goto LAB_080ac3ee;
}


