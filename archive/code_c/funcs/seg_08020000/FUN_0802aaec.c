// undefined FUN_0802aaec(void)
// entry 0x802aaec


undefined8 FUN_0802aaec(uint param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = *DAT_0802ab14 * DAT_0802ab18 + DAT_0802ab1c;
  *DAT_0802ab14 = uVar2 & 0x7fffffff;
  if (param_1 < 9) {
    if ((*(byte *)(DAT_0802ab80 + 0x15) & 1) != 0) {
      param_1 = 8;
    }
    if ((*(byte *)(DAT_0802ab80 + 9) & 2) != 0) {
      param_1 = 5;
    }
    uVar3 = 0;
    uVar1 = *(ushort *)(param_1 * 0xe + DAT_0802ab84);
    while (((uint)uVar1 <= ((uVar2 & 0x7fffffff) >> 0x10 & 0xff) &&
           (uVar3 = uVar3 + 1 & 0xffff, uVar3 < 6))) {
      uVar1 = *(ushort *)(uVar3 * 2 + param_1 * 0xe + DAT_0802ab84);
    }
    if (uVar3 != 0) {
      FUN_081083b4(uVar3 - 1 & 0xff,param_2,0);
    }
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}


