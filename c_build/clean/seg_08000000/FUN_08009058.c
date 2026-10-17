// undefined FUN_08009058(void)
// entry 0x8009058


undefined4 FUN_08009058(int param_1,uint param_2)

{
  if ((int)param_2 < (param_1 >> 2) + 0x800) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


