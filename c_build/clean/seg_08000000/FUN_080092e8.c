// undefined FUN_080092e8(void)
// entry 0x80092e8


undefined4 FUN_080092e8(int param_1,uint param_2)

{
  if ((DAT_08009308 < param_1) &&
     ((DAT_0800930c < param_1 || ((int)param_2 < (param_1 + DAT_08009310) * 4)))) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


