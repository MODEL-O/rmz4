// undefined FUN_08009204(void)
// entry 0x8009204


undefined8 FUN_08009204(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_08009218 < param_1) {
    if (DAT_0800921c < param_1) {
      param_2 = ~param_2;
      goto LAB_0800923e;
    }
    iVar1 = param_2 + DAT_08009234 + (param_1 + DAT_08009238) * 4;
    if (0 < iVar1) {
      param_2 = -iVar1;
      goto LAB_0800923e;
    }
  }
  param_2 = 0;
LAB_0800923e:
  return CONCAT44(in_lr,param_2);
}


