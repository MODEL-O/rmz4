// undefined FUN_0802e6a8(void)
// entry 0x802e6a8


undefined8 FUN_0802e6a8(int param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 in_lr;
  uint local_44 [6];
  int local_2c;
  char *local_28;
  uint local_24;
  
  *(undefined1 *)(param_1 + 0x1ba) = 0;
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xdf;
  local_44[0] = *(uint *)(param_1 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_44[1] = local_44[0] + (int)*param_2 + iVar6 + 1;
    iVar7 = (int)*param_2;
  }
  else {
    iVar6 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_44[1] = (local_44[0] - (int)*param_2) + iVar6 + 1;
    iVar7 = -(int)*param_2;
  }
  local_44[2] = ((local_44[0] + iVar7) - iVar6) + -1;
  iVar7 = *(int *)(param_1 + 0x58);
  iVar6 = (int)((uint)(ushort)param_2[3] << 0x10) >> 0x11;
  local_44[3] = iVar7 + param_2[1] + iVar6;
  local_44[4] = iVar7 + param_2[1];
  local_44[5] = (iVar7 + param_2[1]) - iVar6;
  local_2c = param_1 + 0xb4;
  if (((*(int *)(param_1 + 0x120) < 1) && ((*(uint *)(param_1 + 600) & 0x10) == 0)) &&
     (((*(byte *)(param_1 + 10) & 0x10) != 0 || (*(char *)(param_1 + 0x174) == '\0')))) {
LAB_0802e808:
    if (((*(int *)(local_2c + 0x6c) < 0) || ((*(uint *)(param_1 + 600) & 0x20) != 0)) ||
       (((*(byte *)(param_1 + 10) & 0x10) == 0 && (*(char *)(param_1 + 0x174) != '\0')))) {
      uVar13 = 0;
      local_24 = 0;
      for (uVar10 = 0; uVar10 < 3; uVar10 = uVar10 + 1 & 0xff) {
        uVar2 = FUN_0802e2d0(param_1,local_44[2],local_44[uVar10 + 3]);
        if ((uVar2 & 0xf) == 1) break;
        uVar2 = FUN_08007d28(local_44[2],local_44[uVar10 + 3]);
        if ((uVar2 & 0x10) == 0) {
          if ((uVar2 & 0xf) == 0) {
            uVar13 = uVar13 + 1 & 0xff;
          }
          else if ((uVar2 & 0xf) == 1) break;
        }
        else {
          local_24 = local_24 + 1 & 0xff;
        }
      }
      if (((local_24 != 0) && (local_24 + uVar13 == 3)) &&
         ((*(char *)(param_1 + 0x94) == '\0' || (*(char *)(param_1 + 0x176) != '\0'))))
      goto LAB_0802ea90;
    }
    iVar7 = (int)((uint)(ushort)param_2[3] << 0x10) >> 0x11;
    local_44[3] = *(int *)(param_1 + 0x58) + (int)param_2[1] + iVar7 + 1;
    local_44[5] = ((*(int *)(param_1 + 0x58) + (int)param_2[1]) - iVar7) + -1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar7 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
      local_44[1] = (*(int *)(param_1 + 0x54) + (int)*param_2) - iVar7;
      local_44[2] = *(int *)(param_1 + 0x54) + (int)*param_2 + iVar7;
    }
    else {
      iVar7 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
      local_44[1] = (*(int *)(param_1 + 0x54) - (int)*param_2) + iVar7;
      local_44[2] = (*(int *)(param_1 + 0x54) - (int)*param_2) - iVar7;
    }
    uVar10 = 0;
    uVar13 = 0;
    uVar2 = 0;
    do {
      local_24 = uVar13;
      uVar3 = FUN_08007d28(local_44[uVar2],local_44[5]);
      uVar13 = local_24;
      if ((uVar3 & 0x10) != 0) {
        uVar13 = local_24 + 1 & 0xff;
      }
      if ((uVar3 & 0xf) == 0) {
        uVar10 = uVar10 + 1 & 0xff;
      }
      if ((uVar3 & 0xf) == 0xf) {
        uVar10 = uVar10 + 1 & 0xff;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 3);
    if (((uVar13 == 0) || (uVar13 + uVar10 != 3)) ||
       ((*(char *)(param_1 + 0x94) != '\0' && (*(char *)(param_1 + 0x176) == '\0')))) {
      local_28 = (char *)(param_1 + DAT_0802e9fc);
      if ((*local_28 != '\0') &&
         (((iVar7 = FUN_08007e98(local_44[1],local_44[3]), iVar7 == -1 ||
           (iVar7 = FUN_08007e98(local_44[2],local_44[3]), iVar7 == -1)) &&
          ((sVar1 = FUN_0802e1f0(param_1,local_44[1],local_44[5] + 1), sVar1 != 0 ||
           (sVar1 = FUN_0802e1f0(param_1,local_44[2],local_44[5] + 1), sVar1 != 0)))))) {
        uVar5 = 2;
        goto LAB_0802ec5e;
      }
      uVar2 = 0;
      uVar13 = 0;
      uVar10 = 0;
      uVar12 = 0;
      uVar3 = 0;
      do {
        local_24 = uVar13;
        uVar4 = FUN_08007d28(local_44[uVar3],local_44[3]);
        if ((uVar4 & 0x400) != 0) {
          uVar2 = uVar2 + 1 & 0xff;
        }
        uVar13 = local_24;
        if ((uVar4 & 0x10) != 0) {
          uVar13 = local_24 + 1 & 0xff;
        }
        if ((uVar4 & 0xf) == 0) {
          uVar10 = uVar10 + 1 & 0xff;
        }
        if ((uVar4 & 0x1000) != 0) {
          uVar12 = uVar12 + 1 & 0xff;
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 3);
      if (((uVar13 == 0) || (uVar13 + uVar10 != 3)) ||
         ((*(char *)(param_1 + 0x94) != '\0' && (*(char *)(param_1 + 0x176) == '\0')))) {
        if ((uVar2 != 0) && (uVar2 + uVar10 == 3)) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
          *(undefined1 *)(param_1 + 0x1ba) = 1;
        }
        if ((*(char *)(local_2c + 0x12) != '\x17') &&
           ((*(ushort *)(param_1 + DAT_0802eba8) & 0x8000) == 0)) {
          if ((uVar12 != 0) && (uVar12 + uVar10 == 3)) {
            *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x20;
          }
          uVar13 = FUN_0802e2d0(param_1,local_44[1],local_44[3]);
          if ((uVar13 & 0x1000) != 0) {
            *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x20;
          }
          uVar13 = FUN_0802e2d0(param_1,local_44[2],local_44[3]);
          if ((uVar13 & 0x1000) != 0) {
            *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x20;
          }
        }
        if (*(char *)(param_1 + 0x278) != '\0') {
          *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x20;
        }
        uVar13 = DAT_0802ebac;
        piVar11 = (int *)(param_1 + 0x1bc);
        if (*local_28 != '\0') {
          uVar10 = 0;
          do {
            uVar2 = FUN_08007020(local_44[uVar10],local_44[3]);
            if ((uVar2 & 0x6000) != 0) {
              iVar7 = FUN_08008b7c((local_44[uVar10] & uVar13) + 0x800,
                                   (local_44[3] & uVar13) + DAT_0802ebb0);
              iVar7 = *(int *)(param_1 + 0x54) + iVar7;
              *(int *)(param_1 + 0x54) = iVar7;
              if ((uVar10 == 0) &&
                 (iVar7 = FUN_08007e98(iVar7,*(undefined4 *)(param_1 + 0x58)), iVar7 < 0)) {
                iVar7 = FUN_08007e98(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)
                                    );
                *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
              }
              break;
            }
            uVar10 = uVar10 + 1 & 0xff;
          } while (uVar10 < 3);
        }
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar9 = *(int *)(param_1 + 0x54);
          iVar8 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
          iVar7 = iVar9 + *param_2 + iVar8;
          iVar6 = iVar9 + *param_2;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x54);
          iVar8 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
          iVar7 = (iVar9 - *param_2) + iVar8;
          iVar6 = iVar9 - *param_2;
        }
        local_44[1] = iVar7 + 1;
        local_44[2] = (iVar6 - iVar8) + -1;
        if ((*(char *)(local_2c + 0x12) == '\x18') && (*local_28 != '\0')) {
          *piVar11 = 0;
        }
        else if (*piVar11 != 0) {
          *(int *)(param_1 + 0x54) = iVar9 + *piVar11;
          if (*piVar11 < 1) {
            iVar7 = FUN_08008448(local_44[2],*(undefined4 *)(param_1 + 0x58));
            if (0 < iVar7) goto LAB_0802ec50;
          }
          else {
            iVar7 = FUN_08008264(local_44[1],*(undefined4 *)(param_1 + 0x58));
            if (iVar7 < 0) {
LAB_0802ec50:
              *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
            }
          }
          *piVar11 = 0;
        }
        uVar5 = 0;
        goto LAB_0802ec5e;
      }
    }
  }
  else {
    local_24 = 0;
    uVar13 = 0;
    for (uVar10 = 0; uVar10 < 3; uVar10 = uVar10 + 1 & 0xff) {
      uVar2 = FUN_0802e2d0(param_1,local_44[1],local_44[uVar10 + 3]);
      if ((uVar2 & 0xf) == 1) break;
      uVar2 = FUN_08007d28(local_44[1],local_44[uVar10 + 3]);
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0xf) == 0) {
          uVar13 = uVar13 + 1 & 0xff;
        }
        else if ((uVar2 & 0xf) == 1) break;
      }
      else {
        local_24 = local_24 + 1 & 0xff;
      }
    }
    if (((local_24 == 0) || (local_24 + uVar13 != 3)) ||
       ((*(char *)(param_1 + 0x94) != '\0' && (*(char *)(param_1 + 0x176) == '\0'))))
    goto LAB_0802e808;
  }
LAB_0802ea90:
  uVar5 = 1;
LAB_0802ec5e:
  return CONCAT44(in_lr,uVar5);
}


