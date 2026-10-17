// undefined FUN_080092a0(void)
// entry 0x80092a0


undefined4 FUN_080092a0(int param_1,uint param_2)

{
  if ((0x000007ff < param_1) || ((int)param_2 < param_1 * 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


