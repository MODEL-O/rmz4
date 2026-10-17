// undefined FUN_080388d0(void)
// entry 0x80388d0


undefined8 FUN_080388d0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x540;
  }
  else {
    iVar1 = (int)((0x100 - (uint)*(byte *)(param_1 + 0x13e)) * 0x15) >> 2;
  }
  return CONCAT44(in_lr,iVar1);
}


