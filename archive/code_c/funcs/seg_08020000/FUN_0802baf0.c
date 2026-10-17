// undefined FUN_0802baf0(void)
// entry 0x802baf0


undefined8 FUN_0802baf0(int param_1,short *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  undefined4 in_lr;
  uint local_48 [3];
  undefined1 auStack_3c [4];
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int *local_28;
  uint local_24;
  
  local_34 = param_3 & 0xff;
  local_2c = 0;
  local_48[0] = *(uint *)(param_1 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar7 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_48[1] = (local_48[0] + (int)*param_2) - iVar7;
    local_48[2] = local_48[0] + (int)*param_2 + iVar7;
  }
  else {
    iVar7 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_48[1] = (local_48[0] - (int)*param_2) + iVar7;
    local_48[2] = (local_48[0] - (int)*param_2) - iVar7;
  }
  iVar7 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    local_30 = 0;
    do {
      uVar5 = local_30;
      puVar9 = local_48 + local_30;
      uVar4 = FUN_0802e058(param_1,*puVar9,iVar7);
      uVar8 = uVar4 & 0xf;
      if ((uVar8 != 0xf) &&
         ((((uVar4 & 0x8000) == 0 ||
           ((uVar8 != 0 &&
            ((0xe < uVar8 ||
             (((local_34 != 0 && ((*(byte *)(param_1 + 0x142) & 0x10) == 0)) &&
              ((uVar8 = FUN_0802e124(param_1,*puVar9 + (*(int *)(param_1 + 0x114) -
                                                       *(int *)(param_1 + 0x54)),
                                     (*(int *)(param_1 + 0x118) - *(int *)(param_1 + 0x58)) + iVar7)
               , (uVar8 & 0x8000) == 0 || (((uVar8 & 0xf) == 0 || (0xe < (uVar8 & 0xf)))))))))))))
          && ((uVar4 & 0xf) != 0)))) {
        uVar5 = FUN_0802dd54(param_1,local_48[uVar5],iVar7,auStack_3c);
        local_2c = uVar5 & 0xffff;
        if ((uVar5 & 0xf) != 0) {
          uVar5 = FUN_08007020(local_48[1],iVar7);
          if (((uVar5 & 0xf) != 1) &&
             (uVar4 = FUN_08007020(local_48[2],iVar7), uVar5 = local_2c, (uVar4 & 0xf) != 1))
          goto LAB_0802bfd4;
          iVar7 = iVar7 + local_38;
        }
      }
      local_30 = local_30 + 1 & 0xffff;
    } while (local_30 < 3);
  }
  uVar4 = FUN_08007d28(local_48[0],iVar7);
  uVar5 = uVar4 & 0xffff;
  if (((uVar4 & 0x400) != 0) &&
     ((local_34 == 0 ||
      (uVar4 = FUN_08007d28(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118)),
      (uVar4 & 0x400) != 0)))) goto LAB_0802bfd4;
  if (local_34 != 0) {
    uVar1 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),iVar7);
    uVar5 = (uint)uVar1;
    iVar6 = FUN_08007e98(*(undefined4 *)(param_1 + 0x54),iVar7);
    if (((((uVar1 & 0x8000) != 0) && ((uVar1 & 0xf) != 0)) && ((uVar1 & 0xf) < 0xf)) &&
       ((((uVar4 = FUN_08007d28(*(undefined4 *)(param_1 + 0x114),
                                *(int *)(param_1 + 0x118) + (int)param_2[1] +
                                ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11)),
          (uVar4 & 0x8000) != 0 && ((uVar4 & 0xf) != 0)) && ((uVar4 & 0xf) < 0xf)) ||
        (*(int *)(param_1 + 0x58) + iVar6 + 0x700 < *(int *)(param_1 + 0x118))))) {
      uVar5 = 0;
      goto LAB_0802bfd4;
    }
    if (uVar5 == DAT_0802bd24) {
      iVar7 = *(int *)(param_1 + 0x58);
    }
    else {
      if (0xc < (ushort)((uVar1 & 0xf) - 1)) goto LAB_0802be06;
      iVar7 = *(int *)(param_1 + 0x58);
    }
    goto LAB_0802bf90;
  }
  uVar4 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),iVar7);
  uVar5 = uVar4 & 0xffff;
  if (((((uVar4 & 0x8000) == 0) || ((uVar4 & 0xf) == 0)) || (0xe < (uVar4 & 0xf))) ||
     (*(char *)(param_1 + DAT_0802bd9c) != '\0')) {
    iVar10 = iVar7 + 0x500;
    iVar6 = FUN_08007e98(*(undefined4 *)(param_1 + 0x54),iVar10);
    sVar3 = FUN_0802e058(param_1,*(undefined4 *)(param_1 + 0x54),iVar10);
    if (sVar3 != 0) {
      uVar5 = FUN_0802e058(param_1,*(undefined4 *)(param_1 + 0x54),iVar10);
      uVar5 = uVar5 & 0xffff;
      goto LAB_0802bfd4;
    }
    if (iVar6 < 0) {
      if (*(char *)(param_1 + DAT_0802bdf8) == '\0') {
        iVar7 = *(int *)(param_1 + 0x58) + 0x500;
LAB_0802bf90:
        *(int *)(param_1 + 0x58) = iVar7 + iVar6;
        goto LAB_0802bfd4;
      }
      if ((((uVar4 & 0x8000) == 0) || ((uVar4 & 0xf) == 0)) || (0xe < (uVar4 & 0xf))) {
        iVar10 = iVar7 + iVar6 + 0x500;
        sVar3 = FUN_0802e2d0(param_1,local_48[1],iVar10);
        if ((sVar3 == 0) && (sVar3 = FUN_0802e2d0(param_1,local_48[2],iVar10), sVar3 == 0)) {
          iVar7 = *(int *)(param_1 + 0x58) + 0x500;
          goto LAB_0802bf90;
        }
      }
    }
  }
LAB_0802be06:
  local_30 = 1;
  local_28 = (int *)(param_1 + 0x114);
  do {
    uVar4 = local_30;
    puVar9 = local_48 + local_30;
    uVar1 = FUN_08007d28(*puVar9,iVar7);
    uVar5 = (uint)uVar1;
    uVar2 = uVar1 & 0xf;
    if (uVar2 == 1) {
      if ((((uVar1 & 0x8000) == 0) ||
          ((local_34 != 0 &&
           ((((uVar8 = FUN_08007d28(*puVar9 + (*local_28 - *(int *)(param_1 + 0x54)),
                                    (local_28[1] - *(int *)(param_1 + 0x58)) + iVar7),
              (uVar8 & 0x8000) == 0 || ((uVar8 & 0xf) == 0)) || (0xe < (uVar8 & 0xf))) &&
            ((uint)local_28[1] <= (iVar7 + 1U & DAT_0802beb4) - 1)))))) &&
         (iVar6 = FUN_08007e98(local_48[uVar4],iVar7), iVar6 < 0)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
        iVar7 = iVar7 + iVar6;
        local_2c = uVar5;
      }
    }
    else if ((ushort)(uVar2 - 1) < 0xd) {
      if ((((uVar1 & 0x8000) != 0) && (uVar2 != 0)) && (uVar2 < 0xf)) {
        iVar6 = DAT_0802bf48 + iVar7;
        local_24 = 0x8000;
        uVar8 = FUN_08007020(*puVar9,iVar6);
        if ((((local_24 & uVar8) != 0) && (uVar8 = FUN_08007020(*puVar9,iVar6), (uVar8 & 0xf) != 0))
           && (uVar8 = FUN_08007020(*puVar9,iVar6), (uVar8 & 0xf) < 0xf)) goto LAB_0802bfc2;
      }
      uVar8 = DAT_0802bf64;
      puVar9 = local_48 + uVar4;
      uVar4 = *puVar9;
      if (*(int *)(param_1 + 0x54) < (int)uVar4) {
        if ((uVar1 & 0xf) < 8) {
          iVar6 = FUN_08007e98(uVar4 & DAT_0802bf48,iVar7 + 0x500);
          if (iVar6 < 0) {
            iVar7 = *(int *)(param_1 + 0x58) + 0x500;
            goto LAB_0802bf90;
          }
        }
        else {
          sVar3 = FUN_08007020(uVar4 + DAT_0802bf64,iVar7);
          if (sVar3 == 0) {
            uVar8 = *puVar9 & uVar8;
LAB_0802bfb4:
            iVar6 = FUN_08007e98(uVar8,iVar7);
            if (iVar6 < 1) {
              iVar7 = *(int *)(param_1 + 0x58);
              goto LAB_0802bf90;
            }
          }
        }
      }
      else if ((uVar1 & 0xf) < 8) {
        sVar3 = FUN_08007020(uVar4 + 0x1000,iVar7);
        if (sVar3 == 0) {
          uVar8 = *puVar9 | DAT_0802bfe4;
          goto LAB_0802bfb4;
        }
      }
      else {
        iVar6 = FUN_08007e98(uVar4 | DAT_0802bf98,iVar7 + 0x500);
        if (iVar6 < 0) {
          iVar7 = *(int *)(param_1 + 0x58) + 0x500;
          goto LAB_0802bf90;
        }
      }
    }
LAB_0802bfc2:
    local_30 = local_30 + 1 & 0xffff;
    uVar5 = local_2c;
  } while (local_30 < 3);
LAB_0802bfd4:
  return CONCAT44(in_lr,uVar5);
}


