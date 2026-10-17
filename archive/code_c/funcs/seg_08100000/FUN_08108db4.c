// undefined FUN_08108db4(void)
// entry 0x8108db4


undefined8 FUN_08108db4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = FUN_08008aa4(param_1 + DAT_08108de8,param_2);
  iVar2 = FUN_08008aa4(param_1 + 0x700,param_2);
  if (((iVar1 < 0) && (0 < iVar2)) || ((0 < iVar1 && (iVar2 < 0)))) {
    iVar2 = 0;
  }
  else if (((iVar1 < 0) && (iVar1 < iVar2)) || ((0 < iVar1 && (iVar2 < iVar1)))) {
    iVar2 = iVar1;
  }
  return CONCAT44(in_lr,iVar2);
}


