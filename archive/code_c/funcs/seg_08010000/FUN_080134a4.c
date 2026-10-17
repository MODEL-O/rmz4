// undefined FUN_080134a4(void)
// entry 0x80134a4


undefined4 FUN_080134a4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080134cc;
  if ((*(ushort *)(DAT_080134cc + 0x14) & 1) == 0) {
    iVar2 = 0x144;
    uVar3 = DAT_080134e0;
  }
  else {
    *(undefined4 *)(DAT_080134cc + 0x144) = 0xf000;
    iVar2 = 0x148;
    uVar3 = 0x3c0000;
  }
  *(undefined4 *)(iVar1 + iVar2) = uVar3;
  return in_lr;
}


