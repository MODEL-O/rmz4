// undefined FUN_080bd418(void)
// entry 0x80bd418


undefined8 FUN_080bd418(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0801cb30(*DAT_080bd430,param_1 + 0x54);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x54;
  }
  return CONCAT44(in_lr,iVar1);
}


