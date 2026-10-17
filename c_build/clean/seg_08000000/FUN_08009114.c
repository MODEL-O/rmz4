// undefined FUN_08009114(void)
// entry 0x8009114


undefined4 FUN_08009114(int param_1,uint param_2)

{
  if ((int)param_2 < 0x400 - (param_1 >> 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


