// undefined FUN_0800c774(void)
// entry 0x800c774


undefined4 FUN_0800c774(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  iVar4 = DAT_0800c7ec;
  if ((*(ushort *)(DAT_0800c7ec + DAT_0800c7f0) >> 8 == 2) &&
     ((*(ushort *)(DAT_0800c7ec + DAT_0800c7f0) & 0xff) == 3)) {
    pcVar5 = (char *)(DAT_0800c7ec + DAT_0800c7f4);
    cVar1 = *pcVar5;
    *pcVar5 = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') == '\f') {
      *pcVar5 = '\0';
    }
  }
  uVar3 = *(ushort *)(iVar4 + DAT_0800c7f0);
  if ((uVar3 >> 8 == 2) && ((uVar3 & 0xff) == 3)) {
    pbVar6 = (byte *)(iVar4 + DAT_0800c7f8);
    bVar2 = *pbVar6;
    if ((bVar2 & 1) == 0) {
      *pbVar6 = bVar2 | 1;
      FUN_0800249c(2,0x60);
      FUN_0800249c(3,0x60);
    }
    FUN_080025d8(2);
    FUN_080025d8(3);
  }
  else {
    bVar2 = *(byte *)(DAT_0800c858 + DAT_0800c85c);
    if ((bVar2 & 1) != 0) {
      *(byte *)(DAT_0800c858 + DAT_0800c85c) = bVar2 ^ 1;
      FUN_08002624(2);
      FUN_08002624(3);
    }
  }
  if ((*(ushort *)(DAT_0800c858 + DAT_0800c860) >> 8 == 2) &&
     ((*(ushort *)(DAT_0800c858 + DAT_0800c860) & 0xff) == 5)) {
    bVar2 = *(byte *)(DAT_0800c858 + DAT_0800c85c);
    if ((bVar2 & 2) == 0) {
      *(byte *)(DAT_0800c858 + DAT_0800c85c) = bVar2 | 2;
      FUN_0800249c(4,0x60);
    }
    FUN_080025d8(4);
  }
  else {
    bVar2 = *(byte *)(DAT_0800c8bc + DAT_0800c8c0);
    if ((bVar2 & 2) != 0) {
      *(byte *)(DAT_0800c8bc + DAT_0800c8c0) = bVar2 ^ 2;
      FUN_08002624(4);
    }
  }
  if ((*(ushort *)(DAT_0800c8bc + DAT_0800c8c4) >> 8 == 2) &&
     ((*(ushort *)(DAT_0800c8bc + DAT_0800c8c4) & 0xff) == 2)) {
    bVar2 = *(byte *)(DAT_0800c8bc + DAT_0800c8c0);
    if ((bVar2 & 4) == 0) {
      *(byte *)(DAT_0800c8bc + DAT_0800c8c0) = bVar2 | 4;
      FUN_0800249c(0xb,0);
    }
    FUN_080025d8(0xb);
  }
  else {
    bVar2 = *(byte *)(DAT_0800c930 + DAT_0800c934);
    if ((bVar2 & 4) != 0) {
      *(byte *)(DAT_0800c930 + DAT_0800c934) = bVar2 ^ 4;
      FUN_08002624(0xb);
    }
  }
  if ((*(ushort *)(DAT_0800c930 + DAT_0800c938) >> 8 == 2) &&
     ((*(ushort *)(DAT_0800c930 + DAT_0800c938) & 0xff) == 1)) {
    bVar2 = *(byte *)(DAT_0800c930 + DAT_0800c934);
    if ((bVar2 & 8) == 0) {
      *(byte *)(DAT_0800c930 + DAT_0800c934) = bVar2 | 8;
      FUN_0800249c(0xe,0x160);
      FUN_0800249c(0x19,0x1a0);
    }
    FUN_080025d8(0xe);
    FUN_080025d8(0x19);
  }
  else {
    bVar2 = *(byte *)(DAT_0800c9b8 + DAT_0800c9bc);
    if ((bVar2 & 8) != 0) {
      *(byte *)(DAT_0800c9b8 + DAT_0800c9bc) = bVar2 ^ 8;
      FUN_08002624(0xe);
      FUN_08002624(0x19);
    }
  }
  if ((*(ushort *)(DAT_0800c9b8 + DAT_0800c9c0) >> 8 == 2) &&
     ((*(ushort *)(DAT_0800c9b8 + DAT_0800c9c0) & 0xff) == 3)) {
    bVar2 = *(byte *)(DAT_0800c9b8 + DAT_0800c9bc);
    if ((bVar2 & 0x10) == 0) {
      *(byte *)(DAT_0800c9b8 + DAT_0800c9bc) = bVar2 | 0x10;
      FUN_0800249c(0xf,0xa0);
      FUN_0800249c(0x10,0x180);
      FUN_0800249c(0x11,0x180);
    }
    FUN_080025d8(0xf);
    FUN_080025d8(0x10);
    FUN_080025d8(0x11);
  }
  else {
    bVar2 = *(byte *)(DAT_0800ca28 + DAT_0800ca2c);
    if ((bVar2 & 0x10) != 0) {
      *(byte *)(DAT_0800ca28 + DAT_0800ca2c) = bVar2 ^ 0x10;
      FUN_08002624(0xf);
      FUN_08002624(0x10);
      FUN_08002624(0x11);
    }
  }
  if ((*(ushort *)(DAT_0800ca28 + DAT_0800ca30) >> 8 == 2) &&
     ((*(ushort *)(DAT_0800ca28 + DAT_0800ca30) & 0xff) == 5)) {
    bVar2 = *(byte *)(DAT_0800ca28 + DAT_0800ca2c);
    if ((bVar2 & 0x20) == 0) {
      *(byte *)(DAT_0800ca28 + DAT_0800ca2c) = bVar2 | 0x20;
      FUN_0800249c(0x18,0xa0);
    }
    FUN_080025d8(0x18);
  }
  else {
    bVar2 = *(byte *)(DAT_0800ca98 + DAT_0800ca9c);
    if ((bVar2 & 0x20) != 0) {
      *(byte *)(DAT_0800ca98 + DAT_0800ca9c) = bVar2 ^ 0x20;
      FUN_08002624(0x18);
    }
  }
  if ((*(ushort *)(DAT_0800ca98 + DAT_0800caa0) >> 8 == 2) &&
     ((*(ushort *)(DAT_0800ca98 + DAT_0800caa0) & 0xff) == 8)) {
    bVar2 = *(byte *)(DAT_0800ca98 + DAT_0800ca9c);
    if ((bVar2 & 0x40) == 0) {
      *(byte *)(DAT_0800ca98 + DAT_0800ca9c) = bVar2 | 0x40;
      FUN_0800249c(0x1a,0);
      FUN_0800249c(0x1b,0);
    }
    FUN_080025d8(0x1a);
    FUN_080025d8(0x1b);
  }
  else {
    bVar2 = *(byte *)(DAT_0800cb10 + DAT_0800cb14);
    if ((bVar2 & 0x40) != 0) {
      *(byte *)(DAT_0800cb10 + DAT_0800cb14) = bVar2 ^ 0x40;
      FUN_08002624(0x1a);
      FUN_08002624(0x1b);
    }
  }
  if ((*(ushort *)(DAT_0800cb10 + DAT_0800cb18) >> 8 == 2) &&
     ((*(ushort *)(DAT_0800cb10 + DAT_0800cb18) & 0xff) == 9)) {
    bVar2 = *(byte *)(DAT_0800cb10 + DAT_0800cb14);
    if ((bVar2 & 0x80) == 0) {
      *(byte *)(DAT_0800cb10 + DAT_0800cb14) = bVar2 | 0x80;
      FUN_0800249c(0xe0,0);
      FUN_0800249c(0xe1,0);
    }
    FUN_080025d8(0xe0);
    FUN_080025d8(0xe1);
  }
  else {
    bVar2 = *(byte *)(DAT_0800cb10 + DAT_0800cb44);
    if ((bVar2 & 0x80) != 0) {
      *(byte *)(DAT_0800cb10 + DAT_0800cb44) = bVar2 ^ 0x80;
      FUN_08002624(0xe0);
      FUN_08002624(0xe1);
    }
  }
  return in_lr;
}


