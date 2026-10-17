// undefined FUN_08108d84(void)
// entry 0x8108d84


undefined8 FUN_08108d84(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = FUN_08008748(param_1 + DAT_08108db0,param_2);
  iVar2 = FUN_08008748(param_1 + 0x700,param_2);
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return CONCAT44(in_lr,iVar2);
}


