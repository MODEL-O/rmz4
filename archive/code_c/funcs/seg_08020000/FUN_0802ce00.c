// undefined FUN_0802ce00(void)
// entry 0x802ce00


undefined8 FUN_0802ce00(int param_1,short *param_2)

{
  bool bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 in_lr;
  int local_48;
  uint local_44;
  undefined4 local_40;
  ushort *local_24;
  
  iVar4 = *(int *)(param_1 + 0x54);
  iVar6 = *(int *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + DAT_0802ceb0) = 0;
  iVar8 = DAT_0802ceb4;
  *(undefined1 *)(param_1 + DAT_0802ceb4) = 0;
  local_48 = 0;
  local_40 = 0;
  pcVar7 = (char *)(param_1 + 0x1cc);
  *(char *)(param_1 + iVar8 + -1) = *pcVar7;
  if (*(char *)(param_1 + 0xd) == '\x03') {
    if (*pcVar7 != '\0') {
      uVar15 = 0;
      if (*(char *)(DAT_0802ceb8 + 0x1d2) != '\0') {
        piVar12 = (int *)(param_1 + iVar8 + -0xb);
        do {
          iVar8 = uVar15 * 0x18;
          if (*(ushort *)(iVar8 + DAT_0802ceb8 + 0x1d4) == (ushort)*(byte *)(param_1 + DAT_0802cebc)
             ) {
            if ((*(ushort *)(iVar8 + DAT_0802ceb8 + 0x1d6) & 0x20) == 0) {
              iVar8 = *(int *)(iVar8 + DAT_0802cec0);
            }
            else {
              iVar8 = *piVar12 + (*(int *)(iVar8 + DAT_0802ceec) - *(int *)(iVar8 + DAT_0802cef0));
            }
            *piVar12 = iVar8;
            *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(uVar15 * 0x18 + DAT_0802cef4);
            goto LAB_0802cf30;
          }
          uVar15 = uVar15 + 1 & 0xff;
        } while (uVar15 < *(byte *)(DAT_0802ceb8 + 0x1d2));
      }
      *(undefined1 *)(param_1 + 0x1cc) = 0;
    }
  }
  else {
    *pcVar7 = '\0';
  }
LAB_0802cf30:
  iVar8 = DAT_0802d05c;
  local_24 = (ushort *)(param_1 + 0x198);
  local_44 = 0;
  if (*local_24 != DAT_0802d058) {
    do {
      uVar15 = 0;
      bVar1 = true;
      if (*DAT_0802d060 != 0) {
        do {
          if (*(ushort *)(uVar15 * 0x18 + DAT_0802d05c + 0x1d4) == local_24[local_44]) {
            bVar1 = false;
            break;
          }
          uVar15 = uVar15 + 1 & 0xff;
        } while (uVar15 < *DAT_0802d060);
      }
      local_24[local_44] = (ushort)DAT_0802d058;
      if (!bVar1) {
        iVar5 = uVar15 * 0x18;
        iVar11 = *(int *)(iVar5 + iVar8 + 0x1dc) - *(int *)(iVar5 + iVar8 + 0x1e4);
        puVar13 = (ushort *)(iVar8 + iVar5 + 0x1d6);
        if ((*puVar13 & 0x200) != 0) {
          *(undefined1 *)(param_1 + DAT_0802d064) = 1;
        }
        uVar9 = DAT_0802d068 & *puVar13;
        if ((uVar9 != 0xf) &&
           (((uVar9 != DAT_0802d068 ||
             (iVar10 = *(int *)(iVar5 + iVar8 + 0x1e0), iVar10 != *(int *)(iVar5 + iVar8 + 0x1e8)))
            || ((*(char *)(param_1 + DAT_0802d06c) != '\0' &&
                (*(int *)(param_1 + 0x58) <=
                 (int)(iVar10 - (uint)*(ushort *)(iVar8 + iVar5 + 0x1da)))))))) {
          if (iVar11 != 0) {
            iVar5 = iVar11;
            if (iVar11 < 0) {
              iVar5 = -iVar11;
            }
            if (iVar5 <= DAT_0802d070) {
              iVar5 = *(int *)(param_1 + 0x54) + iVar11;
              *(int *)(param_1 + 0x54) = iVar5;
              if (iVar11 < 1) {
                if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
                  iVar10 = (int)*param_2;
                  uVar3 = param_2[2];
                }
                else {
                  iVar10 = -(int)*param_2;
                  uVar3 = param_2[2];
                }
                iVar5 = (iVar5 + iVar10) - ((int)((uint)uVar3 << 0x10) >> 0x11);
              }
              else {
                if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
                  iVar10 = (int)*param_2;
                  uVar3 = param_2[2];
                }
                else {
                  iVar10 = -(int)*param_2;
                  uVar3 = param_2[2];
                }
                iVar5 = iVar5 + iVar10 + ((int)((uint)uVar3 << 0x10) >> 0x11);
              }
              if ((*(char *)(param_1 + 0xd) == '\x02') &&
                 ((*(ushort *)(uVar15 * 0x18 + iVar8 + 0x1d6) & 0x200) == 0)) {
                if (iVar5 < *(int *)(param_1 + 0x54)) {
                  iVar10 = (int)param_2[2];
                }
                else {
                  iVar10 = -(int)param_2[2];
                }
                iVar10 = iVar10 + iVar5;
                iVar14 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
                         ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
                sVar2 = FUN_08007d28(iVar5,iVar14);
                if (((sVar2 != 0) || (sVar2 = FUN_0802e2d0(param_1,iVar5,iVar14), sVar2 != 0)) &&
                   ((sVar2 = FUN_08007d28(iVar10,iVar14), sVar2 != 0 ||
                    (sVar2 = FUN_0802e2d0(param_1,iVar10,iVar14), sVar2 != 0)))) goto LAB_0802d600;
                iVar14 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                         ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
                sVar2 = FUN_08007d28(iVar5,iVar14);
                if (((sVar2 != 0) || (sVar2 = FUN_0802e2d0(param_1,iVar5,iVar14), sVar2 != 0)) &&
                   ((sVar2 = FUN_08007d28(iVar10,iVar14), sVar2 != 0 ||
                    (sVar2 = FUN_0802e2d0(param_1,iVar10,iVar14), sVar2 != 0)))) goto LAB_0802d600;
              }
              if (iVar11 < 1) {
                iVar11 = FUN_08008448(iVar5,*(int *)(param_1 + 0x58) + (int)param_2[1] +
                                            ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
                if (0 < iVar11) {
                  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar11;
                }
                iVar11 = FUN_08008448(iVar5,*(int *)(param_1 + 0x58) + (int)param_2[1]);
                if (0 < iVar11) {
                  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar11;
                }
                iVar5 = FUN_08008448(iVar5,(*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                           ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
                if (0 < iVar5) goto LAB_0802d262;
              }
              else {
                iVar11 = FUN_08008264(iVar5,*(int *)(param_1 + 0x58) + (int)param_2[1] +
                                            ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
                if (iVar11 < 0) {
                  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar11;
                }
                iVar11 = FUN_08008264(iVar5,*(int *)(param_1 + 0x58) + (int)param_2[1]);
                if (iVar11 < 0) {
                  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar11;
                }
                iVar5 = FUN_08008264(iVar5,(*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                           ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
                if (iVar5 < 0) {
LAB_0802d262:
                  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
                }
              }
            }
          }
          iVar5 = *(int *)(uVar15 * 0x18 + iVar8 + 0x1e0);
          iVar11 = iVar5 - *(int *)(uVar15 * 0x18 + iVar8 + 0x1e8);
          if (((iVar11 != 0) &&
              ((*(char *)(param_1 + 0xd) == '\x02' || (*(int *)(param_1 + 0x58) <= iVar5)))) &&
             ((local_48 == 0 || (iVar11 < local_48)))) {
            local_48 = iVar11;
          }
        }
      }
      local_44 = local_44 + 1 & 0xff;
    } while ((local_44 < 0x10) && (local_24[local_44] != DAT_0802d350));
  }
  if (local_48 != 0) {
    iVar8 = local_48;
    if (local_48 < 0) {
      iVar8 = -local_48;
    }
    if (iVar8 <= DAT_0802d354) {
      iVar11 = *(int *)(param_1 + 0x58) + local_48;
      *(int *)(param_1 + 0x58) = iVar11;
      iVar5 = DAT_0802d7f0;
      iVar8 = DAT_0802d718;
      if (*(char *)(param_1 + DAT_0802d358) == '\0') {
        if (*(char *)(param_1 + 0xd) == '\x02') {
          if (local_48 < 1) {
            if ((local_48 < 0) &&
               (uVar3 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),iVar11 + DAT_0802d718),
               uVar3 != 0)) {
              iVar8 = FUN_08008080(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar8)
              ;
              if (0 < iVar8) {
                *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1 + iVar8;
              }
              if ((uVar3 & 0x10) != 0) {
                local_40 = 2;
              }
            }
          }
          else {
            local_48 = FUN_08007e98(*(undefined4 *)(param_1 + 0x54),iVar11);
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar8 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar8 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            iVar5 = FUN_08007e98(iVar8,*(undefined4 *)(param_1 + 0x58));
            if (iVar5 < local_48) {
              local_48 = iVar5;
            }
            iVar8 = FUN_0802df78(param_1,iVar8,*(undefined4 *)(param_1 + 0x58));
            if (iVar8 < local_48) {
              local_48 = iVar8;
            }
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar8 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar8 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            iVar5 = FUN_08007e98(iVar8,*(undefined4 *)(param_1 + 0x58));
            if (iVar5 < local_48) {
              local_48 = iVar5;
            }
            iVar8 = FUN_0802df78(param_1,iVar8,*(undefined4 *)(param_1 + 0x58));
            if (iVar8 < local_48) {
              local_48 = iVar8;
            }
            if (local_48 < 0) {
              local_48 = *(int *)(param_1 + 0x58) + local_48;
              goto LAB_0802d7c4;
            }
          }
        }
        else {
          if (((local_48 < 0) &&
              (((uVar15 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),iVar11 + DAT_0802d7f0),
                (uVar15 & 0x8000) == 0 ||
                (uVar15 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),
                                       *(int *)(param_1 + 0x58) + iVar5), (uVar15 & 0xf) == 0)) ||
               (uVar15 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),
                                      *(int *)(param_1 + 0x58) + iVar5), 0xe < (uVar15 & 0xf))))) &&
             (iVar8 = FUN_08008080(*(undefined4 *)(param_1 + 0x54),
                                   *(int *)(param_1 + 0x58) + DAT_0802d7f0), 0 < iVar8)) {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1 + iVar8;
          }
          if (((0 < local_48) &&
              (((uVar15 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),
                                       *(undefined4 *)(param_1 + 0x58)), (uVar15 & 0x8000) == 0 ||
                (uVar15 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),
                                       *(undefined4 *)(param_1 + 0x58)), (uVar15 & 0xf) == 0)) ||
               (uVar15 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),
                                      *(undefined4 *)(param_1 + 0x58)), 0xe < (uVar15 & 0xf))))) &&
             (local_48 = FUN_08007e98(*(undefined4 *)(param_1 + 0x54),
                                      *(undefined4 *)(param_1 + 0x58)), local_48 < 0)) {
            local_48 = *(int *)(param_1 + 0x58) + -1 + local_48;
LAB_0802d7c4:
            *(int *)(param_1 + 0x58) = local_48;
          }
        }
      }
      else if (local_48 < 1) {
        if ((local_48 < 0) && (*(char *)(param_1 + DAT_0802d534) == '\0')) {
          iVar8 = (iVar11 + param_2[1]) - ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            iVar5 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                    ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          else {
            iVar5 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                    ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          uVar15 = FUN_08007d28(iVar5,iVar8);
          if (((((uVar15 & 0x8000) != 0) &&
               (uVar15 = FUN_08007d28(iVar5,iVar8), (uVar15 & 0xf) != 0)) &&
              (uVar15 = FUN_08007d28(iVar5,iVar8), (uVar15 & 0xf) < 0xf)) ||
             (iVar5 = FUN_08008080(iVar5,iVar8), iVar5 < 1)) {
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar5 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar5 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            uVar15 = FUN_08007d28(iVar5,iVar8);
            if (((((uVar15 & 0x8000) != 0) &&
                 (uVar15 = FUN_08007d28(iVar5,iVar8), (uVar15 & 0xf) != 0)) &&
                (uVar15 = FUN_08007d28(iVar5,iVar8), (uVar15 & 0xf) < 0xf)) ||
               (iVar8 = FUN_08008080(iVar5,iVar8), iVar8 < 1)) goto LAB_0802d7c6;
          }
LAB_0802d600:
          local_40 = 1;
          goto LAB_0802d7e0;
        }
      }
      else {
        uVar15 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),iVar11);
        if ((((uVar15 & 0x8000) == 0) ||
            (uVar15 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
            (uVar15 & 0xf) == 0)) ||
           (uVar15 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
           0xe < (uVar15 & 0xf))) {
          local_48 = FUN_08007e98(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        }
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar8 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                  ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        else {
          iVar8 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                  ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        uVar15 = FUN_08007d28(iVar8,*(undefined4 *)(param_1 + 0x58));
        if (((((uVar15 & 0x8000) == 0) ||
             (uVar15 = FUN_08007d28(iVar8,*(undefined4 *)(param_1 + 0x58)), (uVar15 & 0xf) == 0)) ||
            (uVar15 = FUN_08007d28(iVar8,*(undefined4 *)(param_1 + 0x58)), 0xe < (uVar15 & 0xf))) &&
           (iVar8 = FUN_08007e98(iVar8,*(undefined4 *)(param_1 + 0x58)), iVar8 < local_48)) {
          local_48 = iVar8;
        }
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar8 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                  ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        else {
          iVar8 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                  ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        uVar15 = FUN_08007d28(iVar8,*(undefined4 *)(param_1 + 0x58));
        if (((((uVar15 & 0x8000) == 0) ||
             (uVar15 = FUN_08007d28(iVar8,*(undefined4 *)(param_1 + 0x58)), (uVar15 & 0xf) == 0)) ||
            (uVar15 = FUN_08007d28(iVar8,*(undefined4 *)(param_1 + 0x58)), 0xe < (uVar15 & 0xf))) &&
           (iVar8 = FUN_08007e98(iVar8,*(undefined4 *)(param_1 + 0x58)), iVar8 < local_48)) {
          local_48 = iVar8;
        }
        if (local_48 < 0) {
          iVar8 = FUN_08007e98(iVar4,iVar6 + 1);
          if (iVar8 != -1) {
LAB_0802d4ec:
            local_48 = *(int *)(param_1 + 0x58) + local_48;
            goto LAB_0802d7c4;
          }
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            iVar8 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                    ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          else {
            iVar8 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                    ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          sVar2 = FUN_0802e1f0(param_1,iVar8,
                               (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                               ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
          if (sVar2 == 0) {
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar8 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar8 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            sVar2 = FUN_0802e1f0(param_1,iVar8,
                                 (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                 ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
            if (sVar2 == 0) goto LAB_0802d4ec;
          }
          goto LAB_0802d600;
        }
      }
    }
  }
LAB_0802d7c6:
  if ((iVar4 != *(int *)(param_1 + 0x54)) || (iVar6 != *(int *)(param_1 + 0x58))) {
    *(undefined1 *)(param_1 + DAT_0802d7f4) = 1;
  }
LAB_0802d7e0:
  return CONCAT44(in_lr,local_40);
}


