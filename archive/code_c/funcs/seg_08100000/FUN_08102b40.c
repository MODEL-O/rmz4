// undefined FUN_08102b40(void)
// entry 0x8102b40


undefined8 FUN_08102b40(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 1;
  FUN_08006984(0x62);
  bVar1 = *(byte *)(DAT_08102b78 + 7);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(DAT_08102b78 + 6);
    if ((bVar1 & 0x10) == 0) {
      if (((((bVar1 & 1) != 0) && ((bVar1 & 2) != 0)) && (uVar2 = 3, (bVar1 & 4) != 0)) &&
         (uVar2 = 5, (bVar1 & 8) != 0)) {
        uVar2 = 7;
      }
    }
    else {
      uVar2 = 9;
      if ((((bVar1 & 0x20) != 0) && (uVar2 = 0xb, (bVar1 & 0x40) != 0)) &&
         (uVar2 = 0xd, (bVar1 & 0x80) != 0)) {
        uVar2 = 0xf;
      }
    }
  }
  else {
    uVar2 = 0x11;
    if ((((bVar1 & 2) != 0) && (uVar2 = 0x13, (bVar1 & 4) != 0)) && (uVar2 = 0x15, (bVar1 & 8) != 0)
       ) {
      uVar2 = 0x17;
    }
  }
  if (*(byte *)(DAT_08102be0 + 0x1d) == uVar2) {
    uVar2 = uVar2 + 1;
  }
  else {
    *(char *)(DAT_08102be0 + 0x1d) = (char)uVar2;
  }
  return CONCAT44(in_lr,(uint)*(ushort *)(uVar2 * 2 + DAT_08102bf4));
}


