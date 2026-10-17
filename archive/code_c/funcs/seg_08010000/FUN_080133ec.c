// undefined FUN_080133ec(void)
// entry 0x80133ec


undefined4 FUN_080133ec(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_08013414;
  if ((*(ushort *)(DAT_08013414 + 0x14) & 1) == 0) {
    *(undefined4 *)(DAT_08013414 + 0x144) = 0xff000;
    uVar2 = 0x114000;
  }
  else {
    *(undefined4 *)(DAT_08013414 + 0x144) = 0xf000;
    uVar2 = 0x3c0000;
  }
  *(undefined4 *)(iVar1 + 0x148) = uVar2;
  return in_lr;
}


