// undefined FUN_080129a8(void)
// entry 0x80129a8


undefined4 FUN_080129a8(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  byte *pbVar5;
  char cVar6;
  undefined4 in_lr;
  
  iVar3 = DAT_080129f8;
  bVar1 = *(byte *)(DAT_080129f4 + 10);
  cVar6 = -(char)((int)-(bVar1 & 0x10) >> 0x1f);
  if ((bVar1 & 0x20) != 0) {
    cVar6 = cVar6 + '\x01';
  }
  if ((bVar1 & 0x40) != 0) {
    cVar6 = cVar6 + '\x01';
  }
  if ((bVar1 & 0x80) != 0) {
    cVar6 = cVar6 + '\x01';
  }
  if ((*(byte *)(DAT_080129f8 + DAT_080129fc) & 0xf) == 0) {
    cVar4 = '\x06';
  }
  else {
    cVar4 = '\x04';
  }
  *(char *)(DAT_080129f8 + DAT_08012a60) = cVar4 - cVar6;
  uVar2 = *(ushort *)(iVar3 + DAT_08012a64);
  if ((uVar2 >> 8 == 7) && ((uVar2 & 0xff) == 2)) {
    pbVar5 = (byte *)(iVar3 + DAT_08012a68);
    bVar1 = *pbVar5;
    if ((bVar1 & 1) == 0) {
      *pbVar5 = bVar1 | 1;
      FUN_0800249c(0x24,0);
      FUN_0800249c(0x25,0);
      FUN_0800249c(0x26,0);
    }
    FUN_080025d8(0x24);
    FUN_080025d8(0x25);
    FUN_080025d8(0x26);
  }
  else {
    bVar1 = *(byte *)(DAT_08012afc + DAT_08012b00);
    if ((bVar1 & 1) != 0) {
      *(byte *)(DAT_08012afc + DAT_08012b00) = bVar1 ^ 1;
      FUN_08002624(0x24);
      FUN_08002624(0x25);
      FUN_08002624(0x26);
    }
  }
  if ((*(byte *)(DAT_08012afc + DAT_08012b04) & 0xf) == 0) {
    if ((*(ushort *)(DAT_08012afc + DAT_08012b08) >> 8 == 7) &&
       ((*(ushort *)(DAT_08012afc + DAT_08012b08) & 0xff) == 3)) {
      bVar1 = *(byte *)(DAT_08012afc + DAT_08012b00);
      if ((bVar1 & 2) == 0) {
        *(byte *)(DAT_08012afc + DAT_08012b00) = bVar1 | 2;
        FUN_0800249c(0x27,0);
        FUN_0800249c(0x2e,0);
        FUN_0800249c(0xb5,0);
      }
      FUN_080025d8(0x27);
      FUN_080025d8(0x2e);
      FUN_080025d8(0xb5);
    }
    else {
      bVar1 = *(byte *)(DAT_08012b8c + DAT_08012b90);
      if ((bVar1 & 2) != 0) {
        *(byte *)(DAT_08012b8c + DAT_08012b90) = bVar1 ^ 2;
        FUN_08002624(0x27);
        FUN_08002624(0x2e);
        FUN_08002624(0xb5);
      }
    }
    if ((*(ushort *)(DAT_08012b8c + DAT_08012b94) >> 8 == 7) &&
       ((*(ushort *)(DAT_08012b8c + DAT_08012b94) & 0xff) == 4)) {
      bVar1 = *(byte *)(DAT_08012b8c + DAT_08012b90);
      if ((bVar1 & 4) == 0) {
        *(byte *)(DAT_08012b8c + DAT_08012b90) = bVar1 | 4;
        FUN_0800249c(0x28,0);
        FUN_0800249c(0x29,0);
        FUN_0800249c(0xb3,0);
      }
      FUN_080025d8(0x28);
      FUN_080025d8(0x29);
      FUN_080025d8(0xb3);
    }
    else {
      bVar1 = *(byte *)(DAT_08012b8c + DAT_08012bc4);
      if ((bVar1 & 4) != 0) {
        *(byte *)(DAT_08012b8c + DAT_08012bc4) = bVar1 ^ 4;
        FUN_08002624(0x28);
        FUN_08002624(0x29);
        FUN_08002624(0xb3);
      }
    }
  }
  else {
    if ((*(ushort *)(DAT_08012afc + DAT_08012c1c) >> 8 == 7) &&
       ((*(ushort *)(DAT_08012afc + DAT_08012c1c) & 0xff) == 3)) {
      bVar1 = *(byte *)(DAT_08012afc + DAT_08012c20);
      if ((bVar1 & 2) == 0) {
        *(byte *)(DAT_08012afc + DAT_08012c20) = bVar1 | 2;
        FUN_0800249c(0x27,0);
        FUN_0800249c(0x2e,0);
        FUN_0800249c(0xb2,0);
      }
      FUN_080025d8(0x27);
      FUN_080025d8(0x2e);
      FUN_080025d8(0xb2);
    }
    else {
      bVar1 = *(byte *)(DAT_08012ca4 + DAT_08012ca8);
      if ((bVar1 & 2) != 0) {
        *(byte *)(DAT_08012ca4 + DAT_08012ca8) = bVar1 ^ 2;
        FUN_08002624(0x27);
        FUN_08002624(0x2e);
        FUN_08002624(0xb2);
      }
    }
    if ((*(ushort *)(DAT_08012ca4 + DAT_08012cac) >> 8 == 7) &&
       ((*(ushort *)(DAT_08012ca4 + DAT_08012cac) & 0xff) == 4)) {
      bVar1 = *(byte *)(DAT_08012ca4 + DAT_08012ca8);
      if ((bVar1 & 4) == 0) {
        *(byte *)(DAT_08012ca4 + DAT_08012ca8) = bVar1 | 4;
        FUN_0800249c(0x28,0);
        FUN_0800249c(0x29,0);
        FUN_0800249c(0xb4,0);
      }
      FUN_080025d8(0x28);
      FUN_080025d8(0x29);
      FUN_080025d8(0xb4);
    }
    else {
      bVar1 = *(byte *)(DAT_08012ca4 + DAT_08012cdc);
      if ((bVar1 & 4) != 0) {
        *(byte *)(DAT_08012ca4 + DAT_08012cdc) = bVar1 ^ 4;
        FUN_08002624(0x28);
        FUN_08002624(0x29);
        FUN_08002624(0xb4);
      }
    }
  }
  return in_lr;
}


