// undefined FUN_0800f974(void)
// entry 0x800f974


void FUN_0800f974(void)

{
  byte bVar1;
  int iVar2;
  iVar2 = DAT_0800f9e4;
  *(int *)(DAT_0800f9e4 + DAT_0800f9e8) = *(int *)(DAT_0800f9e4 + DAT_0800f9e8) + 1;
  if ((*(byte *)(iVar2 + DAT_0800f9ec) & 0xf) == 3) {
    if ((*(ushort *)(iVar2 + DAT_0800f9f0) >> 8 == 5) &&
       ((*(ushort *)(iVar2 + DAT_0800f9f0) & 0xff) == 0)) {
      bVar1 = *(byte *)(iVar2 + DAT_0800f9f4);
      if ((bVar1 & 1) == 0) {
        *(byte *)(iVar2 + DAT_0800f9f4) = bVar1 | 1;
        FUN_0800249c(0x34,0);
        FUN_0800249c(0x35,0);
        FUN_0800249c(0xae,0);
      }
      FUN_080025d8(0x34);
      FUN_080025d8(0x35);
      FUN_080025d8(0xae);
    }
    else {
      bVar1 = *(byte *)(DAT_0800fa24 + DAT_0800fa28);
      if ((bVar1 & 1) != 0) {
        *(byte *)(DAT_0800fa24 + DAT_0800fa28) = bVar1 ^ 1;
        FUN_08002624(0x34);
        FUN_08002624(0x35);
        FUN_08002624(0xae);
      }
    }
  }
  else if ((*(ushort *)(iVar2 + DAT_0800fa80) >> 8 == 5) &&
          ((*(ushort *)(iVar2 + DAT_0800fa80) & 0xff) == 0)) {
    bVar1 = *(byte *)(iVar2 + DAT_0800fa84);
    if ((bVar1 & 1) == 0) {
      *(byte *)(iVar2 + DAT_0800fa84) = bVar1 | 1;
      FUN_0800249c(0x34,0);
      FUN_0800249c(0x35,0);
      FUN_0800249c(0xad,0);
    }
    FUN_080025d8(0x34);
    FUN_080025d8(0x35);
    FUN_080025d8(0xad);
  }
  else {
    bVar1 = *(byte *)(DAT_0800faf8 + DAT_0800fafc);
    if ((bVar1 & 1) != 0) {
      *(byte *)(DAT_0800faf8 + DAT_0800fafc) = bVar1 ^ 1;
      FUN_08002624(0x34);
      FUN_08002624(0x35);
      FUN_08002624(0xad);
    }
  }
  if ((*(ushort *)(DAT_0800faf8 + DAT_0800fb00) >> 8 == 5) &&
     ((*(ushort *)(DAT_0800faf8 + DAT_0800fb00) & 0xff) == 1)) {
    bVar1 = *(byte *)(DAT_0800faf8 + DAT_0800fafc);
    if ((bVar1 & 2) == 0) {
      *(byte *)(DAT_0800faf8 + DAT_0800fafc) = bVar1 | 2;
      FUN_0800249c(0x37,0);
      FUN_0800249c(0x38,0);
    }
    FUN_080025d8(0x37);
    FUN_080025d8(0x38);
  }
  else {
    bVar1 = *(byte *)(DAT_0800fb70 + DAT_0800fb74);
    if ((bVar1 & 2) != 0) {
      *(byte *)(DAT_0800fb70 + DAT_0800fb74) = bVar1 ^ 2;
      FUN_08002624(0x37);
      FUN_08002624(0x38);
    }
  }
  if ((*(ushort *)(DAT_0800fb70 + DAT_0800fb78) >> 8 == 5) &&
     ((*(ushort *)(DAT_0800fb70 + DAT_0800fb78) & 0xff) == 2)) {
    bVar1 = *(byte *)(DAT_0800fb70 + DAT_0800fb74);
    if ((bVar1 & 4) == 0) {
      *(byte *)(DAT_0800fb70 + DAT_0800fb74) = bVar1 | 4;
      FUN_0800249c(0x39,0);
      FUN_0800249c(0x56,0);
    }
    FUN_080025d8(0x39);
    FUN_080025d8(0x56);
  }
  else {
    bVar1 = *(byte *)(DAT_0800fbd8 + DAT_0800fbdc);
    if ((bVar1 & 4) != 0) {
      *(byte *)(DAT_0800fbd8 + DAT_0800fbdc) = bVar1 ^ 4;
      FUN_08002624(0x39);
      FUN_08002624(0x56);
    }
  }
  if ((*(ushort *)(DAT_0800fbd8 + DAT_0800fbe0) >> 8 == 5) &&
     ((*(ushort *)(DAT_0800fbd8 + DAT_0800fbe0) & 0xff) == 3)) {
    bVar1 = *(byte *)(DAT_0800fbd8 + DAT_0800fbdc);
    if ((bVar1 & 8) == 0) {
      *(byte *)(DAT_0800fbd8 + DAT_0800fbdc) = bVar1 | 8;
      FUN_0800249c(0x57,0);
    }
    FUN_080025d8(0x57);
  }
  else {
    bVar1 = *(byte *)(DAT_0800fc74 + DAT_0800fc78);
    if ((bVar1 & 8) != 0) {
      *(byte *)(DAT_0800fc74 + DAT_0800fc78) = bVar1 ^ 8;
      FUN_08002624(0x57);
    }
  }
  if ((*(ushort *)(DAT_0800fc74 + DAT_0800fc7c) >> 8 == 5) &&
     ((*(ushort *)(DAT_0800fc74 + DAT_0800fc7c) & 0xff) == 4)) {
    bVar1 = *(byte *)(DAT_0800fc74 + DAT_0800fc78);
    if ((bVar1 & 0x10) == 0) {
      *(byte *)(DAT_0800fc74 + DAT_0800fc78) = bVar1 | 0x10;
      FUN_0800249c(0x58,0);
      FUN_0800249c(0x59,0);
      FUN_0800249c(0x5a,0);
      FUN_0800249c(0x5b,0);
      FUN_0800249c(0x5d,0);
    }
    FUN_080025d8(0x58);
    FUN_080025d8(0x59);
    FUN_080025d8(0x5a);
    FUN_080025d8(0x5b);
    FUN_080025d8(0x5d);
  }
  else {
    bVar1 = *(byte *)(DAT_0800fc74 + DAT_0800fcb8);
    if ((bVar1 & 0x10) != 0) {
      *(byte *)(DAT_0800fc74 + DAT_0800fcb8) = bVar1 ^ 0x10;
      FUN_08002624(0x58);
      FUN_08002624(0x59);
      FUN_08002624(0x5a);
      FUN_08002624(0x5b);
      FUN_08002624(0x5d);
    }
  }
  return;
}


