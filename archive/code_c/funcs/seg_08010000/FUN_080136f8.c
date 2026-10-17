// undefined FUN_080136f8(void)
// entry 0x80136f8


undefined4 FUN_080136f8(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar11 = *(int *)(*(int *)(DAT_08013744 + DAT_08013748) + 0x54);
  iVar9 = *(int *)(*(int *)(DAT_08013744 + DAT_08013748) + 0x58);
  piVar7 = (int *)(DAT_0801374c + DAT_08013750);
  if (*piVar7 == 0) {
    if ((((uint)(iVar11 + DAT_08013754) <= DAT_08013758) && (0x1e000 < iVar9)) &&
       (iVar9 <= DAT_0801375c)) {
      *(short *)(DAT_08013760 + 0xe4) = (short)DAT_08013764;
      *(undefined2 *)(DAT_08013768 + 0xe4) = 5;
      iVar4 = FUN_080f7f1c(2,0);
LAB_080137a4:
      *piVar7 = iVar4;
    }
  }
  else if (((0x18000 < (uint)(iVar11 + DAT_080137d4)) || (iVar9 <= DAT_080137d8)) ||
          (0x50000 < iVar9)) {
    iVar4 = FUN_08002bb4(0x75);
    if (iVar4 != 0) {
      FUN_08002b5c(0x75);
    }
    piVar7 = (int *)(DAT_080137dc + DAT_080137e0);
    FUN_080e954c(*piVar7);
    iVar4 = 0;
    goto LAB_080137a4;
  }
  piVar7 = (int *)(DAT_080137dc + DAT_080137e4);
  if (*piVar7 == 0) {
    if ((((uint)(iVar11 + DAT_080137e8) <= DAT_080137ec) && (0x3c000 < iVar9)) &&
       (iVar9 <= DAT_080137f0)) {
      iVar9 = FUN_080f7f1c(2,1);
LAB_0801382c:
      *piVar7 = iVar9;
    }
  }
  else if (((0xf000 < (uint)(iVar11 + DAT_08013aa0)) || (iVar9 <= DAT_08013aa4)) ||
          (0x78000 < iVar9)) {
    iVar9 = FUN_08002bb4(0x75);
    if (iVar9 != 0) {
      FUN_08002b5c(0x75);
    }
    piVar7 = (int *)(DAT_08013aa8 + DAT_08013aac);
    FUN_080e954c(*piVar7);
    iVar9 = 0;
    goto LAB_0801382c;
  }
  iVar9 = DAT_08013aa8;
  piVar7 = (int *)(DAT_08013aa8 + DAT_08013ab0);
  if (*piVar7 == 0) {
    iVar11 = FUN_080fdfd4();
    *piVar7 = iVar11;
  }
  uVar3 = *(ushort *)(iVar9 + DAT_08013ab4);
  if ((uVar3 >> 8 == 8) && ((uVar3 & 0xff) == 2)) {
    pcVar6 = (char *)(iVar9 + DAT_08013ab8);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') == '\b') {
      *pcVar6 = '\0';
    }
  }
  iVar9 = DAT_08013aa8;
  if ((*(byte *)(DAT_08013aa8 + DAT_08013abc) & 0xf) == 3) {
    if ((*(ushort *)(DAT_08013aa8 + DAT_08013ab4) >> 8 == 8) &&
       ((*(ushort *)(DAT_08013aa8 + DAT_08013ab4) & 0xff) == 6)) {
      pbVar10 = (byte *)(DAT_08013aa8 + DAT_08013ac0);
      bVar2 = *pbVar10;
      *pbVar10 = bVar2 + 1;
      pbVar8 = (byte *)(iVar9 + DAT_08013ac8);
      if (*(byte *)((uint)*pbVar8 + DAT_08013ac4) < (byte)(bVar2 + 1)) {
        uVar5 = *pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        if (9 < (uVar5 & 0xff)) {
          *pbVar8 = 0;
        }
        *pbVar10 = 0;
      }
      pbVar10 = (byte *)(iVar9 + DAT_08013acc);
      bVar2 = *pbVar10;
      *pbVar10 = bVar2 + 1;
      pbVar8 = (byte *)(iVar9 + DAT_08013ad4);
      if (*(byte *)((uint)*pbVar8 + DAT_08013ad0) < (byte)(bVar2 + 1)) {
        uVar5 = *pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        if (9 < (uVar5 & 0xff)) {
          *pbVar8 = 0;
        }
        *pbVar10 = 0;
      }
    }
    iVar11 = DAT_08013adc;
    if ((*(ushort *)(iVar9 + DAT_08013ad8) >> 8 == 8) &&
       ((*(ushort *)(iVar9 + DAT_08013ad8) & 0xff) == 7)) {
      pbVar10 = (byte *)(iVar9 + DAT_08013adc);
      bVar2 = *pbVar10;
      *pbVar10 = bVar2 + 1;
      pbVar8 = (byte *)(iVar9 + iVar11 + -8);
      if (*(byte *)((uint)*pbVar8 + DAT_08013ae0) < (byte)(bVar2 + 1)) {
        uVar5 = *pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        if (9 < (uVar5 & 0xff)) {
          *pbVar8 = 0;
        }
        *pbVar10 = 0;
      }
      pbVar10 = (byte *)(iVar9 + DAT_08013ae4);
      bVar2 = *pbVar10;
      *pbVar10 = bVar2 + 1;
      pbVar8 = (byte *)(iVar9 + DAT_08013aec);
      if (*(byte *)((uint)*pbVar8 + DAT_08013ae8) < (byte)(bVar2 + 1)) {
        uVar5 = *pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        if (9 < (uVar5 & 0xff)) {
          *pbVar8 = 0;
        }
        *pbVar10 = 0;
      }
      pbVar10 = (byte *)(iVar9 + DAT_08013af0);
      bVar2 = *pbVar10;
      *pbVar10 = bVar2 + 1;
      pbVar8 = (byte *)(iVar9 + DAT_08013af8);
      if (*(byte *)((uint)*pbVar8 + DAT_08013af4) < (byte)(bVar2 + 1)) {
        uVar5 = *pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        if (9 < (uVar5 & 0xff)) {
          *pbVar8 = 0;
        }
        *pbVar10 = 0;
      }
    }
    iVar11 = DAT_08013afc;
    if ((*(ushort *)(iVar9 + DAT_08013ab4) >> 8 == 8) &&
       ((*(ushort *)(iVar9 + DAT_08013ab4) & 0xff) == 8)) {
      pbVar10 = (byte *)(iVar9 + DAT_08013afc);
      bVar2 = *pbVar10;
      *pbVar10 = bVar2 + 1;
      pbVar8 = (byte *)(iVar9 + iVar11 + -8);
      if (*(byte *)((uint)*pbVar8 + DAT_08013b00) < (byte)(bVar2 + 1)) {
        uVar5 = *pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        if (9 < (uVar5 & 0xff)) {
          *pbVar8 = 0;
        }
        *pbVar10 = 0;
      }
    }
    iVar11 = DAT_08013b04;
    if ((*(ushort *)(iVar9 + DAT_08013ad8) >> 8 == 8) &&
       ((*(ushort *)(iVar9 + DAT_08013ad8) & 0xff) == 0xb)) {
      pbVar10 = (byte *)(iVar9 + DAT_08013b04);
      bVar2 = *pbVar10;
      *pbVar10 = bVar2 + 1;
      pbVar8 = (byte *)(iVar9 + iVar11 + -8);
      if (*(byte *)((uint)*pbVar8 + DAT_08013b08) < (byte)(bVar2 + 1)) {
        uVar5 = *pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        if (9 < (uVar5 & 0xff)) {
          *pbVar8 = 0;
        }
        *pbVar10 = 0;
      }
      pbVar10 = (byte *)(iVar9 + DAT_08013b0c);
      bVar2 = *pbVar10;
      *pbVar10 = bVar2 + 1;
      pbVar8 = (byte *)(iVar9 + DAT_08013b14);
      if (*(byte *)((uint)*pbVar8 + DAT_08013b10) < (byte)(bVar2 + 1)) {
        uVar5 = *pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        if (9 < (uVar5 & 0xff)) {
          *pbVar8 = 0;
        }
        *pbVar10 = 0;
      }
    }
    if ((((*(byte *)(iVar9 + DAT_08013abc) & 0xf) == 3) &&
        (*(ushort *)(iVar9 + DAT_08013ab4) >> 8 == 8)) &&
       ((*(ushort *)(iVar9 + DAT_08013ab4) & 0xff) == 0)) {
      bVar2 = *(byte *)(iVar9 + DAT_08013b18);
      if ((bVar2 & 1) == 0) {
        *(byte *)(iVar9 + DAT_08013b18) = bVar2 | 1;
        FUN_0800249c(0x54,0);
        FUN_0800249c(0x55,0);
      }
      FUN_080025d8(0x54);
      FUN_080025d8(0x55);
      goto LAB_08013b3e;
    }
  }
  bVar2 = *(byte *)(DAT_08013b74 + DAT_08013b78);
  if ((bVar2 & 1) != 0) {
    *(byte *)(DAT_08013b74 + DAT_08013b78) = bVar2 ^ 1;
    FUN_08002624(0x54);
    FUN_08002624(0x55);
  }
LAB_08013b3e:
  pcVar6 = (char *)(DAT_08013b7c + DAT_08013b80);
  cVar1 = *pcVar6;
  if ((cVar1 == '\0') || (cVar1 == '\x04')) {
    bVar2 = *(byte *)(DAT_08013b74 + DAT_08013b78);
    if ((bVar2 & 2) == 0) {
      *(byte *)(DAT_08013b74 + DAT_08013b78) = bVar2 | 2;
      if (cVar1 == '\0') {
        FUN_0800249c(0x87,0x2a0);
      }
      else {
        FUN_0800249c(0x87,0x2c0);
      }
    }
    FUN_080025d8(0x87);
  }
  else {
    bVar2 = *(byte *)(DAT_08013bbc + DAT_08013bc0);
    if ((bVar2 & 2) != 0) {
      *(byte *)(DAT_08013bbc + DAT_08013bc0) = bVar2 ^ 2;
      FUN_08002624(0x87);
      *pcVar6 = -1;
    }
  }
  return in_lr;
}


