// undefined FUN_08038740(void)
// entry 0x8038740


undefined8 FUN_08038740(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + DAT_0803875c) & 0x8000) == 0) {
    if (*(byte *)(param_1 + 0x13e) == 0) {
      iVar1 = 0x80;
    }
    else {
      iVar1 = (int)(0x100 - (uint)*(byte *)(param_1 + 0x13e)) >> 1;
    }
    iVar1 = iVar1 >> *(sbyte *)(param_1 + 0x1ba);
  }
  else {
    iVar1 = 0x200;
  }
  return CONCAT44(in_lr,iVar1);
}


