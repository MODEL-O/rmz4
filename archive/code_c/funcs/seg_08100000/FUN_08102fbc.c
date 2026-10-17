// undefined FUN_08102fbc(void)
// entry 0x8102fbc


ulonglong FUN_08102fbc(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  ushort auStack_14 [4];
  
  FUN_08129258(auStack_14,DAT_08103004,6);
  uVar3 = 1;
  FUN_08006984(0x56);
  bVar1 = *(byte *)(DAT_08103008 + 7);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(DAT_08103008 + 6);
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
  uVar2 = (uint)*(byte *)(param_1 + 0x10);
  if (((*(byte *)(DAT_081030b8 + uVar2 + 0x19) == uVar3) ||
      ((uVar3 + auStack_14[uVar2 - 6] == DAT_081030bc && ((*(byte *)(*DAT_081030c0 + 2) & 1) != 0)))
      ) || ((uVar3 + auStack_14[uVar2 - 6] == DAT_081030c4 &&
            (((*(byte *)*DAT_081030c0 & 0xf) >> 1 & 1) != 0)))) {
    uVar3 = uVar3 + 1;
  }
  else {
    *(char *)(DAT_081030b8 + (uint)*(byte *)(param_1 + 0x10) + 0x19) = (char)uVar3;
  }
  return CONCAT44(in_lr,auStack_14[*(byte *)(param_1 + 0x10) - 6] + uVar3 + -1) & 0xffffffff0000ffff
  ;
}


