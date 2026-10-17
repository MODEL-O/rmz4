// undefined FUN_08009278(void)
// entry 0x8009278


undefined4 FUN_08009278(int param_1,uint param_2)

{
  if ((DAT_08009290 < param_1) && ((int)param_2 < (param_1 + DAT_08009294) * 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


