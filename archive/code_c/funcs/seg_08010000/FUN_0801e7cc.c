// undefined FUN_0801e7cc(void)
// entry 0x801e7cc


undefined8 FUN_0801e7cc(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (DAT_0801e7dc < *param_1) {
    uVar1 = 2;
  }
  else if (DAT_0801e7ec < *param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


