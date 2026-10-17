// undefined FUN_08000a70(void)
// entry 0x8000a70


undefined8 FUN_08000a70(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(DAT_08000aa0 + 0x1200);
  iVar3 = (uint)*(ushort *)(DAT_08000aa0 + DAT_08000aa4) * 0x900 + (uint)uVar1 * 4 + DAT_08000aa0;
  uVar2 = param_1 + 3U >> 2;
  if (0x240 - uVar1 < uVar2) {
    iVar3 = 0;
  }
  else {
    *(ushort *)(DAT_08000aa0 + 0x1200) = uVar1 + (short)uVar2;
  }
  return CONCAT44(in_lr,iVar3);
}


