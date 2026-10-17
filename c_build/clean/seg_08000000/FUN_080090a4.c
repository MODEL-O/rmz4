// undefined FUN_080090a4(void)
// entry 0x80090a4


undefined4 FUN_080090a4(int param_1,uint param_2)

{
  if ((int)param_2 < 0x1000 - (param_1 >> 1)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


