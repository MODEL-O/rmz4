// undefined FUN_08009000(void)
// entry 0x8009000


undefined8 FUN_08009000(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((int)param_2 < param_1 >> 1) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}


