// undefined FUN_080211b0(void)
// entry 0x80211b0


longlong FUN_080211b0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  uint *puVar15;
  uint in_lr;
  
  iVar10 = DAT_08021220;
  iVar9 = *(int *)(param_1 + 0x20);
  pcVar14 = (char *)(param_1 + 0x17c);
  cVar8 = *pcVar14;
  if (cVar8 == '\0') {
    *(ushort *)(DAT_08021220 + 8) = *(ushort *)(DAT_08021220 + 8) | 1;
    bVar1 = *(byte *)(DAT_08021224 + 4);
    *(byte *)(DAT_08021224 + 4) = bVar1 | 8;
    *(undefined1 *)(DAT_08021228 + param_1) = 0;
    if ((bVar1 & 0x40) == 0) {
      cVar8 = *(char *)(iVar10 + 2);
      if (cVar8 == '\0') {
        *(undefined4 *)(iVar10 + 0x284) = DAT_08021260;
        FUN_080275f0(iVar10 + 0x10,**(undefined4 **)(DAT_08021264 + 0x10));
        FUN_0801f63c(1);
        *pcVar14 = '\x01';
        goto LAB_080217c2;
      }
      if (cVar8 == '\x01') {
        *(undefined4 *)(iVar10 + 0x284) = DAT_08021290;
        FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_08021294 + 0x10) + 4));
        FUN_0801f63c(2);
        cVar8 = '\x02';
      }
      else {
        if (cVar8 == '\x02') {
          *(undefined4 *)(iVar10 + 0x284) = DAT_080212b8;
          FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_080212bc + 0x10) + 8));
          *pcVar14 = '\x02';
          goto LAB_080217c2;
        }
        if (cVar8 == '\x03') {
          FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_080212dc + 0x10) + 0x10));
          FUN_0801f63c(4);
          cVar8 = '\x04';
        }
        else if (cVar8 == '\x04') {
          FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_08021300 + 0x10) + 0x18));
          *(ushort *)(iVar10 + 8) = *(ushort *)(iVar10 + 8) | 2;
          cVar8 = '\x05';
        }
        else if (cVar8 == '\x05') {
          FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_0802131c + 0x10) + 0x20));
          cVar8 = '\t';
        }
        else if (cVar8 == '\x06') {
          FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_08021338 + 0x10) + 0x28));
          cVar8 = '\v';
        }
        else {
          if (cVar8 != '\a') goto LAB_080217c2;
          FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_08021354 + 0x10) + 0x30));
          cVar8 = '\f';
        }
      }
    }
    else {
      *(undefined4 *)(iVar10 + 0x284) = DAT_0802122c;
      FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_08021230 + 0x10) + 0x40));
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      cVar8 = '\x14';
    }
  }
  else if (cVar8 == '\x01') {
    FUN_0801f63c(2);
    cVar8 = '\x02';
  }
  else {
    if (((cVar8 != '\x02') ||
        (iVar10 = FUN_08129050(*(int *)(iVar9 + 0x54) + DAT_08021394,0x3c000),
        iVar10 + 0xf000 <= DAT_08021398)) || (*(int *)(iVar9 + 0x58) <= DAT_0802139c)) {
      if ((*(char *)(param_1 + 0x17c) == '\x03') &&
         (iVar10 = FUN_08129050(*(int *)(iVar9 + 0x54) + DAT_080213d4,0x3c000),
         0x1e000 < iVar10 + 0xf000)) {
        uVar12 = *(undefined4 *)(*(int *)(DAT_080213dc + 0x10) + 0xc);
        iVar10 = DAT_080213d8;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\x04') ||
           (iVar10 = FUN_08129050(*(int *)(iVar9 + 0x54) + DAT_08021438,0x3c000),
           iVar10 + 0xf000 < 0x1e001)) {
          pbVar6 = DAT_080214f0;
          pbVar5 = DAT_080214bc;
          iVar10 = DAT_080214b8;
          pcVar14 = (char *)(param_1 + 0x17c);
          if (*pcVar14 == '\x05') {
            FUN_0801f63c(3);
            *pcVar14 = '\x06';
            goto LAB_080217c2;
          }
          if ((*pcVar14 == '\x06') && ((*(ushort *)(DAT_080214b8 + 8) & 0x10) != 0)) {
            *DAT_080214bc = *DAT_080214bc | 0x80;
            pbVar5[1] = pbVar5[1] | 2;
            FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_080214c0 + 0x10) + 0x1c));
            uVar2 = *(ushort *)(iVar10 + 8);
            uVar4 = (ushort)DAT_080214c4;
            uVar3 = (ushort)DAT_080214c8;
            *(byte *)(iVar10 + 0x12) = *(byte *)(iVar10 + 0x12) & 0xfd;
            *(byte *)(DAT_080214cc + 4) = *(byte *)(DAT_080214cc + 4) & 0xf7;
            *(ushort *)(iVar10 + 8) = uVar4 & uVar2 & uVar3 | 1;
            *pcVar14 = '\a';
            goto LAB_080217c2;
          }
          pcVar14 = (char *)(param_1 + 0x17c);
          if (*pcVar14 == '\a') {
            *DAT_080214f0 = *DAT_080214f0 & 0x7f;
            pbVar6[1] = 0;
            *pcVar14 = '\b';
            goto LAB_080217c2;
          }
          if ((*pcVar14 == '\b') &&
             (iVar10 = FUN_08129050(*(int *)(iVar9 + 0x54) + DAT_0802152c,0x3c000),
             DAT_08021530 < iVar10 + 0xf000)) {
            FUN_0801f63c(5);
            *(byte *)(DAT_08021534 + 4) = *(byte *)(DAT_08021534 + 4) | 8;
            *pcVar14 = '\t';
            goto LAB_080217c2;
          }
          if ((*(char *)(param_1 + 0x17c) != '\t') || (DAT_080215a4 < *(int *)(iVar9 + 0x58))) {
            if ((*(char *)(param_1 + 0x17c) == '\n') &&
               (iVar10 = FUN_08129050(*(int *)(iVar9 + 0x54) + DAT_08021680,0x3c000),
               DAT_08021684 < iVar10 + 0xf000)) {
              uVar13 = *(undefined4 *)(*(int *)(DAT_0802168c + 0x10) + 0x24);
              uVar12 = DAT_08021688;
            }
            else {
              if ((*(char *)(param_1 + 0x17c) != '\v') ||
                 (iVar10 = FUN_08129050(*(int *)(iVar9 + 0x54) + DAT_080216d0,0x3c000),
                 iVar10 + 0xf000 <= DAT_080216d4)) {
                iVar7 = DAT_0802179c;
                pbVar5 = DAT_08021748;
                iVar10 = DAT_08021744;
                pcVar14 = (char *)(param_1 + 0x17c);
                if (*pcVar14 == '\f') {
                  FUN_0801f63c(6);
                  *pcVar14 = '\r';
                  goto LAB_080217c2;
                }
                if ((*pcVar14 == '\r') && ((*(ushort *)(DAT_08021744 + 8) & 0x10) != 0)) {
                  *DAT_08021748 = *DAT_08021748 | 0x80;
                  pbVar5[1] = pbVar5[1] | 2;
                  FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_0802174c + 0x10) + 0x34));
                  uVar2 = (ushort)DAT_08021750;
                  *(byte *)(iVar10 + 0x12) = *(byte *)(iVar10 + 0x12) & 0xfd;
                  *(ushort *)(iVar10 + 8) = uVar2 & *(ushort *)(iVar10 + 8) | 4;
                  *pcVar14 = '\x0e';
                  goto LAB_080217c2;
                }
                pcVar14 = (char *)(param_1 + 0x17c);
                if (*pcVar14 == '\x14') {
                  iVar10 = *(int *)(param_1 + 0x180);
                  if (iVar10 != 0) {
                    *(int *)(param_1 + 0x180) = iVar10 + -1;
                    goto LAB_080217c2;
                  }
                  puVar15 = (uint *)(DAT_0802179c + 0x168);
                  uVar11 = *puVar15;
                  if (uVar11 != 0xffffffff) {
                    FUN_08002a98(uVar11 & 0xffff);
                    *puVar15 = 0xffffffff;
                  }
                  *(undefined4 *)(iVar7 + 0x154) = 2;
                  cVar8 = '\x15';
                }
                else {
                  if ((*pcVar14 != '\x15') || (*(int *)(DAT_08021814 + 0x154) != 0))
                  goto LAB_080217c2;
                  *(ushort *)(DAT_08021814 + 8) =
                       (*(ushort *)(DAT_08021814 + 8) | 4) & (ushort)DAT_08021818;
                  cVar8 = '\x16';
                }
                goto LAB_080217c0;
              }
              uVar13 = *(undefined4 *)(*(int *)(DAT_080216dc + 0x10) + 0x2c);
              uVar12 = DAT_080216d8;
            }
            FUN_080275f0(uVar12,uVar13);
            FUN_0801f63c(7);
            *(undefined1 *)(param_1 + 0x17c) = 0xc;
            goto LAB_080217c2;
          }
          pcVar14 = (char *)(DAT_080215a8 + param_1);
          if ((*pcVar14 != '\0') ||
             (iVar10 = FUN_08129050(*(int *)(iVar9 + 0x54) + DAT_080215ac,0x3c000),
             iVar10 + 0xf000 <= DAT_080215b0)) {
            pcVar14 = (char *)(DAT_080215d4 + param_1);
            cVar8 = *pcVar14;
            if (cVar8 == '\x01') {
              *(undefined1 *)(DAT_080215d8 + 1) = 0;
              *pcVar14 = '\x02';
            }
            else if ((cVar8 == '\x02') &&
                    (iVar10 = FUN_08129050(*(int *)(iVar9 + 0x54) + DAT_0802163c,0x3c000),
                    DAT_08021640 < iVar10 + 0xf000)) {
              *(undefined1 *)(DAT_08021644 + 1) = 0;
              puVar15 = (uint *)(DAT_08021648 + 0x168);
              uVar11 = *puVar15;
              if (uVar11 != 0x9b) {
                if (uVar11 != 0xffffffff) {
                  FUN_08002a98(uVar11 & 0xffff);
                  *puVar15 = 0xffffffff;
                }
                FUN_08002a88(0x9b);
                *puVar15 = 0x9b;
              }
              *(undefined1 *)(param_1 + 0x17c) = 10;
            }
            goto LAB_080217c2;
          }
          *(byte *)(DAT_080215b4 + 1) = *(byte *)(DAT_080215b4 + 1) | 2;
          puVar15 = (uint *)(DAT_080215b8 + 0x168);
          uVar11 = *puVar15;
          if (uVar11 != 0xffffffff) {
            FUN_08002a98(uVar11 & 0xffff);
            *puVar15 = 0xffffffff;
          }
          cVar8 = '\x01';
          goto LAB_080217c0;
        }
        uVar12 = *(undefined4 *)(*(int *)(DAT_08021440 + 0x10) + 0x14);
        iVar10 = DAT_0802143c;
      }
      FUN_080275f0(iVar10,uVar12);
      FUN_0801f63c(4);
      *(byte *)(DAT_08021444 + 4) = *(byte *)(DAT_08021444 + 4) | 8;
      *(ushort *)(iVar10 + -8) = *(ushort *)(iVar10 + -8) | 2;
      *(undefined1 *)(param_1 + 0x17c) = 5;
      goto LAB_080217c2;
    }
    cVar8 = '\x03';
  }
LAB_080217c0:
  *pcVar14 = cVar8;
LAB_080217c2:
  if ((*(char *)(param_1 + 0x17c) == '\x02') && ((*(ushort *)(DAT_08021814 + 8) & 8) == 0)) {
    iVar10 = DAT_0802181c;
    if (((*(byte *)(DAT_0802181c + DAT_08021820) & 1) == 0) && (0x4b000 < *(int *)(iVar9 + 0x58))) {
      if ((*(byte *)(DAT_0802181c + DAT_08021824) & 0xf) == 2) {
        FUN_0810e528(DAT_08021828,0x5a);
      }
      else {
        FUN_0810e528(0x610,0x5a);
      }
      iVar10 = DAT_08021878;
      *(byte *)(DAT_08021878 + DAT_0802187c) = *(byte *)(DAT_08021878 + DAT_0802187c) | 1;
    }
    if (((*(byte *)(iVar10 + DAT_0802187c) & 2) == 0) && (0x8c000 < *(int *)(iVar9 + 0x58))) {
      if ((*(byte *)(iVar10 + DAT_08021880) & 0xf) == 2) {
        FUN_0810e528(DAT_08021884,0x5a);
      }
      else {
        FUN_0810e528(DAT_080218ec,0x5a);
      }
      iVar10 = DAT_080218f0;
      *(byte *)(DAT_080218f0 + DAT_080218f4) = *(byte *)(DAT_080218f0 + DAT_080218f4) | 2;
    }
    bVar1 = *(byte *)(iVar10 + DAT_080218f4);
    if (((bVar1 & 4) == 0) && (0xbe000 < *(int *)(iVar9 + 0x58))) {
      if (*(int *)(iVar10 + DAT_080218f8) != 0) {
        *(undefined1 *)(*(int *)(iVar10 + DAT_080218f8) + 0xd) = 1;
        *(byte *)(iVar10 + DAT_080218fc) = bVar1 & 4;
      }
      if ((*(byte *)(iVar10 + DAT_08021900) & 0xf) == 2) {
        FUN_0810e528(DAT_08021904,0x5a);
      }
      else {
        FUN_0810e528(DAT_08021958,0x5a);
      }
      iVar10 = DAT_0802195c;
      *(byte *)(DAT_0802195c + DAT_08021960) = *(byte *)(DAT_0802195c + DAT_08021960) | 4;
    }
    if (((*(byte *)(iVar10 + DAT_08021960) & 8) == 0) &&
       (*(uint *)(DAT_08021964 + 0x284) <= DAT_08021968)) {
      if ((*(byte *)(iVar10 + DAT_0802196c) & 0xf) == 2) {
        FUN_0810e528(0x618,0x5a);
      }
      else {
        FUN_0810e528(DAT_080219c0,0x5a);
      }
      iVar10 = DAT_080219c4;
      *(byte *)(DAT_080219c4 + DAT_080219c8) = *(byte *)(DAT_080219c4 + DAT_080219c8) | 8;
    }
    if (((*(byte *)(iVar10 + DAT_080219c8) & 0x10) == 0) &&
       (*(uint *)(DAT_080219cc + 0x284) <= DAT_080219d0)) {
      if ((*(byte *)(iVar10 + DAT_080219d4) & 0xf) == 2) {
        FUN_0810e528(DAT_080219d8,0x5a);
      }
      else {
        FUN_0810e528(DAT_08021a04,0x5a);
      }
      *(byte *)(DAT_08021a08 + DAT_08021a0c) = *(byte *)(DAT_08021a08 + DAT_08021a0c) | 0x10;
    }
  }
  return (ulonglong)in_lr << 0x20;
}


