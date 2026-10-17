// undefined FUN_0801e698(void)
// entry 0x801e698


undefined8 FUN_0801e698(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (DAT_0801e6a8 < iVar2) {
    uVar1 = 3;
  }
  else if (DAT_0801e6bc < iVar2) {
    if (DAT_0801e6c0 < iVar2) {
      uVar1 = 7;
    }
    else {
      uVar1 = 2;
    }
  }
  else if (DAT_0801e6d4 < iVar2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


