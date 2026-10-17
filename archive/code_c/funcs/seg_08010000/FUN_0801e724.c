// undefined FUN_0801e724(void)
// entry 0x801e724


undefined8 FUN_0801e724(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (DAT_0801e734 < param_1[1]) {
    uVar1 = 3;
  }
  else if (DAT_0801e744 < *param_1) {
    uVar1 = 2;
  }
  else if (DAT_0801e754 < *param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


