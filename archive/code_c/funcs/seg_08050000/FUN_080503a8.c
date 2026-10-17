// undefined FUN_080503a8(void)
// entry 0x80503a8


undefined8 FUN_080503a8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0801cb30(*DAT_080503c0,param_1 + 0x54);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x54;
  }
  return CONCAT44(in_lr,iVar1);
}


