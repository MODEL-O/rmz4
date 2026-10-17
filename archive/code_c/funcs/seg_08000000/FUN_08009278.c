// undefined FUN_08009278(void)
// entry 0x8009278


undefined8 FUN_08009278(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((DAT_08009290 < param_1) && ((int)param_2 < (param_1 + DAT_08009294) * 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}


