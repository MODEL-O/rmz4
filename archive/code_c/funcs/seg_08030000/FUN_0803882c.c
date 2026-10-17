// undefined FUN_0803882c(void)
// entry 0x803882c


undefined8 FUN_0803882c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x580;
  }
  else {
    iVar1 = (int)((0x100 - (uint)*(byte *)(param_1 + 0x13e)) * 0xb) >> 1;
  }
  return CONCAT44(in_lr,iVar1);
}


