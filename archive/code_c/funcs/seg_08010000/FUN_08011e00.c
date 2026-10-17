// undefined FUN_08011e00(void)
// entry 0x8011e00


undefined4 FUN_08011e00(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if ((*(ushort *)(DAT_08011e3c + DAT_08011e40) >> 8 == 6) &&
     ((*(ushort *)(DAT_08011e3c + DAT_08011e40) & 0xff) == 1)) {
    bVar1 = *(byte *)(DAT_08011e3c + DAT_08011e44);
    if ((bVar1 & 1) == 0) {
      *(byte *)(DAT_08011e3c + DAT_08011e44) = bVar1 | 1;
      FUN_0800249c(0x5e,0);
    }
    FUN_080025d8(0x5e);
  }
  else {
    bVar1 = *(byte *)(DAT_08011e9c + DAT_08011ea0);
    if ((bVar1 & 1) != 0) {
      *(byte *)(DAT_08011e9c + DAT_08011ea0) = bVar1 ^ 1;
      FUN_08002624(0x5e);
    }
  }
  if ((*(ushort *)(DAT_08011e9c + DAT_08011ea4) >> 8 == 6) &&
     ((*(ushort *)(DAT_08011e9c + DAT_08011ea4) & 0xff) == 2)) {
    bVar1 = *(byte *)(DAT_08011e9c + DAT_08011ea0);
    if ((bVar1 & 2) == 0) {
      *(byte *)(DAT_08011e9c + DAT_08011ea0) = bVar1 | 2;
      FUN_0800249c(0x5f,0);
    }
    FUN_080025d8(0x5f);
  }
  else {
    bVar1 = *(byte *)(DAT_08011f24 + DAT_08011f28);
    if ((bVar1 & 2) != 0) {
      *(byte *)(DAT_08011f24 + DAT_08011f28) = bVar1 ^ 2;
      FUN_08002624(0x5f);
    }
  }
  if (((*(ushort *)(DAT_08011f24 + DAT_08011f2c) >> 8 == 6) &&
      ((*(ushort *)(DAT_08011f24 + DAT_08011f2c) & 0xff) == 2)) &&
     ((*(ushort *)(DAT_08011f24 + DAT_08011f30) >> 8 != 6 ||
      ((*(ushort *)(DAT_08011f24 + DAT_08011f30) & 0xff) != 6)))) {
    bVar1 = *(byte *)(DAT_08011f24 + DAT_08011f28);
    if ((bVar1 & 4) == 0) {
      *(byte *)(DAT_08011f24 + DAT_08011f28) = bVar1 | 4;
      FUN_0800249c(0x71,0);
      FUN_0800249c(0x86,0x2c0);
    }
    FUN_080025d8(0x71);
    FUN_080025d8(0x86);
  }
  else {
    bVar1 = *(byte *)(DAT_08011f9c + DAT_08011fa0);
    if ((bVar1 & 4) != 0) {
      *(byte *)(DAT_08011f9c + DAT_08011fa0) = bVar1 ^ 4;
      FUN_08002624(0x71);
      FUN_08002624(0x86);
    }
  }
  iVar3 = DAT_08011f9c;
  if ((*(ushort *)(DAT_08011f9c + DAT_08011fa4) >> 8 == 6) &&
     ((*(ushort *)(DAT_08011f9c + DAT_08011fa4) & 0xff) == 1)) {
    pcVar4 = (char *)(DAT_08011f9c + DAT_08011fa8);
    cVar2 = *pcVar4;
    *pcVar4 = cVar2 + '\x01';
    if ((char)(cVar2 + '\x01') == '\x12') {
      *pcVar4 = '\0';
    }
    pcVar4 = (char *)(iVar3 + DAT_08011fac);
    cVar2 = *pcVar4;
    *pcVar4 = cVar2 + '\x01';
    if ((char)(cVar2 + '\x01') == '6') {
      *pcVar4 = '\0';
    }
  }
  return in_lr;
}


