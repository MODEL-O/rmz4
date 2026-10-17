// undefined FUN_080d52c4(void)
// entry 0x80d52c4


undefined4 FUN_080d52c4(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  uint uVar17;
  int iVar18;
  ushort *puVar19;
  uint uVar20;
  undefined4 in_lr;
  ushort local_44;
  uint local_38;
  int local_30;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(iVar4 + 0x78);
  uVar6 = iVar5 >> 8;
  uVar7 = (*(int *)(iVar4 + 0x54) - *(int *)(param_2 + 8) & 0xffffffU) >> 8;
  uVar12 = *(int *)(iVar4 + 0x58) - *(int *)(param_2 + 0xc);
  *DAT_080d5340 =
       (ushort)*(byte *)(iVar4 + 0x74) |
       (ushort)*(byte *)(iVar4 + 0x76) << 10 | (ushort)*(byte *)(iVar4 + 0x75) << 5;
  iVar18 = DAT_080d5344;
  uVar17 = (uVar12 & 0xffffff) >> 8;
  iVar13 = (int)(uVar12 * 0x100) >> 0x10;
  local_30 = -iVar13;
  if ((-1 < iVar13) && (local_30 = 0, 0x9f < iVar13)) {
    local_30 = iVar13 + -0xa0;
  }
  if (((int)uVar6 < 1) || ((int)uVar6 <= local_30)) {
    uVar2 = 0;
    *(undefined2 *)(DAT_080d5344 + 6) = 0;
  }
  else {
    uVar12 = uVar6 - local_30;
    if (0xa0 < (int)uVar12) {
      uVar12 = 0xa0;
    }
    if (iVar5 >> 0xd < 5) {
      local_38 = iVar5 >> 0xd & 0xff;
    }
    else {
      local_38 = 4;
    }
    iVar18 = (uVar12 + 1) * 2;
    puVar8 = (ushort *)FUN_08000a70(iVar18);
    if (puVar8 == (ushort *)0x0) {
      return in_lr;
    }
    FUN_08000ab4(0,puVar8,iVar18);
    if (local_30 == 0) {
      local_44 = (ushort)((uint)iVar5 >> 8);
      *puVar8 = local_44;
    }
    else {
      uVar3 = FUN_08128bf4(uVar6 * uVar6 - local_30 * local_30);
      *puVar8 = uVar3;
    }
    uVar20 = 0;
    iVar18 = 1 << local_38;
    if ((int)uVar12 <= iVar18) {
      uVar11 = 0;
      uVar20 = 0;
    }
    else {
      puVar19 = puVar8 + iVar18;
      puVar16 = puVar8;
      do {
        uVar11 = uVar20 + iVar18;
        uVar3 = FUN_08128bf4(uVar6 * uVar6 - (local_30 + uVar11) * (local_30 + uVar11));
        *puVar19 = uVar3;
        uVar3 = *puVar16;
        uVar1 = *puVar19;
        iVar5 = (uint)uVar3 << 0x10;
        puVar16 = puVar16 + 1;
        puVar19 = puVar19 + 1;
        uVar20 = uVar20 + 1;
        if (uVar20 < uVar11) {
          puVar14 = puVar8 + uVar20;
          do {
            iVar5 = iVar5 - ((int)(((uint)uVar3 - (uint)uVar1) * 0x10000) >> local_38);
            *puVar14 = (ushort)((uint)iVar5 >> 0x10);
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 1;
            puVar19 = puVar19 + 1;
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar11);
        }
      } while (uVar20 <= uVar12);
      uVar20 = uVar12 - (1 << local_38);
    }
    if (uVar20 <= uVar12) {
      puVar16 = puVar8 + uVar20;
      do {
        uVar3 = FUN_08128bf4(uVar6 * uVar6 - (uVar20 + local_30) * (uVar20 + local_30));
        *puVar16 = uVar3;
        puVar16 = puVar16 + 1;
        uVar20 = uVar20 + 1;
      } while (uVar20 <= uVar12);
    }
    uVar20 = 0;
    if ((uint)(2 << local_38) < uVar11) {
      uVar20 = uVar11 - (2 << local_38);
    }
    if ((int)uVar12 <= iVar18) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar12 - (1 << local_38);
    }
    if (uVar20 != uVar12) {
      uVar3 = puVar8[uVar20];
      iVar18 = FUN_08129120(((uint)uVar3 - (uint)puVar8[uVar12]) * 0x10000,uVar12 - uVar20);
      iVar5 = (uint)uVar3 << 0x10;
      uVar20 = uVar20 + 1;
      if (uVar20 < uVar12) {
        puVar16 = puVar8 + uVar20;
        do {
          iVar5 = iVar5 - iVar18;
          *puVar16 = (ushort)((uint)iVar5 >> 0x10);
          puVar16 = puVar16 + 1;
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar12);
      }
    }
    iVar18 = FUN_08000a70(0x140);
    if (iVar18 != 0) {
      FUN_08000ab4(0,iVar18,0x140);
      iVar5 = uVar17 << 0x10;
      iVar13 = iVar5 >> 0xf;
      if (uVar17 < 0xa0) {
        uVar12 = uVar7 - puVar8[1];
        uVar17 = uVar12 & 0xffff;
        if ((int)(uVar12 * 0x10000) < 0) {
          uVar17 = 0;
        }
        if (0xf0 < (short)uVar17) {
          uVar17 = 0xf0;
        }
        iVar9 = puVar8[1] + uVar7;
        uVar3 = (ushort)iVar9;
        if (iVar9 * 0x10000 < 0) {
          uVar3 = 0;
        }
        if (0xf0 < (short)uVar3) {
          uVar3 = 0xf0;
        }
        *(ushort *)(iVar13 + iVar18) = uVar3 | (ushort)((uVar17 << 0x10) >> 8);
      }
      iVar5 = iVar5 >> 0x10;
      if ((-1 < iVar5) && (iVar5 < (int)(uVar6 + 0xa0))) {
        uVar12 = iVar5 - 0xa0;
        if (iVar5 < 0xa0) {
          uVar12 = 1;
        }
        uVar17 = uVar6;
        if ((int)(iVar5 - uVar6) < 0) {
          uVar17 = iVar5 + 1;
        }
        iVar9 = *(int *)(iVar4 + 0x60);
        if (iVar9 == 0) {
          if (uVar12 < uVar17) {
            puVar19 = (ushort *)(iVar5 * 2 + iVar18 + uVar12 * -2);
            puVar16 = puVar8 + (uVar12 - local_30);
            do {
              uVar20 = uVar7 - *puVar16;
              uVar11 = uVar20 & 0xffff;
              if ((int)(uVar20 * 0x10000) < 0) {
                uVar11 = 0;
              }
              if (0xf0 < (short)uVar11) {
                uVar11 = 0xf0;
              }
              iVar9 = *puVar16 + uVar7;
              uVar3 = (ushort)iVar9;
              if (iVar9 * 0x10000 < 0) {
                uVar3 = 0;
              }
              if (0xf0 < (short)uVar3) {
                uVar3 = 0xf0;
              }
              *puVar19 = uVar3 | (ushort)((uVar11 << 0x10) >> 8);
              puVar19 = puVar19 + -1;
              puVar16 = puVar16 + 1;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar17);
          }
        }
        else if (uVar12 < uVar17) {
          puVar19 = (ushort *)(iVar5 * 2 + iVar18 + uVar12 * -2);
          puVar16 = puVar8 + (uVar12 - local_30);
          do {
            uVar15 = iVar9 * (local_30 + uVar12) >> 8;
            uVar20 = (uVar7 - *puVar16) + uVar15;
            uVar11 = uVar20 & 0xffff;
            if ((int)(uVar20 * 0x10000) < 0) {
              uVar11 = 0;
            }
            if (0xf0 < (short)uVar11) {
              uVar11 = 0xf0;
            }
            iVar10 = *puVar16 + uVar7 + uVar15;
            uVar3 = (ushort)iVar10;
            if (iVar10 * 0x10000 < 0) {
              uVar3 = 0;
            }
            if (0xf0 < (short)uVar3) {
              uVar3 = 0xf0;
            }
            *puVar19 = uVar3 | (ushort)((uVar11 << 0x10) >> 8);
            puVar19 = puVar19 + -1;
            puVar16 = puVar16 + 1;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar17);
        }
      }
      if (((int)-uVar6 <= iVar5) && (iVar5 < 0xa0)) {
        uVar12 = -iVar5;
        if (-1 < iVar5) {
          uVar12 = 1;
        }
        if (0x9f < (int)(iVar5 + uVar6)) {
          uVar6 = 0xa0 - iVar5;
        }
        iVar4 = *(int *)(iVar4 + 0x60);
        if (iVar4 == 0) {
          if (uVar12 < uVar6) {
            puVar16 = (ushort *)(uVar12 * 2 + iVar13 + iVar18);
            puVar8 = puVar8 + (uVar12 - local_30);
            do {
              uVar17 = uVar7 - *puVar8;
              uVar20 = uVar17 & 0xffff;
              if ((int)(uVar17 * 0x10000) < 0) {
                uVar20 = 0;
              }
              if (0xf0 < (short)uVar20) {
                uVar20 = 0xf0;
              }
              iVar4 = *puVar8 + uVar7;
              uVar3 = (ushort)iVar4;
              if (iVar4 * 0x10000 < 0) {
                uVar3 = 0;
              }
              if (0xf0 < (short)uVar3) {
                uVar3 = 0xf0;
              }
              *puVar16 = uVar3 | (ushort)((uVar20 << 0x10) >> 8);
              puVar16 = puVar16 + 1;
              puVar8 = puVar8 + 1;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar6);
          }
        }
        else if (uVar12 < uVar6) {
          puVar16 = (ushort *)(uVar12 * 2 + iVar13 + iVar18);
          puVar8 = puVar8 + (uVar12 - local_30);
          do {
            uVar11 = iVar4 * (local_30 + uVar12) >> 8;
            uVar17 = (uVar7 - *puVar8) - uVar11;
            uVar20 = uVar17 & 0xffff;
            if ((int)(uVar17 * 0x10000) < 0) {
              uVar20 = 0;
            }
            if (0xf0 < (short)uVar20) {
              uVar20 = 0xf0;
            }
            iVar5 = (*puVar8 + uVar7) - uVar11;
            uVar3 = (ushort)iVar5;
            if (iVar5 * 0x10000 < 0) {
              uVar3 = 0;
            }
            if (0xf0 < (short)uVar3) {
              uVar3 = 0xf0;
            }
            *puVar16 = uVar3 | (ushort)((uVar20 << 0x10) >> 8);
            puVar16 = puVar16 + 1;
            puVar8 = puVar8 + 1;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar6);
        }
      }
      iVar4 = DAT_080d576c;
      *(int *)(DAT_080d576c + 0x174) = iVar18;
      *(undefined4 *)(iVar4 + 0x178) = DAT_080d5770;
      *(undefined4 *)(DAT_080d576c + 0x17c) = DAT_080d5774;
    }
    uVar2 = 0xa0;
    iVar18 = DAT_080d5778;
  }
  *(undefined2 *)(iVar18 + 10) = uVar2;
  return in_lr;
}


