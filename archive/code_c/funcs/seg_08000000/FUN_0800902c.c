// undefined FUN_0800902c(void)
// entry 0x800902c


undefined8 FUN_0800902c(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((int)param_2 < param_1 >> 2) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}


