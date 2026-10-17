// undefined FUN_0802b7f0(void)
// entry 0x802b7f0


undefined8 FUN_0802b7f0(int param_1,short *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 in_lr;
  int local_38 [4];
  int local_28;
  uint local_24;
  
  param_3 = param_3 & 0xff;
  local_24 = 0;
  FUN_0802cc18(param_1,param_2,0);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (param_3 != 0) {
      iVar5 = *(int *)(param_1 + 0x54) + (int)*param_2;
      uVar1 = param_2[2];
      goto LAB_0802b866;
    }
    iVar5 = *(int *)(param_1 + 0x54) + (int)*param_2;
    uVar1 = param_2[2];
LAB_0802b850:
    iVar5 = iVar5 - ((int)((uint)uVar1 << 0x10) >> 0x11);
  }
  else {
    if (param_3 != 0) {
      iVar5 = *(int *)(param_1 + 0x54) - (int)*param_2;
      uVar1 = param_2[2];
      goto LAB_0802b850;
    }
    iVar5 = *(int *)(param_1 + 0x54) - (int)*param_2;
    uVar1 = param_2[2];
LAB_0802b866:
    iVar5 = iVar5 + ((int)((uint)uVar1 << 0x10) >> 0x11);
  }
  iVar7 = *(int *)(param_1 + 0x58);
  local_38[0] = iVar7 + param_2[1];
  iVar6 = (int)((uint)(ushort)param_2[3] << 0x10) >> 0x11;
  local_38[1] = (iVar7 + param_2[1]) - iVar6;
  local_38[2] = iVar7 + param_2[1] + iVar6;
  if ((*(char *)(param_1 + 0x1b8) != '\0') && (uVar9 = 0, 0 < (int)(3 - param_3))) {
    do {
      uVar4 = FUN_0802e058(param_1,iVar5,local_38[uVar9]);
      if (((((uVar4 & 0x8000) == 0) || (((uVar4 & 0xf) == 0 || (0xe < (uVar4 & 0xf))))) &&
          ((uVar4 & 0xf) != 0xf)) && ((uVar4 & 0xf) != 0)) {
        if ((*(char *)(param_1 + 0xd) == '\x02') || (uVar9 == 0)) {
          uVar4 = FUN_0802dc34(param_1,iVar5,local_38[uVar9],local_38 + 3);
        }
        else {
          uVar4 = FUN_0802d7f8(param_1,iVar5,local_38[uVar9],local_38 + 3);
        }
        local_24 = uVar4 & 0xffff;
        if ((uVar4 & 0xffff) != 0) {
          if (*(char *)(param_1 + DAT_0802b950) == '\0') {
            iVar5 = iVar5 + local_38[3];
          }
          else {
            iVar6 = local_38[3];
            if (local_38[3] < 0) {
              iVar6 = -local_38[3];
            }
            if (iVar6 <= DAT_0802b954) {
              iVar5 = iVar5 + local_38[3];
            }
            iVar6 = local_28;
            if (local_28 < 0) {
              iVar6 = -local_28;
            }
            if (DAT_0802b954 < iVar6) goto LAB_0802b974;
          }
          local_38[0] = local_38[0] + local_28;
          local_38[1] = local_38[1] + local_28;
          local_38[2] = local_38[2] + local_28;
        }
      }
LAB_0802b974:
      uVar9 = uVar9 + 1 & 0xffff;
    } while ((int)uVar9 < (int)(3 - param_3));
  }
  uVar9 = FUN_08007020(*(undefined4 *)(param_1 + 0x114),
                       *(int *)(param_1 + 0x118) + (int)param_2[1] +
                       ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
  uVar4 = uVar9 & 0xffff;
  if ((uVar9 & 0xf) == 1) {
    uVar9 = FUN_08007020(*(undefined4 *)(param_1 + 0x54),local_38[2] + DAT_0802b9f8);
    uVar4 = uVar9 & 0xffff;
    uVar9 = uVar9 & 0xf;
    if ((((uVar9 != 2) && (uVar9 != 4)) && (uVar9 != 9)) && (uVar9 != 0xd)) {
      uVar4 = 1;
    }
  }
  uVar4 = uVar4 & 0xf;
  if (1 < uVar4) {
    if (uVar4 < 8) {
      iVar6 = 3;
      if ((~(uint)(*(byte *)(param_1 + 10) >> 4) & 1) == param_3) {
        iVar6 = 2;
      }
      goto LAB_0802ba10;
    }
    if ((uVar4 < 0xe) && (iVar6 = 2, (~(uint)(*(byte *)(param_1 + 10) >> 4) & 1) != param_3))
    goto LAB_0802ba10;
  }
  iVar6 = 3;
LAB_0802ba10:
  uVar9 = 0;
  if (iVar6 != 0) {
    do {
      piVar8 = local_38 + uVar9;
      uVar1 = FUN_08007d28(iVar5,*piVar8);
      uVar2 = uVar1 & 0xf;
      if (uVar2 == 1) {
        if (((uVar1 & 0x8000) == 0) && ((uVar1 & 0x400) == 0)) {
          if ((*(byte *)(param_1 + 10) >> 4 & 1) == param_3) {
            iVar7 = FUN_08008448(iVar5,*piVar8);
          }
          else {
LAB_0802bab6:
            iVar7 = FUN_08008264(iVar5,*piVar8);
          }
LAB_0802babe:
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
          iVar5 = iVar5 + iVar7;
          local_24 = (uint)uVar1;
        }
      }
      else if (((ushort)(uVar2 - 1) < 0xd) && (param_3 == 0)) {
        if (uVar2 < 8) {
          if ((iVar5 < *(int *)(param_1 + 0x54)) &&
             (sVar3 = FUN_08007020(iVar5 + 0x1000,*piVar8), sVar3 == 0)) {
            iVar7 = FUN_08008448(iVar5,*piVar8);
            goto LAB_0802babe;
          }
        }
        else if ((*(int *)(param_1 + 0x54) < iVar5) &&
                (sVar3 = FUN_08007020(iVar5 + DAT_0802baec,*piVar8), sVar3 == 0)) goto LAB_0802bab6;
      }
      uVar4 = uVar9 + 1;
      uVar9 = uVar4 & 0xffff;
    } while (uVar4 * 0x10000 < (uint)(iVar6 * 0x10000));
  }
  return CONCAT44(in_lr,local_24);
}


