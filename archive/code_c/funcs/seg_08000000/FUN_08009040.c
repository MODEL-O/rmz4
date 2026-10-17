// undefined FUN_08009040(void)
// entry 0x8009040


undefined8 FUN_08009040(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((int)param_2 < (param_1 >> 2) + 0x400) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}


