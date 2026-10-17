// undefined FUN_08108d54(void)
// entry 0x8108d54


undefined8 FUN_08108d54(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = FUN_08008534(param_1 + DAT_08108d80,param_2);
  iVar2 = FUN_08008534(param_1 + 0x700,param_2);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  return CONCAT44(in_lr,iVar2);
}


