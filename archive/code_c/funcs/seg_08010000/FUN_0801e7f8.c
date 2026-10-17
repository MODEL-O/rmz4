// undefined FUN_0801e7f8(void)
// entry 0x801e7f8


undefined8 FUN_0801e7f8(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (DAT_0801e818 < param_1[1]) {
    if (*param_1 <= DAT_0801e83c) {
      uVar1 = 0;
      goto LAB_0801e84a;
    }
    if (*param_1 <= DAT_0801e840) {
      uVar1 = 2;
      goto LAB_0801e84a;
    }
  }
  else if (param_1[1] <= DAT_0801e81c) {
    if (DAT_0801e820 < *param_1) {
      uVar1 = 3;
    }
    else {
      uVar1 = 7;
    }
    goto LAB_0801e84a;
  }
  uVar1 = 1;
LAB_0801e84a:
  return CONCAT44(in_lr,uVar1);
}


