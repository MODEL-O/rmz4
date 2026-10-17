// undefined FUN_08008f6c(void)
// entry 0x8008f6c


undefined8 FUN_08008f6c(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (param_2 + DAT_08008f80) - (param_1 >> 1);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return CONCAT44(in_lr,iVar1);
}


