// undefined FUN_080d319c(void)
// entry 0x80d319c


undefined8 FUN_080d319c(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_080d31cc;
  if (param_3 != '\0') {
    iVar1 = 0x2000;
  }
  iVar1 = FUN_08008534(param_1 + iVar1,param_2);
  iVar1 = iVar1 - param_2;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  return CONCAT44(iVar1,in_lr);
}


