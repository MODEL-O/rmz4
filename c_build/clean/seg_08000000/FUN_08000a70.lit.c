// undefined FUN_08000a70(void)
// entry 0x8000a70


undefined4 FUN_08000a70(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uVar1 = *(ushort *)(0x03000380 + 0x1200);
  iVar3 = (uint)*(ushort *)(0x03000380 + 0x00001202) * 0x900 + (uint)uVar1 * 4 + 0x03000380;
  uVar2 = param_1 + 3U >> 2;
  if (0x240 - uVar1 < uVar2) {
    iVar3 = 0;
  }
  else {
    *(ushort *)(0x03000380 + 0x1200) = uVar1 + (short)uVar2;
  }
  return iVar3;
}


