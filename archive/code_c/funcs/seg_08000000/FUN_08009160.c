// undefined FUN_08009160(void)
// entry 0x8009160


undefined8 FUN_08009160(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((DAT_08009180 < param_1) &&
     (iVar1 = param_2 + DAT_08009184 + (param_1 + DAT_08009188) * 2, 0 < iVar1)) {
    iVar1 = -iVar1;
  }
  else {
    iVar1 = 0;
  }
  return CONCAT44(in_lr,iVar1);
}


