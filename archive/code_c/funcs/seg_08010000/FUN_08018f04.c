// undefined FUN_08018f04(void)
// entry 0x8018f04


undefined4 FUN_08018f04(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  iVar3 = DAT_08018f58;
  *(int *)(DAT_08018f58 + DAT_08018f5c) = *(int *)(DAT_08018f58 + DAT_08018f5c) + 1;
  uVar2 = *(ushort *)(iVar3 + DAT_08018f60);
  if ((uVar2 >> 8 == 0xd) && ((uVar2 & 0xff) == 0)) {
    pbVar4 = (byte *)(iVar3 + DAT_08018f64);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) == 0) {
      *pbVar4 = bVar1 | 1;
      FUN_0800249c(0x96,0);
      FUN_0800249c(0x97,0);
    }
    FUN_080025d8(0x96);
    FUN_080025d8(0x97);
  }
  else {
    bVar1 = *(byte *)(DAT_08018fd8 + DAT_08018fdc);
    if ((bVar1 & 1) != 0) {
      *(byte *)(DAT_08018fd8 + DAT_08018fdc) = bVar1 ^ 1;
      FUN_08002624(0x96);
      FUN_08002624(0x97);
    }
  }
  if ((*(ushort *)(DAT_08018fd8 + DAT_08018fe0) >> 8 == 0xd) &&
     ((*(ushort *)(DAT_08018fd8 + DAT_08018fe0) & 0xff) == 1)) {
    bVar1 = *(byte *)(DAT_08018fd8 + DAT_08018fdc);
    if ((bVar1 & 2) == 0) {
      *(byte *)(DAT_08018fd8 + DAT_08018fdc) = bVar1 | 2;
      FUN_0800249c(0x98,0);
      FUN_0800249c(0x99,0);
    }
    FUN_080025d8(0x98);
    FUN_080025d8(0x99);
    FUN_080025d8(0x99);
  }
  else {
    bVar1 = *(byte *)(DAT_08019050 + DAT_08019054);
    if ((bVar1 & 2) != 0) {
      *(byte *)(DAT_08019050 + DAT_08019054) = bVar1 ^ 2;
      FUN_08002624(0x98);
      FUN_08002624(0x99);
    }
  }
  if ((*(ushort *)(DAT_08019050 + DAT_08019058) >> 8 == 0xd) &&
     ((*(ushort *)(DAT_08019050 + DAT_08019058) & 0xff) == 2)) {
    bVar1 = *(byte *)(DAT_08019050 + DAT_08019054);
    if ((bVar1 & 4) == 0) {
      *(byte *)(DAT_08019050 + DAT_08019054) = bVar1 | 4;
      FUN_0800249c(0x9a,0);
      FUN_0800249c(0x9b,0);
    }
    FUN_080025d8(0x9a);
    FUN_080025d8(0x9b);
  }
  else {
    bVar1 = *(byte *)(DAT_080190c8 + DAT_080190cc);
    if ((bVar1 & 4) != 0) {
      *(byte *)(DAT_080190c8 + DAT_080190cc) = bVar1 ^ 4;
      FUN_08002624(0x9a);
      FUN_08002624(0x9b);
    }
  }
  if ((*(ushort *)(DAT_080190c8 + DAT_080190d0) >> 8 == 0xd) &&
     ((*(ushort *)(DAT_080190c8 + DAT_080190d0) & 0xff) == 3)) {
    bVar1 = *(byte *)(DAT_080190c8 + DAT_080190cc);
    if ((bVar1 & 8) == 0) {
      *(byte *)(DAT_080190c8 + DAT_080190cc) = bVar1 | 8;
      FUN_0800249c(0x9c,0);
      FUN_0800249c(0x9d,0);
    }
    FUN_080025d8(0x9c);
    FUN_080025d8(0x9d);
  }
  else {
    bVar1 = *(byte *)(DAT_080190c8 + DAT_080190f8);
    if ((bVar1 & 8) != 0) {
      *(byte *)(DAT_080190c8 + DAT_080190f8) = bVar1 ^ 8;
      FUN_08002624(0x9c);
      FUN_08002624(0x9d);
    }
  }
  return in_lr;
}


