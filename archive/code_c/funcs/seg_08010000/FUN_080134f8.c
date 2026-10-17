// undefined FUN_080134f8(void)
// entry 0x80134f8


undefined4 FUN_080134f8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08013520;
  if ((*(ushort *)(DAT_08013520 + 0x14) & 1) == 0) {
    iVar2 = 0x144;
    uVar3 = 0xa5000;
  }
  else {
    *(undefined4 *)(DAT_08013520 + 0x144) = 0xf000;
    iVar2 = 0x148;
    uVar3 = 0x3c0000;
  }
  *(undefined4 *)(iVar1 + iVar2) = uVar3;
  return in_lr;
}


