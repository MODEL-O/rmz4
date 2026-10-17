// undefined FUN_080091c4(void)
// entry 0x80091c4


undefined4 FUN_080091c4(int param_1,uint param_2)

{
  int iVar1;
  if (0x000003ff < param_1) {
    if (0x000007ff < param_1) {
      param_2 = ~param_2;
      goto LAB_080091fe;
    }
    iVar1 = param_2 + 0xfffff000 + (param_1 + 0xfffffc00) * 4;
    if (0 < iVar1) {
      param_2 = -iVar1;
      goto LAB_080091fe;
    }
  }
  param_2 = 0;
LAB_080091fe:
  return param_2;
}


