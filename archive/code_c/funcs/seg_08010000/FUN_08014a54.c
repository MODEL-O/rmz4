// undefined FUN_08014a54(void)
// entry 0x8014a54


undefined4 FUN_08014a54(int *param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  char *pcVar13;
  short *psVar14;
  undefined4 in_lr;
  
  iVar10 = DAT_08014acc;
  if ((*(byte *)(DAT_08014acc + DAT_08014ad0) & 0xf) == 1) {
    if ((0x1c2000 < *param_1) && (*param_1 <= DAT_08014ad4)) {
      puVar9 = (ushort *)(DAT_08014acc + DAT_08014ad8);
      uVar7 = *puVar9;
      *puVar9 = uVar7 + 1;
      if (0xff < (ushort)(uVar7 + 1)) {
        *puVar9 = 0;
        piVar5 = DAT_08014adc;
        uVar8 = 0;
        iVar10 = *DAT_08014adc;
        piVar3 = DAT_08014adc;
        piVar4 = DAT_08014b8c;
        while (DAT_08014b8c = piVar4, iVar10 != 0) {
          iVar10 = *param_1;
          iVar12 = iVar10 - (piVar3[uVar8 * 2] + DAT_08014ae0);
          if (iVar12 < 0) {
            if ((piVar3[uVar8 * 2] + DAT_08014ae0) - iVar10 <= DAT_08014b0c) goto LAB_08014af0;
LAB_08014b34:
            if (iVar10 + 0xf000 < piVar3[uVar8 * 2]) break;
          }
          else {
            if (DAT_08014ae4 < iVar12) goto LAB_08014b34;
LAB_08014af0:
            iVar12 = param_1[1] - (piVar3[uVar8 * 2 + 1] + DAT_08014b10);
            if (iVar12 < 0) {
              if (DAT_08014b30 < (piVar3[uVar8 * 2 + 1] + DAT_08014b10) - param_1[1])
              goto LAB_08014b34;
            }
            else if (DAT_08014b14 < iVar12) goto LAB_08014b34;
            FUN_080d07a4(piVar5 + uVar8 * 2,1,0);
          }
          uVar8 = uVar8 + 1 & 0xff;
          piVar3 = DAT_08014b88;
          piVar4 = DAT_08014b8c;
          iVar10 = piVar5[uVar8 * 2];
        }
        uVar8 = 0;
        iVar10 = *piVar4;
        piVar3 = piVar4;
        while (iVar10 != 0) {
          iVar10 = *param_1;
          iVar12 = iVar10 - (piVar3[uVar8 * 2] + DAT_08014b90);
          if (iVar12 < 0) {
            if ((piVar3[uVar8 * 2] + DAT_08014b90) - iVar10 <= DAT_08014bbc) goto LAB_08014ba0;
LAB_08014be4:
            if (iVar10 + 0xf000 < piVar3[uVar8 * 2]) break;
          }
          else {
            if (DAT_08014b94 < iVar12) goto LAB_08014be4;
LAB_08014ba0:
            iVar12 = param_1[1] - (piVar3[uVar8 * 2 + 1] + DAT_08014bc0);
            if (iVar12 < 0) {
              if (DAT_08014be0 < (piVar3[uVar8 * 2 + 1] + DAT_08014bc0) - param_1[1])
              goto LAB_08014be4;
            }
            else if (DAT_08014bc4 < iVar12) goto LAB_08014be4;
            FUN_080d07a4(piVar4 + uVar8 * 2,0,0);
          }
          uVar8 = uVar8 + 1 & 0xff;
          piVar3 = DAT_08014c74;
          iVar10 = piVar4[uVar8 * 2];
        }
      }
    }
    iVar10 = DAT_08014c78;
    if ((*(byte *)(DAT_08014c78 + DAT_08014c7c) & 0xf) == 1) {
      if (((DAT_08014c80 < *param_1) && (*param_1 <= DAT_08014c84)) &&
         (*(char *)(DAT_08014c78 + DAT_08014c88) == '`')) {
        FUN_08002b10(0x180);
      }
      uVar6 = DAT_08014c98;
      iVar10 = DAT_08014c78;
      if ((*(byte *)(DAT_08014c78 + DAT_08014c7c) & 0xf) == 1) {
        if (DAT_08014c90 < (uint)(*param_1 + DAT_08014c8c)) {
          if (*(short *)(DAT_08014c78 + DAT_08014cfc) != 0) {
            *(short *)(DAT_08014c78 + DAT_08014cfc) = 0;
            FUN_08002b5c(DAT_08014d00);
          }
        }
        else {
          psVar14 = (short *)(DAT_08014c78 + DAT_08014c94);
          if (*psVar14 == 0) {
            FUN_08002b10(DAT_08014c98);
            *psVar14 = (short)uVar6;
          }
        }
        iVar10 = DAT_08014d04;
        if ((*(byte *)(DAT_08014d04 + DAT_08014d08) & 0xf) == 1) {
          if ((*(ushort *)(DAT_08014d04 + DAT_08014d0c) >> 8 == 9) &&
             ((*(ushort *)(DAT_08014d04 + DAT_08014d0c) & 0xff) == 2)) {
            bVar1 = *(byte *)(DAT_08014d04 + DAT_08014d10);
            if ((bVar1 & 1) == 0) {
              *(byte *)(DAT_08014d04 + DAT_08014d10) = bVar1 | 1;
              FUN_0800249c(0x4b,0);
            }
            FUN_080025d8(0x4b);
          }
          else {
            bVar1 = *(byte *)(DAT_08014d6c + DAT_08014d70);
            if ((bVar1 & 1) != 0) {
              *(byte *)(DAT_08014d6c + DAT_08014d70) = bVar1 ^ 1;
              FUN_08002624(0x4b);
            }
          }
          if ((*(ushort *)(DAT_08014d6c + DAT_08014d74) >> 8 == 9) &&
             ((*(ushort *)(DAT_08014d6c + DAT_08014d74) & 0xff) == 1)) {
            bVar1 = *(byte *)(DAT_08014d6c + DAT_08014d70);
            if ((bVar1 & 2) == 0) {
              *(byte *)(DAT_08014d6c + DAT_08014d70) = bVar1 | 2;
              FUN_0800249c(0x4c,0);
            }
            FUN_080025d8(0x4c);
          }
          else {
            bVar1 = *(byte *)(DAT_08014dd0 + DAT_08014dd4);
            if ((bVar1 & 2) != 0) {
              *(byte *)(DAT_08014dd0 + DAT_08014dd4) = bVar1 ^ 2;
              FUN_08002624(0x4c);
            }
          }
          if ((*(ushort *)(DAT_08014dd0 + DAT_08014dd8) >> 8 == 9) &&
             ((*(ushort *)(DAT_08014dd0 + DAT_08014dd8) & 0xff) == 0)) {
            bVar1 = *(byte *)(DAT_08014dd0 + DAT_08014dd4);
            if ((bVar1 & 0x20) == 0) {
              *(byte *)(DAT_08014dd0 + DAT_08014dd4) = bVar1 | 0x20;
              FUN_0800249c(0x4d,0);
            }
            FUN_080025d8(0x4d);
          }
          else {
            bVar1 = *(byte *)(DAT_08014dfc + DAT_08014e00);
            if ((bVar1 & 0x20) != 0) {
              *(byte *)(DAT_08014dfc + DAT_08014e00) = bVar1 ^ 0x20;
              FUN_08002624(0x4d);
            }
          }
          goto LAB_08014e60;
        }
      }
    }
  }
  if ((*(ushort *)(iVar10 + DAT_08014e3c) >> 8 == 9) &&
     ((*(ushort *)(iVar10 + DAT_08014e3c) & 0xff) == 0)) {
    bVar1 = *(byte *)(iVar10 + DAT_08014e40);
    if ((bVar1 & 0x20) == 0) {
      *(byte *)(iVar10 + DAT_08014e40) = bVar1 | 0x20;
      FUN_0800249c(0xb6,0);
    }
    FUN_080025d8(0xb6);
  }
  else {
    bVar1 = *(byte *)(DAT_08014e9c + DAT_08014ea0);
    if ((bVar1 & 0x20) != 0) {
      *(byte *)(DAT_08014e9c + DAT_08014ea0) = bVar1 ^ 0x20;
      FUN_08002624(0xb6);
    }
  }
LAB_08014e60:
  if ((*(ushort *)(DAT_08014e9c + DAT_08014ea4) >> 8 == 9) &&
     ((*(ushort *)(DAT_08014e9c + DAT_08014ea4) & 0xff) == 0)) {
    bVar1 = *(byte *)(DAT_08014e9c + DAT_08014ea0);
    if ((bVar1 & 4) == 0) {
      *(byte *)(DAT_08014e9c + DAT_08014ea0) = bVar1 | 4;
      FUN_0800249c(0x4e,0);
    }
    FUN_080025d8(0x4e);
  }
  else {
    bVar1 = *(byte *)(DAT_08014f04 + DAT_08014f08);
    if ((bVar1 & 4) != 0) {
      *(byte *)(DAT_08014f04 + DAT_08014f08) = bVar1 ^ 4;
      FUN_08002624(0x4e);
    }
  }
  if ((*(ushort *)(DAT_08014f04 + DAT_08014f0c) >> 8 == 9) &&
     ((uVar7 = *(ushort *)(DAT_08014f04 + DAT_08014f0c) & 0xff, uVar7 == 3 || (uVar7 == 4)))) {
    bVar1 = *(byte *)(DAT_08014f04 + DAT_08014f08);
    if ((bVar1 & 8) == 0) {
      *(byte *)(DAT_08014f04 + DAT_08014f08) = bVar1 | 8;
      FUN_0800249c(0x4f,0);
    }
    FUN_080025d8(0x4f);
  }
  else {
    bVar1 = *(byte *)(DAT_08014f68 + DAT_08014f6c);
    if ((bVar1 & 8) != 0) {
      *(byte *)(DAT_08014f68 + DAT_08014f6c) = bVar1 ^ 8;
      FUN_08002624(0x4f);
    }
  }
  if ((*(ushort *)(DAT_08014f68 + DAT_08014f70) >> 8 == 9) &&
     ((*(ushort *)(DAT_08014f68 + DAT_08014f70) & 0xff) == 3)) {
    bVar1 = *(byte *)(DAT_08014f68 + DAT_08014f6c);
    if ((bVar1 & 0x10) == 0) {
      *(byte *)(DAT_08014f68 + DAT_08014f6c) = bVar1 | 0x10;
      FUN_0800249c(0x50,0);
    }
    FUN_080025d8(0x50);
  }
  else {
    bVar1 = *(byte *)(DAT_08014fd4 + DAT_08014fd8);
    if ((bVar1 & 0x10) != 0) {
      *(byte *)(DAT_08014fd4 + DAT_08014fd8) = bVar1 ^ 0x10;
      FUN_08002624(0x50);
    }
  }
  iVar10 = DAT_08014fd4;
  if ((*(byte *)(DAT_08014fd4 + DAT_08014fdc) & 0xf) == 1) {
    uVar7 = *(ushort *)(DAT_08014fd4 + DAT_08014fe0);
    if ((uVar7 >> 8 == 9) && ((uVar7 & 0xff) == 0)) {
      pcVar13 = (char *)(DAT_08014fd4 + DAT_08014fe4);
      cVar2 = *pcVar13;
      if (cVar2 == '\0') {
        uVar7 = *(ushort *)(DAT_08014fd4 + DAT_080150b4) + 1;
        *(ushort *)(DAT_08014fd4 + DAT_080150b4) = uVar7;
        if (((uVar7 & 0xf) == 0) &&
           (uVar8 = *(uint *)(DAT_080150b8 + DAT_080150bc) * DAT_080150c0 + DAT_080150c4,
           *(uint *)(DAT_080150b8 + DAT_080150bc) = uVar8, (uVar8 >> 0x10 & 7) == 0)) {
          *pcVar13 = '\x01';
        }
      }
      else {
        *pcVar13 = cVar2 + '\x01';
        if (7 < (byte)(cVar2 + 1U)) {
          *pcVar13 = (char)uVar7;
        }
      }
    }
    if (*(ushort *)(iVar10 + DAT_080150c8) >> 8 == 9) {
      if ((*(ushort *)(iVar10 + DAT_080150c8) & 0xff) == 2) {
        pbVar11 = (byte *)(iVar10 + DAT_080150cc);
        bVar1 = *pbVar11;
        *pbVar11 = bVar1 + 1;
        if (0xfc < (byte)(bVar1 + 1)) {
          *pbVar11 = 0;
        }
      }
      if (*(ushort *)(iVar10 + DAT_080150c8) >> 8 == 9) {
        if ((*(ushort *)(iVar10 + DAT_080150c8) & 0xff) == 1) {
          pbVar11 = (byte *)(iVar10 + DAT_080150d0);
          bVar1 = *pbVar11;
          *pbVar11 = bVar1 + 1;
          if (0xfc < (byte)(bVar1 + 1)) {
            *pbVar11 = 0;
          }
        }
        if ((*(ushort *)(iVar10 + DAT_080150c8) >> 8 == 9) &&
           ((*(ushort *)(iVar10 + DAT_080150c8) & 0xff) == 4)) {
          pcVar13 = (char *)(iVar10 + DAT_080150d4);
          cVar2 = *pcVar13;
          *pcVar13 = cVar2 + '\x01';
          if ((char)(cVar2 + '\x01') == '~') {
            *pcVar13 = '\0';
          }
          pcVar13 = (char *)(iVar10 + DAT_080150d8);
          cVar2 = *pcVar13;
          *pcVar13 = cVar2 + '\x01';
          if ((char)(cVar2 + '\x01') == '\t') {
            *pcVar13 = '\0';
          }
        }
      }
    }
  }
  return in_lr;
}


