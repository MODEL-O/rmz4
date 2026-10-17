// undefined FUN_08013390(void)
// entry 0x8013390


undefined4 FUN_08013390(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_080133b8;
  if ((*(ushort *)(DAT_080133b8 + 0x14) & 1) == 0) {
    *(undefined4 *)(DAT_080133b8 + 0x144) = 0xf000;
    uVar2 = 0x2d000;
  }
  else {
    *(undefined4 *)(DAT_080133b8 + 0x144) = 0xf000;
    uVar2 = 0x3c0000;
  }
  *(undefined4 *)(iVar1 + 0x148) = uVar2;
  return in_lr;
}


