// undefined FUN_08008f58(void)
// entry 0x8008f58


undefined4 FUN_08008f58(int param_1,int param_2)

{
  param_2 = param_2 - (param_1 >> 1);
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    param_2 = -param_2;
  }
  return param_2;
}


