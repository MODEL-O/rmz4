// undefined FUN_0801d5e0(void)
// entry 0x801d5e0


undefined4 FUN_0801d5e0(int *param_1)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  int *piVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined4 in_lr;
  uint local_38;
  int local_34;
  
  iVar6 = DAT_0801d6b4;
  iVar9 = DAT_0801d6b0;
  uVar5 = (uint)*(byte *)(DAT_0801d6b0 + 0x450);
  if (uVar5 == 4) {
    iVar7 = FUN_08128fb8(*param_1 + DAT_0801d6b8,0x3c000);
    cVar4 = FUN_08128f80(param_1,*(undefined4 *)(DAT_0801d6bc + 0x10));
    iVar19 = *(int *)(iVar9 + DAT_0801d6c0);
    piVar16 = *(int **)(iVar9 + 0x458);
    local_38 = 1;
    sVar1 = (short)piVar16[5];
    while (sVar1 != 0) {
      local_38 = local_38 + 1 & 0xff;
      sVar1 = (short)piVar16[local_38 * 3 + 2];
    }
    uVar5 = local_38 - 1 & 0xff;
    if (*(char *)(DAT_0801d6b0 + DAT_0801d6c4) != cVar4) {
      FUN_0801e25c(4);
    }
    iVar21 = DAT_0801d6c8 + *param_1;
    uVar20 = 1;
    bVar3 = 0;
    iVar9 = FUN_08129050(*param_1 + DAT_0801d6b8,0x3c000);
    if (DAT_0801d6cc < iVar9 + 0xf000) {
      local_34 = 0;
      if (0x39000 < iVar9 + 0xf000) {
        local_34 = 1;
      }
    }
    else {
      local_34 = 0xff;
    }
    uVar18 = 1;
    if (uVar5 != 0) {
      do {
        iVar9 = piVar16[uVar18 * 3];
        if (((char)local_34 < '\0') && (iVar8 = DAT_0801d70c, 0x2d0 < iVar9)) {
LAB_0801d726:
          iVar9 = iVar9 + iVar8;
        }
        else if (('\0' < (char)local_34) && (piVar16[uVar18 * 3] < 0x2d1)) {
          iVar8 = 0x3c0;
          goto LAB_0801d726;
        }
        iVar9 = iVar9 + (iVar7 * 0x3c000 >> 8);
        iVar8 = iVar9 - (iVar21 >> 8);
        if (-1 < iVar8) {
          if (iVar8 <= DAT_0801d7a0) {
            bVar3 = bVar3 + 1;
          }
          if (iVar9 < iVar6) {
            iVar6 = iVar9;
            uVar20 = uVar18;
          }
        }
        uVar18 = uVar18 + 1 & 0xff;
      } while (uVar18 <= uVar5);
    }
    if ((*(ushort *)(DAT_0801d7a4 + DAT_0801d7a8) & 1) != 0) {
      return in_lr;
    }
    bVar17 = 0;
    if (bVar3 != 0) {
      piVar11 = piVar16 + uVar20 * 3;
      do {
        iVar9 = *piVar11;
        if ((local_34 * 0x1000000 < 0) && (0x2d0 < iVar9)) {
          iVar9 = iVar9 + DAT_0801d7ac;
        }
        else if ((0 < local_34 << 0x18) && (*piVar11 < 0x2d1)) {
          iVar9 = iVar9 + 0x3c0;
        }
        iVar6 = piVar11[1] * 0x100 + -1;
        if ((iVar6 - param_1[1]) + 0xa000U <= DAT_0801d870) {
          puVar10 = (uint *)(((int)uVar20 >> 5) * 4 + DAT_0801d874);
          uVar18 = 1 << (uVar20 & 0x1f);
          if ((((((*puVar10 & uVar18) != 0) && (*(int *)(DAT_0801d874 + DAT_0801d878) <= iVar6)) &&
               (iVar6 <= *(int *)(DAT_0801d874 + DAT_0801d878 + 4))) &&
              ((*(short *)(DAT_0801d874 + DAT_0801d878 + -0x10) != 1 ||
               ((*(byte *)((uint)*(ushort *)(piVar11 + 2) * 8 + iVar19 + 5) & 2) == 0)))) &&
             (iVar21 = FUN_0801e1c4(), iVar21 != 0)) {
            iVar8 = (uint)*(ushort *)(piVar11 + 2) * 8 + iVar19;
            iVar8 = FUN_0801dd7c(*(undefined1 *)(iVar8 + 1),*(undefined1 *)(iVar8 + 2));
            if (iVar8 == 0) {
              FUN_0801e204(iVar21);
            }
            else {
              *(undefined1 *)(iVar8 + 0x10) =
                   *(undefined1 *)((uint)*(ushort *)(piVar11 + 2) * 8 + iVar19 + 3);
              *(undefined1 *)(iVar8 + 0x11) =
                   *(undefined1 *)((uint)*(ushort *)(piVar11 + 2) * 8 + iVar19 + 4);
              *(int *)(iVar8 + 0x54) = iVar9 * 0x100 + iVar7 * 0x3c000;
              *(int *)(iVar8 + 0x58) = iVar6;
              *(int *)(iVar21 + 4) = iVar8;
              *(short *)(iVar21 + 8) = (short)uVar20;
              *(ushort *)(iVar21 + 10) =
                   (ushort)*(byte *)((uint)*(ushort *)(piVar11 + 2) * 8 + iVar19);
              uVar12 = *(undefined4 *)(iVar8 + 0x58);
              *(undefined4 *)(iVar21 + 0xc) = *(undefined4 *)(iVar8 + 0x54);
              *(undefined4 *)(iVar21 + 0x10) = uVar12;
              *puVar10 = *puVar10 & ~uVar18;
            }
          }
        }
        bVar17 = bVar17 + 1;
        uVar20 = uVar20 + 1;
        if ((int)uVar5 < (int)uVar20) {
          uVar20 = 1;
          piVar11 = piVar16;
        }
        piVar11 = piVar11 + 3;
      } while (bVar17 < bVar3);
    }
    iVar9 = *param_1;
    iVar6 = param_1[1];
    piVar16 = (int *)*(int *)(DAT_0801d91c + DAT_0801d920);
joined_r0x0801d8ee:
    piVar11 = piVar16;
    if (piVar11 == (int *)0x0) {
      return in_lr;
    }
    piVar16 = (int *)*piVar11;
    iVar7 = piVar11[1];
    if (iVar7 != 0) goto code_r0x0801d900;
    goto LAB_0801d9cc;
  }
  cVar4 = FUN_08128f80(param_1,*(undefined4 *)(uVar5 * 4 + DAT_0801daa4));
  iVar6 = *(int *)(iVar9 + DAT_0801daa8);
  iVar7 = *(int *)(iVar9 + 0x458);
  if (*(char *)(iVar9 + DAT_0801daa8 + -3) != cVar4) {
    FUN_0801e25c(uVar5);
  }
  iVar21 = DAT_0801dba4;
  iVar19 = DAT_0801dba0;
  iVar13 = *param_1;
  iVar8 = DAT_0801daac + iVar13 >> 8;
  uVar5 = (uint)*(ushort *)(iVar9 + DAT_0801dab0);
  piVar16 = (int *)(uVar5 * 0xc + iVar7);
  if (*piVar16 <= iVar8) goto LAB_0801dab4;
  do {
    piVar16 = piVar16 + -3;
    uVar5 = uVar5 - 1;
  } while (iVar8 < *piVar16);
  for (; *(int *)(uVar5 * 0xc + iVar7) <= iVar8; uVar5 = uVar5 + 1) {
LAB_0801dab4:
  }
  *(short *)(DAT_0801dba0 + DAT_0801dba4) = (short)uVar5;
  if ((*(ushort *)(iVar19 + iVar21 + -0x16) & 1) == 0) {
    iVar19 = param_1[1];
    piVar16 = (int *)(uVar5 * 0xc + iVar7);
    iVar9 = *piVar16;
    while (iVar9 * 0x100 < iVar13 + 0xc000) {
      iVar21 = piVar16[1] * 0x100 + -1;
      if ((iVar21 - iVar19) + 0xa000U <= DAT_0801dba8) {
        puVar10 = (uint *)(((int)uVar5 >> 5) * 4 + DAT_0801dba0);
        uVar20 = 1 << (uVar5 & 0x1f);
        if (((((*puVar10 & uVar20) != 0) && (*(int *)(DAT_0801dba0 + DAT_0801dbac) <= iVar21)) &&
            (iVar21 <= *(int *)(DAT_0801dba0 + DAT_0801dbac + 4))) &&
           (((*(short *)(DAT_0801dba0 + DAT_0801dbac + -0x10) != 1 ||
             ((*(byte *)((uint)*(ushort *)(piVar16 + 2) * 8 + iVar6 + 5) & 2) == 0)) &&
            (iVar8 = FUN_0801e1c4(), iVar8 != 0)))) {
          iVar14 = (uint)*(ushort *)(piVar16 + 2) * 8 + iVar6;
          iVar14 = FUN_0801dd7c(*(undefined1 *)(iVar14 + 1),*(undefined1 *)(iVar14 + 2));
          if (iVar14 == 0) {
            FUN_0801e204(iVar8);
          }
          else {
            *(undefined1 *)(iVar14 + 0x10) =
                 *(undefined1 *)((uint)*(ushort *)(piVar16 + 2) * 8 + iVar6 + 3);
            *(undefined1 *)(iVar14 + 0x11) =
                 *(undefined1 *)((uint)*(ushort *)(piVar16 + 2) * 8 + iVar6 + 4);
            *(int *)(iVar14 + 0x54) = iVar9 * 0x100;
            *(int *)(iVar14 + 0x58) = iVar21;
            *(int *)(iVar8 + 4) = iVar14;
            *(short *)(iVar8 + 8) = (short)uVar5;
            *(ushort *)(iVar8 + 10) = (ushort)*(byte *)((uint)*(ushort *)(piVar16 + 2) * 8 + iVar6);
            *puVar10 = *puVar10 & ~uVar20;
          }
        }
      }
      piVar16 = piVar16 + 3;
      uVar5 = uVar5 + 1;
      iVar9 = *piVar16;
    }
    iVar6 = *param_1;
    iVar9 = param_1[1];
    if (*(int **)(DAT_0801dc38 + DAT_0801dc3c) != (int *)0x0) {
      puVar15 = (ushort *)(DAT_0801dc38 + DAT_0801dc40);
      piVar16 = *(int **)(DAT_0801dc38 + DAT_0801dc3c);
      do {
        piVar11 = (int *)*piVar16;
        iVar19 = piVar16[1];
        if (iVar19 == 0) {
LAB_0801dcf8:
          iVar19 = (int)(short)piVar16[2];
          if ((iVar19 < (int)(uint)*puVar15) ||
             (((int)uVar5 <= iVar19 ||
              (DAT_0801dd74 < (*(int *)(iVar19 * 0xc + iVar7 + 4) * 0x100 - iVar9) + 0x9fffU)))) {
            if ((*(ushort *)((int)piVar16 + 10) & 1) != 0) {
              puVar10 = (uint *)(((int)((uint)*(ushort *)(piVar16 + 2) << 0x10) >> 0x15) * 4 +
                                DAT_0801dd78);
              *puVar10 = *puVar10 | 1 << (*(ushort *)(piVar16 + 2) & 0x1f);
            }
            FUN_0801e204(piVar16);
          }
        }
        else {
          uVar2 = *(ushort *)((int)piVar16 + 10);
          if ((uVar2 & 0x10) == 0) {
            if (*(byte *)(iVar19 + 0xc) < 3) {
              if (*(byte *)(iVar19 + 0xc) < 2) {
                if (((uVar2 & 0xc) == 0) &&
                   ((DAT_0801dd6c < (*(int *)(iVar19 + 0x54) - iVar6) + 0xd000U ||
                    (DAT_0801dd70 < (*(int *)(iVar19 + 0x58) - iVar9) + 0xc000U)))) {
                  iVar21 = (int)(short)piVar16[2];
                  if ((iVar21 < (int)(uint)*puVar15) ||
                     (((int)uVar5 <= iVar21 ||
                      (DAT_0801dd70 < (*(int *)(iVar21 * 0xc + iVar7 + 4) * 0x100 - iVar9) + 0xbfffU
                      )))) {
                    FUN_0801df34(iVar19);
                    *(ushort *)((int)piVar16 + 10) = *(ushort *)((int)piVar16 + 10) | 0x11;
                    piVar16[1] = 0;
                  }
                }
              }
              else {
                if ((uVar2 & 4) != 0) {
                  *(ushort *)((int)piVar16 + 10) = uVar2 | 1;
                }
                *(ushort *)((int)piVar16 + 10) = *(ushort *)((int)piVar16 + 10) | 0x10;
              }
            }
            else {
              if ((uVar2 & 4) != 0) {
                *(ushort *)((int)piVar16 + 10) = uVar2 | 1;
              }
              *(ushort *)((int)piVar16 + 10) = *(ushort *)((int)piVar16 + 10) | 0x10;
              piVar16[1] = 0;
            }
          }
          else if (2 < *(byte *)(iVar19 + 0xc)) {
            piVar16[1] = 0;
          }
          if ((iVar19 == 0) || ((*(ushort *)((int)piVar16 + 10) & 0x10) != 0)) goto LAB_0801dcf8;
        }
        piVar16 = piVar11;
      } while (piVar11 != (int *)0x0);
    }
  }
  return in_lr;
code_r0x0801d900:
  uVar2 = *(ushort *)((int)piVar11 + 10);
  if ((uVar2 & 0x10) == 0) {
    if (*(byte *)(iVar7 + 0xc) < 3) {
      if (*(byte *)(iVar7 + 0xc) < 2) {
        if ((((uVar2 & 0xc) == 0) &&
            ((DAT_0801da28 < (*(int *)(iVar7 + 0x54) - iVar9) + 0xd000U ||
             (DAT_0801da2c < (*(int *)(iVar7 + 0x58) - iVar6) + 0xc000U)))) &&
           ((DAT_0801da28 < (piVar11[3] - iVar9) + 0xd000U ||
            (DAT_0801da2c < (piVar11[4] - iVar6) + 0xc000U)))) {
          FUN_0801df34(iVar7);
          *(ushort *)((int)piVar11 + 10) = *(ushort *)((int)piVar11 + 10) | 0x11;
          piVar11[1] = uVar2 & 0xc;
        }
      }
      else {
        if ((uVar2 & 4) != 0) {
          *(ushort *)((int)piVar11 + 10) = uVar2 | 1;
        }
        *(ushort *)((int)piVar11 + 10) = *(ushort *)((int)piVar11 + 10) | 0x10;
      }
    }
    else {
      if ((uVar2 & 4) != 0) {
        *(ushort *)((int)piVar11 + 10) = uVar2 | 1;
      }
      *(ushort *)((int)piVar11 + 10) = *(ushort *)((int)piVar11 + 10) | 0x10;
      piVar11[1] = 0;
    }
  }
  else if (2 < *(byte *)(iVar7 + 0xc)) {
    piVar11[1] = 0;
  }
  if ((iVar7 == 0) || ((*(ushort *)((int)piVar11 + 10) & 0x10) != 0)) {
LAB_0801d9cc:
    if ((DAT_0801da2c < (piVar11[3] - iVar9) + 0xc000U) ||
       (DAT_0801da30 < (piVar11[4] - iVar6) + 0xa000U)) {
      if ((*(ushort *)((int)piVar11 + 10) & 1) != 0) {
        puVar10 = (uint *)(((int)((uint)*(ushort *)(piVar11 + 2) << 0x10) >> 0x15) * 4 +
                          DAT_0801da34);
        *puVar10 = *puVar10 | 1 << (*(ushort *)(piVar11 + 2) & 0x1f);
      }
      FUN_0801e204(piVar11);
    }
  }
  goto joined_r0x0801d8ee;
}


