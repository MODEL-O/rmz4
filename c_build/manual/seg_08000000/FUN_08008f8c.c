int FUN_08008f8c(int param_1,int param_2)
{
  param_2 = param_2 - (param_1 >> 2);
  if (param_2 < 1) {
    param_2 = 0;
  } else {
    param_2 = -param_2;
  }
  return param_2;
}
