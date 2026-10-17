// undefined FUN_0801e594(void)
// entry 0x801e594


undefined8 FUN_0801e594(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (DAT_0801e5a4 < *param_1) {
    uVar1 = 2;
  }
  else if (param_1[1] < 0x1e001) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}


