// undefined FUN_08102e18(void)
// entry 0x8102e18


undefined8 FUN_08102e18(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 1;
  FUN_08006984(0x61);
  iVar2 = DAT_08102ee8;
  bVar1 = *(byte *)(DAT_08102e50 + 7);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(DAT_08102e50 + 6);
    if ((bVar1 & 0x10) == 0) {
      if (((((bVar1 & 1) != 0) && ((bVar1 & 2) != 0)) && (uVar3 = 3, (bVar1 & 4) != 0)) &&
         (uVar3 = 5, (bVar1 & 8) != 0)) {
        uVar3 = 7;
      }
    }
    else {
      uVar3 = 9;
      if ((((bVar1 & 0x20) != 0) && (uVar3 = 0xb, (bVar1 & 0x40) != 0)) &&
         (uVar3 = 0xd, (bVar1 & 0x80) != 0)) {
        uVar3 = 0xf;
      }
    }
  }
  else {
    uVar3 = 0x11;
    if ((((bVar1 & 2) != 0) && (uVar3 = 0x13, (bVar1 & 4) != 0)) && (uVar3 = 0x15, (bVar1 & 8) != 0)
       ) {
      uVar3 = 0x17;
    }
  }
  if (*(byte *)(DAT_08102ebc + 0x1e) == uVar3) {
    uVar3 = uVar3 + 1;
    iVar2 = DAT_08102ec0;
  }
  else if ((*(ushort *)(uVar3 * 2 + DAT_08102ee8) == DAT_08102eec) &&
          ((*(byte *)(*DAT_08102ef0 + 6) & 1) != 0)) {
    uVar3 = uVar3 + 1;
  }
  else {
    *(char *)(DAT_08102ebc + 0x1e) = (char)uVar3;
  }
  return CONCAT44(in_lr,(uint)*(ushort *)(uVar3 * 2 + iVar2));
}


