// undefined FUN_0801e790(void)
// entry 0x801e790


undefined8 FUN_0801e790(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (DAT_0801e7b0 < *param_1) {
    if (DAT_0801e7b4 < *param_1) {
      uVar1 = 1;
    }
    else if (DAT_0801e7b8 < param_1[1]) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


