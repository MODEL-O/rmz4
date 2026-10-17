// undefined FUN_0801e760(void)
// entry 0x801e760


undefined8 FUN_0801e760(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (DAT_0801e770 < *param_1) {
    uVar1 = 2;
  }
  else if (DAT_0801e780 < *param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


