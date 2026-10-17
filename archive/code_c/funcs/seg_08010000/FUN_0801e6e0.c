// undefined FUN_0801e6e0(void)
// entry 0x801e6e0


undefined8 FUN_0801e6e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (DAT_0801e6f0 < iVar2) {
    if (DAT_0801e700 < iVar2) {
      if (DAT_0801e718 < (uint)(iVar2 + DAT_0801e714)) {
        uVar1 = 2;
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


