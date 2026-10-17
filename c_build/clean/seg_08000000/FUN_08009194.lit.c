// undefined FUN_08009194(void)
// entry 0x8009194


undefined4 FUN_08009194(int param_1,uint param_2)

{
  int iVar1;
  if (0x000003ff < param_1) {
    param_2 = ~param_2;
  }
  else {
    iVar1 = param_2 + 0xfffff000 + param_1 * 4;
    if (iVar1 < 1) {
      param_2 = 0;
    }
    else {
      param_2 = -iVar1;
    }
  }
  return param_2;
}


