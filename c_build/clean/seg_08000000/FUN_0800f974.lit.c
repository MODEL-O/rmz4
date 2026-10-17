// undefined FUN_0800f974(void)
// entry 0x800f974


void FUN_0800f974(void)

{
  byte bVar1;
  int iVar2;
  iVar2 = 0x02000ab0;
  *(int *)(0x02000ab0 + 0x0002d030) = *(int *)(0x02000ab0 + 0x0002d030) + 1;
  if ((*(byte *)(iVar2 + 0x0002c010) & 0xf) == 3) {
    if ((*(ushort *)(iVar2 + 0x000007d4) >> 8 == 5) &&
       ((*(ushort *)(iVar2 + 0x000007d4) & 0xff) == 0)) {
      bVar1 = *(byte *)(iVar2 + 0x0002d028);
      if ((bVar1 & 1) == 0) {
        *(byte *)(iVar2 + 0x0002d028) = bVar1 | 1;
        FUN_0800249c(0x34,0);
        FUN_0800249c(0x35,0);
        FUN_0800249c(0xae,0);
      }
      FUN_080025d8(0x34);
      FUN_080025d8(0x35);
      FUN_080025d8(0xae);
    }
    else {
      bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
      if ((bVar1 & 1) != 0) {
        *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 1;
        FUN_08002624(0x34);
        FUN_08002624(0x35);
        FUN_08002624(0xae);
      }
    }
  }
  else if ((*(ushort *)(iVar2 + 0x000007d4) >> 8 == 5) &&
          ((*(ushort *)(iVar2 + 0x000007d4) & 0xff) == 0)) {
    bVar1 = *(byte *)(iVar2 + 0x0002d028);
    if ((bVar1 & 1) == 0) {
      *(byte *)(iVar2 + 0x0002d028) = bVar1 | 1;
      FUN_0800249c(0x34,0);
      FUN_0800249c(0x35,0);
      FUN_0800249c(0xad,0);
    }
    FUN_080025d8(0x34);
    FUN_080025d8(0x35);
    FUN_080025d8(0xad);
  }
  else {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 1) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 1;
      FUN_08002624(0x34);
      FUN_08002624(0x35);
      FUN_08002624(0xad);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 5) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 1)) {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 2) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 | 2;
      FUN_0800249c(0x37,0);
      FUN_0800249c(0x38,0);
    }
    FUN_080025d8(0x37);
    FUN_080025d8(0x38);
  }
  else {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 2) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 2;
      FUN_08002624(0x37);
      FUN_08002624(0x38);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 5) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 2)) {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 4) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 | 4;
      FUN_0800249c(0x39,0);
      FUN_0800249c(0x56,0);
    }
    FUN_080025d8(0x39);
    FUN_080025d8(0x56);
  }
  else {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 4) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 4;
      FUN_08002624(0x39);
      FUN_08002624(0x56);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 5) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 3)) {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 8) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 | 8;
      FUN_0800249c(0x57,0);
    }
    FUN_080025d8(0x57);
  }
  else {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 8) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 8;
      FUN_08002624(0x57);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 5) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 4)) {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 0x10) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 | 0x10;
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
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 0x10) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 0x10;
      FUN_08002624(0x58);
      FUN_08002624(0x59);
      FUN_08002624(0x5a);
      FUN_08002624(0x5b);
      FUN_08002624(0x5d);
    }
  }
  return;
}


