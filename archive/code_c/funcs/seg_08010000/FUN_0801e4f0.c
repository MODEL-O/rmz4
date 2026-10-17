// undefined FUN_0801e4f0(void)
// entry 0x801e4f0


undefined8 FUN_0801e4f0(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0x146001) {
    if (DAT_0801e50c < *param_1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}


