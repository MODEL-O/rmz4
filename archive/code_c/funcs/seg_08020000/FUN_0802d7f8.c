// undefined FUN_0802d7f8(void)
// entry 0x802d7f8


undefined8 FUN_0802d7f8(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 in_lr;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  param_4[1] = 0;
  *param_4 = 0;
  iVar1 = DAT_0802d8f4;
  local_34 = 0;
  local_2c = 0;
  local_38 = param_2;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar8 = (uint)*(byte *)(param_1 + 0x188 + local_2c);
      iVar10 = uVar8 * 0x18;
      iVar4 = iVar10 + iVar1;
      local_30 = (uint)*(ushort *)(iVar4 + 0x1d6);
      if ((local_30 & 0xf) == 0xf) {
        if ((*(ushort *)(iVar4 + 0x1d6) & 0x8000) != 0) {
          local_30 = DAT_0802d8f8;
          goto LAB_0802d868;
        }
      }
      else {
LAB_0802d868:
        piVar3 = (int *)(iVar1 + 0x1dc + iVar10);
        puVar6 = (ushort *)(iVar4 + 0x1d8);
        if (((local_38 - *piVar3) + (uint)*puVar6 < (uint)*puVar6 << 1) &&
           (piVar11 = (int *)(iVar1 + 0x1e0 + iVar10),
           (param_3 - *piVar11) + (uint)*(ushort *)(iVar4 + 0x1da) <
           (uint)*(ushort *)(iVar4 + 0x1da) << 1)) {
          FUN_0802e63c(param_1,uVar8);
          iVar4 = DAT_0802da3c;
          iVar5 = *piVar3;
          if ((iVar5 == *(int *)(iVar10 + iVar1 + 0x1e4)) &&
             (*piVar11 == *(int *)(iVar10 + DAT_0802d8fc))) {
            iVar4 = *(int *)(param_1 + 0x54);
            if (iVar5 < iVar4) {
              iVar10 = (iVar5 + (uint)*puVar6) - local_38;
            }
            else {
              iVar10 = ((iVar5 - (uint)*puVar6) - local_38) + -1;
            }
            *param_4 = iVar10;
            iVar10 = *param_4;
            if (iVar10 != 0) {
              iVar5 = iVar10;
              if (iVar10 < 0) {
                iVar5 = -iVar10;
              }
              if (iVar5 <= DAT_0802d930) {
                *(int *)(param_1 + 0x54) = iVar4 + iVar10;
                local_38 = local_38 + iVar10;
                iVar4 = DAT_0802dc30;
                goto LAB_0802dc00;
              }
            }
            *param_4 = 0;
            iVar4 = *(int *)(param_1 + 0x58);
            if (iVar4 + DAT_0802d96c < param_3) {
              iVar10 = ((*(int *)(uVar8 * 0x18 + iVar1 + 0x1e0) -
                        (uint)*(ushort *)(uVar8 * 0x18 + iVar1 + 0x1da)) - param_3) + -1;
            }
            else {
              iVar10 = (*(int *)(uVar8 * 0x18 + iVar1 + 0x1e0) +
                       (uint)*(ushort *)(uVar8 * 0x18 + iVar1 + 0x1da)) - param_3;
            }
            param_4[1] = iVar10;
            iVar10 = param_4[1];
            if (iVar10 == 0) goto LAB_0802dc04;
            *(int *)(param_1 + 0x58) = iVar4 + iVar10;
            param_3 = param_3 + iVar10;
            iVar4 = DAT_0802d9ac;
          }
          else {
            iVar10 = uVar8 * 0x18;
            iVar5 = *(int *)(iVar10 + DAT_0802da3c + 0x1dc);
            iVar9 = *(int *)(param_1 + 0x54);
            if (iVar5 < iVar9) {
              iVar7 = iVar10 + DAT_0802da3c;
              iVar5 = (iVar5 + (uint)*(ushort *)(iVar7 + 0x1d8)) - local_38;
              *param_4 = iVar5;
              iVar4 = *(int *)(iVar10 + iVar4 + 0x1e0);
              if (iVar4 < param_3) {
                if (*(char *)(param_1 + DAT_0802da40) == '\0') {
                  iVar4 = (iVar4 + (uint)*(ushort *)(iVar7 + 0x1da)) - param_3;
                  param_4[1] = iVar4;
                  if (((iVar4 <= iVar5) && (*(int *)(param_1 + 0x58) != param_3)) &&
                     ((sVar2 = FUN_08007d28(local_38,*(int *)(param_1 + 0x58) + iVar4), sVar2 == 0
                      && (sVar2 = FUN_0802e2d0(param_1,local_38,
                                               *(int *)(param_1 + 0x58) + param_4[1]), sVar2 == 0)))
                     ) goto LAB_0802dbd4;
                  param_4[1] = 0;
                  goto LAB_0802dbd6;
                }
              }
              else {
                iVar10 = (iVar4 - (uint)*(ushort *)(iVar7 + 0x1da)) - param_3;
                iVar4 = iVar10 + -1;
                param_4[1] = iVar4;
                if (iVar5 + iVar4 < 0 == SCARRY4(iVar5,iVar4)) {
                  if (((*(int *)(param_1 + 0x58) + DAT_0802dac0 <= param_3) &&
                      (sVar2 = FUN_08007d28(local_38,*(int *)(param_1 + 0x58) +
                                                     iVar10 + DAT_0802dac4), sVar2 == 0)) &&
                     (sVar2 = FUN_0802e2d0(param_1,local_38,
                                           *(int *)(param_1 + 0x58) + param_4[1] + DAT_0802dac8),
                     sVar2 == 0)) goto LAB_0802dbd4;
                }
                else {
                  sVar2 = FUN_08007d28(iVar9 + iVar5,*(undefined4 *)(param_1 + 0x58));
                  if ((sVar2 != 0) ||
                     (sVar2 = FUN_0802e2d0(param_1,*(int *)(param_1 + 0x54) + *param_4,
                                           *(undefined4 *)(param_1 + 0x58)), sVar2 != 0)) {
                    *param_4 = 0;
                    goto LAB_0802dbd6;
                  }
                }
              }
LAB_0802dafa:
              param_4[1] = 0;
            }
            else {
              iVar7 = iVar10 + DAT_0802da3c;
              iVar5 = ((iVar5 - (uint)*(ushort *)(iVar7 + 0x1d8)) - local_38) + -1;
              *param_4 = iVar5;
              iVar4 = *(int *)(iVar10 + iVar4 + 0x1e0);
              if (iVar4 < param_3) {
                if (*(char *)(param_1 + DAT_0802db00) != '\0') goto LAB_0802dafa;
                iVar4 = (iVar4 + (uint)*(ushort *)(iVar7 + 0x1da)) - param_3;
                param_4[1] = iVar4;
                if (((-iVar5 < iVar4) || (*(int *)(param_1 + 0x58) == param_3)) ||
                   ((sVar2 = FUN_08007d28(local_38,*(int *)(param_1 + 0x58) + iVar4), sVar2 != 0 ||
                    (sVar2 = FUN_0802e2d0(param_1,local_38,*(int *)(param_1 + 0x58) + param_4[1]),
                    sVar2 != 0)))) {
                  param_4[1] = 0;
                }
                else {
LAB_0802dbd4:
                  *param_4 = 0;
                }
              }
              else {
                iVar10 = (iVar4 - (uint)*(ushort *)(iVar7 + 0x1da)) - param_3;
                iVar4 = iVar10 + -1;
                param_4[1] = iVar4;
                if (-iVar5 + iVar4 < 0 == SCARRY4(-iVar5,iVar4)) {
                  if (((*(int *)(param_1 + 0x58) + DAT_0802dbc8 <= param_3) &&
                      (sVar2 = FUN_08007d28(local_38,*(int *)(param_1 + 0x58) +
                                                     iVar10 + DAT_0802dbcc), sVar2 == 0)) &&
                     (sVar2 = FUN_0802e2d0(param_1,local_38,
                                           *(int *)(param_1 + 0x58) + param_4[1] + DAT_0802dbd0),
                     sVar2 == 0)) goto LAB_0802dbd4;
                  param_4[1] = 0;
                }
                else {
                  sVar2 = FUN_08007d28(iVar9 + iVar5,*(undefined4 *)(param_1 + 0x58));
                  if ((sVar2 == 0) &&
                     (sVar2 = FUN_0802e2d0(param_1,*(int *)(param_1 + 0x54) + *param_4,
                                           *(undefined4 *)(param_1 + 0x58)), sVar2 == 0))
                  goto LAB_0802dafa;
                  *param_4 = 0;
                }
              }
            }
LAB_0802dbd6:
            iVar4 = *param_4;
            if (iVar4 == 0) {
              iVar4 = param_4[1];
              if (iVar4 == 0) goto LAB_0802dc04;
              *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
              param_3 = param_3 + iVar4;
              iVar4 = DAT_0802dc30;
            }
            else {
              *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
              local_38 = local_38 + iVar4;
              iVar4 = DAT_0802dc30;
            }
          }
LAB_0802dc00:
          local_34 = local_30;
          *(undefined1 *)(param_1 + iVar4) = 1;
        }
      }
LAB_0802dc04:
      local_2c = local_2c + 1 & 0xff;
    } while (local_2c < *(byte *)(param_1 + 0x1b8));
  }
  return CONCAT44(in_lr,local_34);
}


