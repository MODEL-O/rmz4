// undefined FUN_0801e850(void)
// entry 0x801e850


undefined8 FUN_0801e850(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (DAT_0801e864 < *param_1) {
    if (DAT_0801e868 < *param_1) {
      uVar1 = 1;
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


