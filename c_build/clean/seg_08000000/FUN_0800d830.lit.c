// undefined FUN_0800d830(void)
// entry 0x800d830


void FUN_0800d830(void)

{
  byte bVar1;
  if ((*(byte *)(0x02000ab0 + 0x0002c010) & 0xf) == 0) {
    if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 3) &&
       ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 0)) {
      bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
      if ((bVar1 & 0x10) == 0) {
        *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 | 0x10;
        FUN_0800249c(0xab,0);
      }
      FUN_080025d8(0xab);
    }
    else {
      bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
      if ((bVar1 & 0x10) != 0) {
        *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 0x10;
        FUN_08002624(0xab);
      }
    }
    if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 3) &&
       ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 1)) {
      bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
      if ((bVar1 & 1) == 0) {
        *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 | 1;
        FUN_0800249c(0x1c,0);
        FUN_0800249c(0xaa,0);
      }
      FUN_080025d8(0x1c);
      FUN_080025d8(0xaa);
    }
    else {
      bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
      if ((bVar1 & 1) != 0) {
        *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 1;
        FUN_08002624(0x1c);
        FUN_08002624(0xaa);
      }
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 3) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 3)) {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 2) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 | 2;
      FUN_0800249c(0x1d,0);
      FUN_0800249c(0x1e,0);
    }
    FUN_080025d8(0x1d);
    FUN_080025d8(0x1e);
  }
  else {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 2) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 2;
      FUN_08002624(0x1d);
      FUN_08002624(0x1e);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 3) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 4)) {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 4) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 | 4;
      FUN_0800249c(0x1f,0);
      FUN_0800249c(0x20,0);
      FUN_0800249c(0x21,0);
    }
    FUN_080025d8(0x1f);
    FUN_080025d8(0x20);
    FUN_080025d8(0x21);
  }
  else {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 4) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 4;
      FUN_08002624(0x1f);
      FUN_08002624(0x20);
      FUN_08002624(0x21);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 3) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 5)) {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 8) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 | 8;
      FUN_0800249c(0x22,0);
      FUN_0800249c(0x23,0);
    }
    FUN_080025d8(0x22);
    FUN_080025d8(0x23);
  }
  else {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 8) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 8;
      FUN_08002624(0x22);
      FUN_08002624(0x23);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 3) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 3)) {
    *(byte *)(0x02000ab0 + 0x0002d029) = *(byte *)(0x02000ab0 + 0x0002d029) + 1 & 7;
  }
  return;
}


