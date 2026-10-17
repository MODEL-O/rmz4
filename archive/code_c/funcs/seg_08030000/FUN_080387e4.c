// undefined FUN_080387e4(void)
// entry 0x80387e4


undefined8 FUN_080387e4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x500;
  }
  else {
    iVar1 = (0x100 - (uint)*(byte *)(param_1 + 0x13e)) * 5;
  }
  return CONCAT44(in_lr,iVar1);
}


