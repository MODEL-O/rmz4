// undefined FUN_080266a0(void)
// entry 0x80266a0


void FUN_080266a0(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 uVar10;
  ushort uVar11;
  uint uVar12;
  ushort uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  short sVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  char *pcVar21;
  uint *puVar22;
  int iVar23;
  code *UNRECOVERED_JUMPTABLE;
  
  pbVar9 = DAT_08027124;
  pbVar8 = DAT_08027098;
  iVar7 = DAT_08027094;
  pbVar6 = DAT_08026f9c;
  iVar5 = DAT_08026f98;
  pbVar20 = DAT_08026a40;
  pbVar18 = DAT_08026998;
  iVar4 = DAT_08026994;
  iVar15 = DAT_08026904;
  iVar19 = DAT_08026730;
  iVar23 = *(int *)(param_1 + 0x20);
  pcVar21 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar21;
  if (cVar1 == '\0') {
    *(ushort *)(DAT_08026730 + 8) = *(ushort *)(DAT_08026730 + 8) | 1;
    iVar15 = DAT_08026734;
    *(byte *)(DAT_08026734 + 4) = *(byte *)(DAT_08026734 + 4) | 8;
    iVar5 = DAT_0802673c;
    iVar4 = DAT_08026738;
    cVar1 = *(char *)(iVar19 + 2);
    if (cVar1 == '\0') {
      uVar12 = 0;
      do {
        uVar11 = *(ushort *)(uVar12 * 2 + iVar5);
        pbVar18 = (byte *)((uint)(uVar11 >> 3) + iVar15 + 4);
        *pbVar18 = *pbVar18 & ~(byte)(1 << (uVar11 & 7));
        uVar12 = uVar12 + 1 & 0xff;
      } while (uVar12 < 8);
      FUN_080275f0(iVar19 + 0x10,**(undefined4 **)(iVar4 + 0x40));
      FUN_0801f63c(1);
      *(undefined1 *)(param_1 + 0x17c) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_08027170();
    }
    if (cVar1 == '\x01') {
      FUN_080275f0(iVar19 + 0x10,*(undefined4 *)(*(int *)(DAT_08026760 + 0x40) + 4));
      FUN_0801f63c(2);
                    /* WARNING: Subroutine does not return */
      FUN_0802716e(2);
    }
    if (cVar1 == '\x02') {
      uVar14 = *(undefined4 *)(*(int *)(DAT_08026774 + 0x40) + 8);
    }
    else {
      if (cVar1 == '\x03') {
        FUN_080275f0(iVar19 + 0x10,*(undefined4 *)(*(int *)(DAT_08026790 + 0x40) + 0xc));
                    /* WARNING: Subroutine does not return */
        FUN_0802716e(4);
      }
      if (cVar1 != '\x04') {
        if (cVar1 == '\x05') {
          FUN_080275f0(iVar19 + 0x10,*(undefined4 *)(*(int *)(DAT_080267f4 + 0x40) + 0x54));
          *pcVar21 = '\a';
          *(undefined1 *)(param_1 + DAT_080267f8) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_08027170();
        }
        if (cVar1 == '\x06') {
          FUN_080275f0(iVar19 + 0x10,*(undefined4 *)(*(int *)(DAT_08026814 + 0x40) + 0x5c));
                    /* WARNING: Subroutine does not return */
          FUN_0802716e(9);
        }
        if (cVar1 == '\a') {
          FUN_080275f0(iVar19 + 0x10,*(undefined4 *)(*(int *)(DAT_08026838 + 0x40) + 100));
          FUN_0801f63c(6);
                    /* WARNING: Subroutine does not return */
          FUN_0802716e(10);
        }
        if (cVar1 != '\b') {
          if (*(char *)(iVar19 + 2) == '\t') {
            *(ushort *)(iVar19 + 8) =
                 (ushort)DAT_08026884 & *(ushort *)(iVar19 + 8) & (ushort)DAT_08026888;
            *(undefined1 *)(param_1 + 0x17c) = 0xf;
                    /* WARNING: Subroutine does not return */
            FUN_08027170();
          }
                    /* WARNING: Subroutine does not return */
          FUN_08027170();
        }
        FUN_080275f0(iVar19 + 0x10,*(undefined4 *)(*(int *)(DAT_0802685c + 0x40) + 0x70));
        FUN_0801f63c(6);
                    /* WARNING: Subroutine does not return */
        FUN_0802716e(0xd);
      }
      *(undefined4 *)(iVar19 + 0x154) = 1;
      pbVar18 = (byte *)(param_1 + DAT_080267c8);
      *pbVar18 = (byte)((ushort)*(undefined2 *)(iVar19 + 10) >> 8);
      uVar14 = *(undefined4 *)((uint)*pbVar18 * 8 + *(int *)(DAT_080267cc + 0x40) + 0x10);
    }
    FUN_080275f0(iVar19 + 0x10,uVar14);
    *pcVar21 = cVar1;
                    /* WARNING: Subroutine does not return */
    FUN_08027170();
  }
  if (cVar1 == '\x01') {
    FUN_0801f63c(2);
                    /* WARNING: Subroutine does not return */
    FUN_0802716e(2);
  }
  if ((cVar1 == '\x02') && (DAT_080268c0 < *(int *)(iVar23 + 0x54))) {
    *(byte *)(DAT_080268c4 + 1) = *(byte *)(DAT_080268c4 + 1) | 2;
    FUN_0801f63c(3);
                    /* WARNING: Subroutine does not return */
    FUN_0802716e(3);
  }
  if (((*(char *)(param_1 + 0x17c) == '\x03') && (DAT_08026900 < *(int *)(iVar23 + 0x54))) &&
     (uVar11 = *(ushort *)(DAT_08026904 + 0x14) & 1, (*(ushort *)(DAT_08026904 + 0x14) & 1) == 0)) {
    *(char *)(DAT_08026908 + 1) = (char)uVar11;
    *(ushort *)(iVar15 + 10) = uVar11;
    *(undefined1 *)(param_1 + DAT_0802690c) = 0;
    *(char *)(param_1 + 0x17c) = '\x04';
                    /* WARNING: Subroutine does not return */
    FUN_08027170();
  }
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 != '\x04') {
    if (cVar1 == '\x05') {
      *(undefined2 *)(DAT_08026dc4 + 10) = 0;
      pbVar18 = DAT_08026dc8;
      *DAT_08026dc8 = *DAT_08026dc8 & 0x7f;
      pbVar18[1] = 0;
      uVar10 = 6;
code_r0x0802716e:
      *(undefined1 *)(param_1 + 0x17c) = uVar10;
    }
    else {
      if ((cVar1 == '\x06') && (0xb4000 < *(int *)(iVar23 + 0x54))) {
        *(byte *)(DAT_08026df8 + 4) = *(byte *)(DAT_08026df8 + 4) | 8;
        FUN_0801f63c(5);
        *(char *)(param_1 + 0x17c) = '\a';
        *(undefined1 *)(param_1 + DAT_08026dfc) = 0;
        goto code_r0x08027170;
      }
      if ((*(char *)(param_1 + 0x17c) == '\a') && (*(int *)(iVar23 + 0x58) <= DAT_08026e58)) {
        pcVar21 = (char *)(DAT_08026e5c + param_1);
        if ((*pcVar21 == '\0') && (0xb3000 < *(int *)(iVar23 + 0x54))) {
          *(byte *)(DAT_08026e60 + 1) = *(byte *)(DAT_08026e60 + 1) | 2;
          puVar22 = (uint *)(DAT_08026e64 + 0x168);
          uVar12 = *puVar22;
          if (uVar12 != 0xffffffff) {
            FUN_08002a98(uVar12 & 0xffff);
            *puVar22 = 0xffffffff;
          }
          *pcVar21 = '\x01';
        }
        else {
          pcVar21 = (char *)(param_1 + DAT_08026e80);
          cVar1 = *pcVar21;
          if (cVar1 == '\x01') {
            *(undefined1 *)(DAT_08026e84 + 1) = 0;
            *pcVar21 = '\x02';
          }
          else if ((cVar1 == '\x02') && (DAT_08026ed4 < *(int *)(iVar23 + 0x54))) {
            *(undefined1 *)(DAT_08026ed8 + 1) = 0;
            puVar22 = (uint *)(DAT_08026edc + 0x168);
            uVar12 = *puVar22;
            if (uVar12 != 0x9b) {
              if (uVar12 != 0xffffffff) {
                FUN_08002a98(uVar12 & 0xffff);
                *puVar22 = 0xffffffff;
              }
              FUN_08002a88(0x9b);
              *puVar22 = 0x9b;
            }
            *(undefined1 *)(param_1 + 0x17c) = 8;
          }
        }
        goto code_r0x08027170;
      }
      if ((*(char *)(param_1 + 0x17c) == '\b') && (*(int *)(iVar23 + 0x58) <= DAT_08026f00)) {
        uVar16 = *(undefined4 *)(*(int *)(DAT_08026f08 + 0x40) + 0x58);
        uVar14 = DAT_08026f04;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\t') || (DAT_08026f38 < *(int *)(iVar23 + 0x58))) {
          pcVar21 = (char *)(param_1 + 0x17c);
          if (*pcVar21 == '\n') {
            FUN_0801f63c(6);
            *pcVar21 = '\v';
            goto code_r0x08027170;
          }
          if ((*pcVar21 == '\v') && (uVar11 = *(ushort *)(DAT_08026f98 + 8), (uVar11 & 0x10) != 0))
          {
            *DAT_08026f9c = *DAT_08026f9c | 0x80;
            pbVar6[1] = pbVar6[1] | 2;
            uVar13 = (ushort)DAT_08026fa0;
            *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
            *(ushort *)(iVar5 + 8) = uVar13 & uVar11 | 1;
            *pcVar21 = '\f';
            goto code_r0x08027170;
          }
          cVar1 = *(char *)(param_1 + 0x17c);
          if (cVar1 == '\f') {
            if ((*(ushort *)(DAT_08026fcc + 10) & 1) == 0) {
              FUN_080275f0(DAT_08026fcc + 0x10,*(undefined4 *)(*(int *)(DAT_08026ffc + 0x40) + 0x68)
                          );
            }
            else {
              FUN_080275f0(DAT_08026fcc + 0x10,*(undefined4 *)(*(int *)(DAT_08026fd0 + 0x40) + 0x6c)
                          );
            }
            *(undefined1 *)(DAT_08027000 + 1) = 0;
            FUN_0801f63c(8);
            *(undefined1 *)(param_1 + 0x17c) = 0xd;
            goto code_r0x08027170;
          }
          if (cVar1 == '\r') {
            *DAT_08027034 = *DAT_08027034 & 0x7f;
            *(ushort *)(DAT_08027038 + 10) = *(ushort *)(DAT_08027038 + 10) | 1;
            FUN_0801f63c(6);
            *(undefined4 *)(DAT_0802703c + DAT_08027040) = 0xea000;
            uVar10 = 0xe;
          }
          else if (cVar1 == '\x0e') {
            if ((*(ushort *)(DAT_08027094 + 8) & 0x10) == 0) {
              if ((*(int *)(DAT_080270e8 + DAT_080270ec) != 0) ||
                 ((*(ushort *)(DAT_08027094 + 8) & 8) != 0)) goto code_r0x08027170;
              FUN_080275f0(DAT_08027094 + 0x10,*(undefined4 *)(*(int *)(DAT_080270f0 + 0x40) + 0x78)
                          );
              *DAT_080270f4 = *DAT_080270f4 | 0x80;
              *(undefined2 *)(iVar7 + 0x158) = 0x8000;
              *(ushort *)(iVar7 + 8) = (ushort)DAT_080270f8 & *(ushort *)(iVar7 + 8) | 8;
              uVar10 = 0x20;
            }
            else {
              *DAT_08027098 = *DAT_08027098 | 0x80;
              pbVar8[1] = pbVar8[1] | 2;
              FUN_080275f0(iVar7 + 0x10,*(undefined4 *)(*(int *)(DAT_0802709c + 0x40) + 0x74));
              *(byte *)(iVar7 + 0x12) = *(byte *)(iVar7 + 0x12) & 0xfd;
              *(ushort *)(iVar7 + 8) = *(ushort *)(iVar7 + 8) | 5;
              FUN_0801f63c(9);
              uVar10 = 0xf;
            }
          }
          else if (cVar1 == '\x0f') {
            *DAT_08027124 = *DAT_08027124 & 0x7f;
            *(ushort *)(DAT_08027128 + 8) = (ushort)DAT_0802712c & *(ushort *)(DAT_08027128 + 8);
            pbVar9[1] = 0;
            FUN_0801f63c(9);
            uVar10 = 0x10;
          }
          else if (cVar1 == '\x10') {
            *(ushort *)(DAT_08027148 + 8) =
                 (ushort)DAT_0802714c & *(ushort *)(DAT_08027148 + 8) & (ushort)DAT_08027150;
            uVar10 = 0x11;
          }
          else {
            if (cVar1 != ' ') goto code_r0x08027170;
            *DAT_08027180 = *DAT_08027180 & 0x7f;
            *(ushort *)(DAT_08027184 + 8) = (ushort)DAT_08027188 & *(ushort *)(DAT_08027184 + 8);
            uVar10 = 0x21;
          }
          goto code_r0x0802716e;
        }
        uVar16 = *(undefined4 *)(*(int *)(DAT_08026f40 + 0x40) + 0x60);
        uVar14 = DAT_08026f3c;
      }
      FUN_080275f0(uVar14,uVar16);
      FUN_0801f63c(7);
      *(undefined1 *)(param_1 + 0x17c) = 10;
    }
    goto code_r0x08027170;
  }
  uVar11 = *(ushort *)(DAT_08026994 + 8);
  bVar2 = (byte)uVar11 & 0x10;
  if ((uVar11 & 0x10) != 0) {
    *DAT_08026998 = *DAT_08026998 | 0x80;
    pbVar18[1] = pbVar18[1] | 2;
    uVar3 = (ushort)DAT_0802699c;
    uVar13 = (ushort)DAT_080269a0;
    *(byte *)(iVar4 + 0x12) = *(byte *)(iVar4 + 0x12) & 0xfd;
    *(ushort *)(iVar4 + 8) = uVar3 & uVar11 & uVar13 | 1;
    pbVar20 = (byte *)(param_1 + DAT_080269ac);
    uVar11 = *(ushort *)((*pbVar20 - 1) * 2 + DAT_080269a8);
    pbVar18 = (byte *)((uint)(uVar11 >> 3) + DAT_080269a4 + 4);
    *pbVar18 = (byte)(1 << (uVar11 & 7)) | *pbVar18;
    if (*pbVar20 == 3) {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080269b0 + 0x40) + 0x7c));
    }
    else {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080269f8 + 0x40) + 0x10));
    }
    *(undefined1 *)(param_1 + DAT_080269fc) = 10;
    if (((*(byte *)(DAT_08026a00 + 7) & 0xf0) == 0xf0) &&
       ((*(byte *)(DAT_08026a00 + 8) & 0xf) == 0xf)) {
      *(byte *)(DAT_08026a00 + 4) = *(byte *)(DAT_08026a00 + 4) & 0xf7;
      *(undefined1 *)(param_1 + 0x17c) = 5;
    }
    goto code_r0x08027170;
  }
  pbVar18 = (byte *)(param_1 + DAT_08026a3c);
  if (*pbVar18 == 10) {
    *DAT_08026a40 = *DAT_08026a40 & 0x7f;
    pbVar20[1] = bVar2;
    FUN_0801f63c(3);
    *pbVar18 = bVar2;
  }
  if (*pbVar18 != 0) {
    if (*(char *)(iVar4 + 2) == '\x04') {
      FUN_0801f63c(3);
    }
    goto code_r0x08027170;
  }
  iVar19 = *(int *)(iVar23 + 0x54);
  if (iVar19 <= DAT_08026a78) goto code_r0x08027170;
  if ((DAT_08026a7c < iVar19) || (*(int *)(iVar23 + 0x58) < 0x78001)) {
    if ((iVar19 < 0x14a001) ||
       ((*(int *)(iVar23 + 0x58) < 0x50001 || (DAT_08026af0 < *(int *)(iVar23 + 0x58))))) {
      if ((DAT_08026b54 < iVar19) || (DAT_08026b58 < *(int *)(iVar23 + 0x58))) {
        if (iVar19 < 0x14a001) {
LAB_08026c60:
          if (((DAT_08026c94 < iVar19) || (*(int *)(iVar23 + 0x58) < 0x3c001)) ||
             (DAT_08026c98 < *(int *)(iVar23 + 0x58))) {
            if ((iVar19 < 0x14a001) || (*(int *)(iVar23 + 0x58) < 0x78001)) {
              if ((DAT_08026d6c < iVar19) ||
                 ((*(int *)(iVar23 + 0x58) < 0x50001 || (DAT_08026d70 < *(int *)(iVar23 + 0x58)))))
              goto code_r0x08027170;
              if ((*(ushort *)(DAT_08026d74 + 10) & 0x80) == 0) {
                FUN_080275f0(DAT_08026d74 + 0x10,
                             *(undefined4 *)(*(int *)(DAT_08026d78 + 0x40) + 0x4c));
              }
              else {
                FUN_080275f0(DAT_08026d74 + 0x10,
                             *(undefined4 *)(*(int *)(DAT_08026d9c + 0x40) + 0x50));
              }
              sVar17 = 8;
              *(undefined1 *)(param_1 + DAT_08026da0) = 8;
              uVar11 = (ushort)*(byte *)(DAT_08026da4 + 10);
              uVar13 = 0x80;
              iVar19 = DAT_08026da4;
            }
            else {
              if ((*(ushort *)(DAT_08026d00 + 10) & 0x40) == 0) {
                FUN_080275f0(DAT_08026d00 + 0x10,
                             *(undefined4 *)(*(int *)(DAT_08026d04 + 0x40) + 0x44));
              }
              else {
                FUN_080275f0(DAT_08026d00 + 0x10,
                             *(undefined4 *)(*(int *)(DAT_08026d28 + 0x40) + 0x48));
              }
              sVar17 = 7;
              *(undefined1 *)(param_1 + DAT_08026d2c) = 7;
              uVar11 = (ushort)*(byte *)(DAT_08026d30 + 10);
              uVar13 = 0x40;
              iVar19 = DAT_08026d30;
            }
          }
          else {
            if ((*(ushort *)(DAT_08026c9c + 10) & 0x20) == 0) {
              FUN_080275f0(DAT_08026c9c + 0x10,*(undefined4 *)(*(int *)(DAT_08026ca0 + 0x40) + 0x3c)
                          );
            }
            else {
              FUN_080275f0(DAT_08026c9c + 0x10,*(undefined4 *)(*(int *)(DAT_08026cc4 + 0x40) + 0x40)
                          );
            }
            sVar17 = 6;
            *(undefined1 *)(param_1 + DAT_08026cc8) = 6;
            uVar11 = (ushort)*(byte *)(DAT_08026ccc + 10);
            uVar13 = 0x20;
            iVar19 = DAT_08026ccc;
          }
        }
        else {
          iVar15 = *(int *)(iVar23 + 0x58);
          if ((iVar15 < 0x3c001) || (DAT_08026bc4 < iVar15)) {
            if ((iVar19 < 0x14a001) || (DAT_08026c28 < iVar15)) goto LAB_08026c60;
            if ((*(ushort *)(DAT_08026c2c + 10) & 0x10) == 0) {
              FUN_080275f0(DAT_08026c2c + 0x10,*(undefined4 *)(*(int *)(DAT_08026c30 + 0x40) + 0x34)
                          );
            }
            else {
              FUN_080275f0(DAT_08026c2c + 0x10,*(undefined4 *)(*(int *)(DAT_08026c54 + 0x40) + 0x38)
                          );
            }
            sVar17 = 5;
            *(undefined1 *)(param_1 + DAT_08026c58) = 5;
            uVar11 = (ushort)*(byte *)(DAT_08026c5c + 10);
            uVar13 = 0x10;
            iVar19 = DAT_08026c5c;
          }
          else {
            if ((*(ushort *)(DAT_08026bc8 + 10) & 8) == 0) {
              FUN_080275f0(DAT_08026bc8 + 0x10,*(undefined4 *)(*(int *)(DAT_08026bcc + 0x40) + 0x2c)
                          );
            }
            else {
              FUN_080275f0(DAT_08026bc8 + 0x10,*(undefined4 *)(*(int *)(DAT_08026bf0 + 0x40) + 0x30)
                          );
            }
            sVar17 = 4;
            *(undefined1 *)(param_1 + DAT_08026bf4) = 4;
            uVar11 = (ushort)*(byte *)(DAT_08026bf8 + 10);
            uVar13 = 8;
            iVar19 = DAT_08026bf8;
          }
        }
      }
      else {
        if ((*(ushort *)(DAT_08026b5c + 10) & 4) == 0) {
          FUN_080275f0(DAT_08026b5c + 0x10,*(undefined4 *)(*(int *)(DAT_08026b60 + 0x40) + 0x24));
        }
        else {
          FUN_080275f0(DAT_08026b5c + 0x10,*(undefined4 *)(*(int *)(DAT_08026b84 + 0x40) + 0x28));
        }
        sVar17 = 3;
        *(undefined1 *)(param_1 + DAT_08026b88) = 3;
        uVar11 = (ushort)*(byte *)(DAT_08026b8c + 10);
        uVar13 = 4;
        iVar19 = DAT_08026b8c;
      }
    }
    else {
      if ((*(ushort *)(DAT_08026af4 + 10) & 2) == 0) {
        FUN_080275f0(DAT_08026af4 + 0x10,*(undefined4 *)(*(int *)(DAT_08026af8 + 0x40) + 0x1c));
      }
      else {
        FUN_080275f0(DAT_08026af4 + 0x10,*(undefined4 *)(*(int *)(DAT_08026b1c + 0x40) + 0x20));
      }
      sVar17 = 2;
      *(undefined1 *)(param_1 + DAT_08026b20) = 2;
      uVar11 = (ushort)*(byte *)(DAT_08026b24 + 10);
      uVar13 = 2;
      iVar19 = DAT_08026b24;
    }
  }
  else {
    if ((*(ushort *)(iVar4 + 10) & 1) == 0) {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08026a80 + 0x40) + 0x14));
    }
    else {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08026ab0 + 0x40) + 0x18));
    }
    sVar17 = 1;
    *(undefined1 *)(param_1 + DAT_08026ab4) = 1;
    uVar11 = (ushort)*(byte *)(DAT_08026ab8 + 10);
    uVar13 = 1;
    iVar19 = DAT_08026ab8;
  }
  *(ushort *)(iVar19 + 10) = uVar11 | uVar13 | sVar17 << 8;
  FUN_0801f63c(4);
code_r0x08027170:
                    /* WARNING: Could not recover jumptable at 0x0802717e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}


