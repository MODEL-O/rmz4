// undefined FUN_080092e8(void)
// entry 0x80092e8


undefined4 FUN_080092e8(int param_1,uint param_2)

{
  if ((0x000007ff < param_1) &&
     ((0x00000bff < param_1 || ((int)param_2 < (param_1 + 0xfffff800) * 4)))) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


