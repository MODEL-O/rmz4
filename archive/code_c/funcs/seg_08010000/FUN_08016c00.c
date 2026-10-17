// undefined FUN_08016c00(void)
// entry 0x8016c00


undefined4 FUN_08016c00(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  char *pcVar7;
  short *psVar8;
  undefined4 in_lr;
  
  iVar4 = DAT_08016c8c;
  pcVar7 = (char *)(DAT_08016c8c + DAT_08016c90);
  cVar1 = *pcVar7;
  *pcVar7 = cVar1 + '\x01';
  if ((char)(cVar1 + '\x01') == '&') {
    *pcVar7 = '\0';
  }
  psVar8 = (short *)(iVar4 + DAT_08016c94);
  sVar3 = *psVar8;
  *psVar8 = sVar3 + -1;
  if ((short)(sVar3 + -1) == 0) {
    iVar6 = *(int *)(DAT_08016c98 + DAT_08016c9c) * DAT_08016ca0 + DAT_08016ca4;
    *(int *)(DAT_08016c98 + DAT_08016c9c) = iVar6;
    *psVar8 = ((ushort)((uint)iVar6 >> 0x10) & 0x7f) + 0x98;
  }
  if ((*(ushort *)(iVar4 + DAT_08016ca8) >> 8 == 0xb) &&
     ((*(ushort *)(iVar4 + DAT_08016ca8) & 0xff) == 1)) {
    bVar2 = *(byte *)(iVar4 + DAT_08016cac);
    if ((bVar2 & 1) == 0) {
      *(byte *)(iVar4 + DAT_08016cac) = bVar2 | 1;
      FUN_0800249c(0x2a,0);
      FUN_0800249c(0x2b,0);
    }
    FUN_080025d8(0x2a);
    FUN_080025d8(0x2b);
  }
  else {
    bVar2 = *(byte *)(DAT_08016d0c + DAT_08016d10);
    if ((bVar2 & 1) != 0) {
      *(byte *)(DAT_08016d0c + DAT_08016d10) = bVar2 ^ 1;
      FUN_08002624(0x2a);
      FUN_08002624(0x2b);
    }
  }
  if ((*(ushort *)(DAT_08016d0c + DAT_08016d14) >> 8 == 0xb) &&
     ((*(ushort *)(DAT_08016d0c + DAT_08016d14) & 0xff) == 4)) {
    bVar2 = *(byte *)(DAT_08016d0c + DAT_08016d10);
    if ((bVar2 & 2) == 0) {
      *(byte *)(DAT_08016d0c + DAT_08016d10) = bVar2 | 2;
      FUN_0800249c(0x2c,0);
    }
    FUN_080025d8(0x2c);
  }
  else {
    bVar2 = *(byte *)(DAT_08016d70 + DAT_08016d74);
    if ((bVar2 & 2) != 0) {
      *(byte *)(DAT_08016d70 + DAT_08016d74) = bVar2 ^ 2;
      FUN_08002624(0x2c);
    }
  }
  if ((*(ushort *)(DAT_08016d70 + DAT_08016d78) >> 8 == 0xb) &&
     ((*(ushort *)(DAT_08016d70 + DAT_08016d78) & 0xff) == 5)) {
    bVar2 = *(byte *)(DAT_08016d70 + DAT_08016d74);
    if ((bVar2 & 4) == 0) {
      *(byte *)(DAT_08016d70 + DAT_08016d74) = bVar2 | 4;
      FUN_0800249c(0x2d,0);
    }
    FUN_080025d8(0x2d);
  }
  else {
    bVar2 = *(byte *)(DAT_08016dfc + DAT_08016e00);
    if ((bVar2 & 4) != 0) {
      *(byte *)(DAT_08016dfc + DAT_08016e00) = bVar2 ^ 4;
      FUN_08002624(0x2d);
    }
  }
  if ((*(ushort *)(DAT_08016dfc + DAT_08016e04) >> 8 == 0xb) &&
     ((*(ushort *)(DAT_08016dfc + DAT_08016e04) & 0xff) == 8)) {
    bVar2 = *(byte *)(DAT_08016dfc + DAT_08016e00);
    if ((bVar2 & 8) == 0) {
      *(byte *)(DAT_08016dfc + DAT_08016e00) = bVar2 | 8;
      FUN_0800249c(0x44,0);
      FUN_0800249c(0x45,0);
      FUN_0800249c(0x46,0);
      FUN_0800249c(0x47,0);
    }
    FUN_080025d8(0x44);
    FUN_080025d8(0x45);
    FUN_080025d8(0x46);
    FUN_080025d8(0x47);
  }
  else {
    bVar2 = *(byte *)(DAT_08016e8c + DAT_08016e90);
    if ((bVar2 & 8) != 0) {
      *(byte *)(DAT_08016e8c + DAT_08016e90) = bVar2 ^ 8;
      FUN_08002624(0x44);
      FUN_08002624(0x45);
      FUN_08002624(0x46);
      FUN_08002624(0x47);
    }
  }
  if ((*(ushort *)(DAT_08016e8c + DAT_08016e94) >> 8 == 0xb) &&
     ((*(ushort *)(DAT_08016e8c + DAT_08016e94) & 0xff) == 10)) {
    bVar2 = *(byte *)(DAT_08016e8c + DAT_08016e90);
    if ((bVar2 & 0x10) == 0) {
      *(byte *)(DAT_08016e8c + DAT_08016e90) = bVar2 | 0x10;
      FUN_0800249c(0x51,0);
      FUN_0800249c(0x52,0);
      FUN_0800249c(0x53,0);
    }
    FUN_080025d8(0x51);
    FUN_080025d8(0x52);
    FUN_080025d8(0x53);
  }
  else {
    bVar2 = *(byte *)(DAT_08016f08 + DAT_08016f0c);
    if ((bVar2 & 0x10) != 0) {
      *(byte *)(DAT_08016f08 + DAT_08016f0c) = bVar2 ^ 0x10;
      FUN_08002624(0x51);
      FUN_08002624(0x52);
      FUN_08002624(0x53);
    }
  }
  if ((((*(byte *)(DAT_08016f08 + DAT_08016f10) & 1) == 0) ||
      (*(ushort *)(DAT_08016f08 + DAT_08016f14) >> 8 != 0xb)) ||
     ((*(ushort *)(DAT_08016f08 + DAT_08016f14) & 0xff) != 0xc)) {
    bVar2 = *(byte *)(DAT_08016f80 + DAT_08016f84);
    if ((bVar2 & 0x20) != 0) {
      *(byte *)(DAT_08016f80 + DAT_08016f84) = bVar2 ^ 0x20;
      FUN_08002624(0xcb);
    }
  }
  else {
    bVar2 = *(byte *)(DAT_08016f08 + DAT_08016f0c);
    if ((bVar2 & 0x20) == 0) {
      *(byte *)(DAT_08016f08 + DAT_08016f0c) = bVar2 | 0x20;
      FUN_0800249c(0xcb,0);
    }
    FUN_080025d8(0xcb);
  }
  if ((((*(byte *)(DAT_08016f80 + DAT_08016f88) & 2) == 0) ||
      (*(ushort *)(DAT_08016f80 + DAT_08016f8c) >> 8 != 0xb)) ||
     ((uVar5 = *(ushort *)(DAT_08016f80 + DAT_08016f8c) & 0xff, uVar5 != 0xc && (uVar5 != 0xd)))) {
    bVar2 = *(byte *)(DAT_08016ff8 + DAT_08016ffc);
    if ((bVar2 & 0x40) != 0) {
      *(byte *)(DAT_08016ff8 + DAT_08016ffc) = bVar2 ^ 0x40;
      FUN_08002624(0xcc);
    }
  }
  else {
    bVar2 = *(byte *)(DAT_08016f80 + DAT_08016f84);
    if ((bVar2 & 0x40) == 0) {
      *(byte *)(DAT_08016f80 + DAT_08016f84) = bVar2 | 0x40;
      FUN_0800249c(0xcc,0);
    }
    FUN_080025d8(0xcc);
  }
  if ((((*(byte *)(DAT_08016ff8 + DAT_08017000) & 4) == 0) ||
      (*(ushort *)(DAT_08016ff8 + DAT_08017004) >> 8 != 0xb)) ||
     ((uVar5 = *(ushort *)(DAT_08016ff8 + DAT_08017004) & 0xff, uVar5 != 0xc && (uVar5 != 0xd)))) {
    bVar2 = *(byte *)(DAT_08016ff8 + DAT_08017028);
    if ((bVar2 & 0x80) != 0) {
      *(byte *)(DAT_08016ff8 + DAT_08017028) = bVar2 ^ 0x80;
      FUN_08002624(0xcd);
    }
  }
  else {
    bVar2 = *(byte *)(DAT_08016ff8 + DAT_08016ffc);
    if ((bVar2 & 0x80) == 0) {
      *(byte *)(DAT_08016ff8 + DAT_08016ffc) = bVar2 | 0x80;
      FUN_0800249c(0xcd,0);
    }
    FUN_080025d8(0xcd);
  }
  return in_lr;
}


