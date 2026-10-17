// undefined FUN_08009350(void)
// entry 0x8009350


undefined4 FUN_08009350(int param_1,uint param_2)

{
  if ((0x000003ff < param_1) || ((int)param_2 < param_1 * 4)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


