// undefined FUN_08009194(void)
// entry 0x8009194


undefined8 FUN_08009194(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_080091a4 < param_1) {
    param_2 = ~param_2;
  }
  else {
    iVar1 = param_2 + DAT_080091b8 + param_1 * 4;
    if (iVar1 < 1) {
      param_2 = 0;
    }
    else {
      param_2 = -iVar1;
    }
  }
  return CONCAT44(in_lr,param_2);
}


