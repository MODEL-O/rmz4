// undefined FUN_0800931c(void)
// entry 0x800931c


undefined4 FUN_0800931c(int param_1,uint param_2)

{
  if ((0x000003ff < param_1) &&
     ((0x000007ff < param_1 || ((int)param_2 < (param_1 + 0xfffffc00) * 4)))) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


