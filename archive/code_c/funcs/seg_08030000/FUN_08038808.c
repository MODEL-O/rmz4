// undefined FUN_08038808(void)
// entry 0x8038808


undefined8 FUN_08038808(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x400;
  }
  else {
    iVar1 = (0x100 - (uint)*(byte *)(param_1 + 0x13e)) * 4;
  }
  return CONCAT44(in_lr,iVar1);
}


