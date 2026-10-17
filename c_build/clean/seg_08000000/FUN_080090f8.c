// undefined FUN_080090f8(void)
// entry 0x80090f8


undefined4 FUN_080090f8(int param_1,uint param_2)

{
  if ((int)param_2 < 0x800 - (param_1 >> 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


