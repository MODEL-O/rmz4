// undefined FUN_08009130(void)
// entry 0x8009130


undefined4 FUN_08009130(int param_1,uint param_2)

{
  int iVar1;
  if (0x000007ff < param_1) {
    param_2 = ~param_2;
  }
  else {
    iVar1 = param_2 + 0xfffff000 + param_1 * 2;
    if (iVar1 < 1) {
      param_2 = 0;
    }
    else {
      param_2 = -iVar1;
    }
  }
  return param_2;
}


