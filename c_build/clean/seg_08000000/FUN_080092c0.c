// undefined FUN_080092c0(void)
// entry 0x80092c0


undefined4 FUN_080092c0(int param_1,uint param_2)

{
  if ((DAT_080092d8 < param_1) && ((int)param_2 < (param_1 + DAT_080092dc) * 4)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


