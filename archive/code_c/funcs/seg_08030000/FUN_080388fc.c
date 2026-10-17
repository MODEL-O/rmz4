// undefined FUN_080388fc(void)
// entry 0x80388fc


undefined8 FUN_080388fc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x100;
  }
  else {
    iVar1 = 0x100 - (uint)*(byte *)(param_1 + 0x13e);
  }
  return CONCAT44(in_lr,iVar1);
}


