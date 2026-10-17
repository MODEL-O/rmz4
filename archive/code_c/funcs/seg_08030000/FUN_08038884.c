// undefined FUN_08038884(void)
// entry 0x8038884


undefined8 FUN_08038884(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x700;
  }
  else {
    iVar1 = (0x100 - (uint)*(byte *)(param_1 + 0x13e)) * 7;
  }
  return CONCAT44(in_lr,iVar1);
}


