// undefined FUN_08020980(void)
// entry 0x8020980


longlong FUN_08020980(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  char *pcVar16;
  uint in_lr;
  
  iVar10 = DAT_08020e80;
  pbVar9 = DAT_08020e2c;
  iVar8 = DAT_08020e28;
  pbVar7 = DAT_08020c78;
  pbVar6 = DAT_08020c48;
  iVar4 = DAT_08020c44;
  pbVar5 = DAT_08020b24;
  iVar13 = DAT_080209ec;
  iVar14 = *(int *)(param_1 + 0x20);
  pcVar16 = (char *)(param_1 + 0x17c);
  cVar11 = *pcVar16;
  if (cVar11 == '\0') {
    *(ushort *)(DAT_080209ec + 8) = *(ushort *)(DAT_080209ec + 8) | 1;
    iVar4 = DAT_080209f0;
    bVar1 = *(byte *)(DAT_080209f0 + 4);
    *(byte *)(DAT_080209f0 + 4) = bVar1 | 8;
    *(undefined4 *)(iVar13 + 0x188) = 0;
    *(undefined1 *)(param_1 + 0x17d) = 0;
    if ((bVar1 & 0x40) == 0) {
      cVar11 = *(char *)(iVar13 + 2);
      if (cVar11 == '\0') {
        FUN_080275f0(iVar13 + 0x10,**(undefined4 **)(DAT_08020a20 + 0xc));
        FUN_0801f63c(1);
        *(byte *)(iVar4 + 9) = *(byte *)(iVar4 + 9) & 0xdf;
        *pcVar16 = '\x01';
        goto LAB_08020ea6;
      }
      if (cVar11 == '\x01') {
        FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08020a40 + 0xc) + 4));
        FUN_0801f63c(2);
        cVar11 = '\x02';
      }
      else {
        if (cVar11 == '\x02') {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08020a5c + 0xc) + 8));
          *pcVar16 = '\x02';
          goto LAB_08020ea6;
        }
        if (cVar11 == '\x03') {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08020a7c + 0xc) + 0x10));
          FUN_0801f63c(4);
          cVar11 = '\x04';
        }
        else if (cVar11 == '\x04') {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08020a98 + 0xc) + 0x18));
          cVar11 = '\x05';
        }
        else if (cVar11 == '\x05') {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08020ab4 + 0xc) + 0x20));
          cVar11 = '\t';
        }
        else if (cVar11 == '\x06') {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08020ad0 + 0xc) + 0x28));
          cVar11 = '\v';
        }
        else {
          if (cVar11 != '\a') goto LAB_08020ea6;
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08020aec + 0xc) + 0x30));
          cVar11 = '\f';
        }
      }
    }
    else {
      FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_080209f4 + 0xc) + 0x40));
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      cVar11 = '\x14';
    }
  }
  else if (cVar11 == '\x01') {
    FUN_0801f63c(2);
    cVar11 = '\x02';
  }
  else if ((cVar11 == '\x02') && (*(int *)(iVar14 + 0x54) <= DAT_08020b20)) {
    *DAT_08020b24 = *DAT_08020b24 | 0x80;
    pbVar5[1] = pbVar5[1] | 2;
    cVar11 = '\x03';
  }
  else {
    pcVar16 = (char *)(param_1 + 0x17c);
    if ((*pcVar16 == '\x03') && (*(int *)(iVar14 + 0x54) <= DAT_08020b64)) {
      *(undefined1 *)(DAT_08020b68 + 1) = 0;
      FUN_080275f0(DAT_08020b6c,*(undefined4 *)(*(int *)(DAT_08020b70 + 0xc) + 0xc));
      FUN_0801f63c(4);
      *(byte *)(DAT_08020b74 + 4) = *(byte *)(DAT_08020b74 + 4) | 8;
      cVar11 = '\x05';
    }
    else {
      pcVar16 = (char *)(param_1 + 0x17c);
      if ((*pcVar16 == '\x04') && (*(int *)(iVar14 + 0x54) <= DAT_08020bb4)) {
        *(undefined1 *)(DAT_08020bb8 + 1) = 0;
        FUN_080275f0(DAT_08020bbc,*(undefined4 *)(*(int *)(DAT_08020bc0 + 0xc) + 0x14));
        FUN_0801f63c(4);
        *(byte *)(DAT_08020bc4 + 4) = *(byte *)(DAT_08020bc4 + 4) | 8;
        cVar11 = '\x05';
      }
      else {
        pcVar16 = (char *)(param_1 + 0x17c);
        if (*pcVar16 == '\x05') {
          *DAT_08020bec = *DAT_08020bec & 0x7f;
          FUN_0801f63c(3);
          *pcVar16 = '\x06';
          goto LAB_08020ea6;
        }
        if ((*pcVar16 == '\x06') && ((*(ushort *)(DAT_08020c44 + 8) & 0x10) != 0)) {
          *DAT_08020c48 = *DAT_08020c48 | 0x80;
          pbVar6[1] = pbVar6[1] | 2;
          FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08020c4c + 0xc) + 0x1c));
          uVar2 = *(ushort *)(iVar4 + 8);
          uVar3 = (ushort)DAT_08020c50;
          *(byte *)(iVar4 + 0x12) = *(byte *)(iVar4 + 0x12) & 0xfd;
          *(byte *)(DAT_08020c54 + 4) = *(byte *)(DAT_08020c54 + 4) & 0xf7;
          *(ushort *)(iVar4 + 8) = uVar3 & uVar2 | 1;
          *pcVar16 = '\a';
          goto LAB_08020ea6;
        }
        pcVar16 = (char *)(param_1 + 0x17c);
        cVar11 = *pcVar16;
        if (cVar11 == '\a') {
          *DAT_08020c78 = *DAT_08020c78 & 0x7f;
          pbVar7[1] = 0;
          cVar11 = '\b';
        }
        else if (cVar11 == '\b') {
          FUN_0801f63c(5);
          *(byte *)(DAT_08020c94 + 4) = *(byte *)(DAT_08020c94 + 4) | 8;
          cVar11 = '\t';
        }
        else if (cVar11 == '\t') {
          pcVar16 = (char *)(param_1 + DAT_08020cd8);
          if ((*pcVar16 != '\0') || (*(int *)(iVar14 + 0x54) <= DAT_08020cdc)) {
            pcVar16 = (char *)(param_1 + DAT_08020d00);
            cVar11 = *pcVar16;
            if (cVar11 == '\x01') {
              *(undefined1 *)(DAT_08020d04 + 1) = 0;
              *pcVar16 = '\x02';
            }
            else if ((cVar11 == '\x02') && (DAT_08020d54 < *(int *)(iVar14 + 0x54))) {
              *(undefined1 *)(DAT_08020d58 + 1) = 0;
              puVar15 = (uint *)(DAT_08020d5c + 0x168);
              uVar12 = *puVar15;
              if (uVar12 != 0x9b) {
                if (uVar12 != 0xffffffff) {
                  FUN_08002a98(uVar12 & 0xffff);
                  *puVar15 = 0xffffffff;
                }
                FUN_08002a88(0x9b);
                *puVar15 = 0x9b;
              }
              *(undefined1 *)(param_1 + 0x17c) = 10;
            }
            goto LAB_08020ea6;
          }
          *(byte *)(DAT_08020ce0 + 1) = *(byte *)(DAT_08020ce0 + 1) | 2;
          puVar15 = (uint *)(DAT_08020ce4 + 0x168);
          uVar12 = *puVar15;
          if (uVar12 != 0xffffffff) {
            FUN_08002a98(uVar12 & 0xffff);
            *puVar15 = 0xffffffff;
          }
          cVar11 = '\x01';
        }
        else if ((cVar11 == '\n') && (DAT_08020d84 < *(int *)(iVar14 + 0x54))) {
          FUN_080275f0(DAT_08020d88,*(undefined4 *)(*(int *)(DAT_08020d8c + 0xc) + 0x24));
          FUN_0801f63c(7);
          cVar11 = '\f';
        }
        else {
          pcVar16 = (char *)(param_1 + 0x17c);
          if ((*pcVar16 == '\v') && (DAT_08020dbc < *(int *)(iVar14 + 0x54))) {
            FUN_080275f0(DAT_08020dc0,*(undefined4 *)(*(int *)(DAT_08020dc4 + 0xc) + 0x2c));
            FUN_0801f63c(7);
            cVar11 = '\f';
          }
          else {
            pcVar16 = (char *)(param_1 + 0x17c);
            if (*pcVar16 == '\f') {
              FUN_0801f63c(6);
              cVar11 = '\r';
            }
            else if ((*pcVar16 == '\r') && ((*(ushort *)(DAT_08020e28 + 8) & 0x10) != 0)) {
              *DAT_08020e2c = *DAT_08020e2c | 0x80;
              pbVar9[1] = pbVar9[1] | 2;
              FUN_080275f0(iVar8 + 0x10,*(undefined4 *)(*(int *)(DAT_08020e30 + 0xc) + 0x34));
              uVar2 = (ushort)DAT_08020e34;
              *(byte *)(iVar8 + 0x12) = *(byte *)(iVar8 + 0x12) & 0xfd;
              *(ushort *)(iVar8 + 8) = uVar2 & *(ushort *)(iVar8 + 8) | 4;
              cVar11 = '\x0e';
            }
            else {
              pcVar16 = (char *)(param_1 + 0x17c);
              if (*pcVar16 == '\x14') {
                iVar13 = *(int *)(param_1 + 0x180);
                if (iVar13 != 0) {
                  *(int *)(param_1 + 0x180) = iVar13 + -1;
                  goto LAB_08020ea6;
                }
                puVar15 = (uint *)(DAT_08020e80 + 0x168);
                uVar12 = *puVar15;
                if (uVar12 != 0xffffffff) {
                  FUN_08002a98(uVar12 & 0xffff);
                  *puVar15 = 0xffffffff;
                }
                *(undefined4 *)(iVar10 + 0x154) = 2;
                cVar11 = '\x15';
              }
              else {
                if ((*pcVar16 != '\x15') || (*(int *)(DAT_08020eb4 + 0x154) != 0))
                goto LAB_08020ea6;
                *(ushort *)(DAT_08020eb4 + 8) =
                     (*(ushort *)(DAT_08020eb4 + 8) | 4) & (ushort)DAT_08020eb8;
                cVar11 = '\x16';
              }
            }
          }
        }
      }
    }
  }
  *pcVar16 = cVar11;
LAB_08020ea6:
  return (ulonglong)in_lr << 0x20;
}


