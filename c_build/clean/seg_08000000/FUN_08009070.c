// undefined FUN_08009070(void)
// entry 0x8009070


undefined4 FUN_08009070(int param_1,uint param_2)

{
  if ((int)param_2 < (param_1 >> 2) + 0xc00) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


