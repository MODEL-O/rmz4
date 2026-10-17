// undefined FUN_08009244(void)
// entry 0x8009244


undefined8 FUN_08009244(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((DAT_08009264 < param_1) &&
     (iVar1 = param_2 + DAT_08009268 + (param_1 + DAT_0800926c) * 4, 0 < iVar1)) {
    iVar1 = -iVar1;
  }
  else {
    iVar1 = 0;
  }
  return CONCAT44(in_lr,iVar1);
}


