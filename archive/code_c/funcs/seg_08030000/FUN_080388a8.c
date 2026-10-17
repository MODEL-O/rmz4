// undefined FUN_080388a8(void)
// entry 0x80388a8


undefined8 FUN_080388a8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x480;
  }
  else {
    iVar1 = (int)((0x100 - (uint)*(byte *)(param_1 + 0x13e)) * 9) >> 1;
  }
  return CONCAT44(in_lr,iVar1);
}


