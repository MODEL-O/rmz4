// undefined FUN_08009014(void)
// entry 0x8009014


undefined4 FUN_08009014(int param_1,uint param_2)

{
  if ((int)param_2 < (param_1 >> 1) + 0x800) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


