// undefined FUN_0800c774(void)
// entry 0x800c774


void FUN_0800c774(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  iVar4 = 0x02000ab0;
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 2) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 3)) {
    pcVar5 = (char *)(0x02000ab0 + 0x0002d02c);
    cVar1 = *pcVar5;
    *pcVar5 = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') == '\f') {
      *pcVar5 = '\0';
    }
  }
  uVar3 = *(ushort *)(iVar4 + 0x000007d4);
  if ((uVar3 >> 8 == 2) && ((uVar3 & 0xff) == 3)) {
    pbVar6 = (byte *)(iVar4 + 0x0002d028);
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
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 1) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 1;
      FUN_08002624(2);
      FUN_08002624(3);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 2) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 5)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 2) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 2;
      FUN_0800249c(4,0x60);
    }
    FUN_080025d8(4);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 2) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 2;
      FUN_08002624(4);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 2) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 2)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 4) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 4;
      FUN_0800249c(0xb,0);
    }
    FUN_080025d8(0xb);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 4) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 4;
      FUN_08002624(0xb);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 2) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 1)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 8) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 8;
      FUN_0800249c(0xe,0x160);
      FUN_0800249c(0x19,0x1a0);
    }
    FUN_080025d8(0xe);
    FUN_080025d8(0x19);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 8) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 8;
      FUN_08002624(0xe);
      FUN_08002624(0x19);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 2) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 3)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x10) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 0x10;
      FUN_0800249c(0xf,0xa0);
      FUN_0800249c(0x10,0x180);
      FUN_0800249c(0x11,0x180);
    }
    FUN_080025d8(0xf);
    FUN_080025d8(0x10);
    FUN_080025d8(0x11);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x10) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 0x10;
      FUN_08002624(0xf);
      FUN_08002624(0x10);
      FUN_08002624(0x11);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 2) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 5)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x20) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 0x20;
      FUN_0800249c(0x18,0xa0);
    }
    FUN_080025d8(0x18);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x20) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 0x20;
      FUN_08002624(0x18);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 2) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 8)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x40) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 0x40;
      FUN_0800249c(0x1a,0);
      FUN_0800249c(0x1b,0);
    }
    FUN_080025d8(0x1a);
    FUN_080025d8(0x1b);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x40) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 0x40;
      FUN_08002624(0x1a);
      FUN_08002624(0x1b);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 2) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 9)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x80) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 0x80;
      FUN_0800249c(0xe0,0);
      FUN_0800249c(0xe1,0);
    }
    FUN_080025d8(0xe0);
    FUN_080025d8(0xe1);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x80) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 0x80;
      FUN_08002624(0xe0);
      FUN_08002624(0xe1);
    }
  }
  return;
}


