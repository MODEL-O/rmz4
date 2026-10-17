// undefined FUN_08009204(void)
// entry 0x8009204


undefined4 FUN_08009204(int param_1,uint param_2)

{
  int iVar1;
  if (0x000007ff < param_1) {
    if (0x00000bff < param_1) {
      param_2 = ~param_2;
      goto LAB_0800923e;
    }
    iVar1 = param_2 + 0xfffff000 + (param_1 + 0xfffff800) * 4;
    if (0 < iVar1) {
      param_2 = -iVar1;
      goto LAB_0800923e;
    }
  }
  param_2 = 0;
LAB_0800923e:
  return param_2;
}


