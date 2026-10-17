// undefined FUN_08009130(void)
// entry 0x8009130


undefined8 FUN_08009130(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_08009140 < param_1) {
    param_2 = ~param_2;
  }
  else {
    iVar1 = param_2 + DAT_08009154 + param_1 * 2;
    if (iVar1 < 1) {
      param_2 = 0;
    }
    else {
      param_2 = -iVar1;
    }
  }
  return CONCAT44(in_lr,param_2);
}


