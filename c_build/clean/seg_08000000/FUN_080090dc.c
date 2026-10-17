// undefined FUN_080090dc(void)
// entry 0x80090dc


undefined4 FUN_080090dc(int param_1,uint param_2)

{
  if ((int)param_2 < 0xc00 - (param_1 >> 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


