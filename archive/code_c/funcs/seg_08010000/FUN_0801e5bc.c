// undefined FUN_0801e5bc(void)
// entry 0x801e5bc


undefined8 FUN_0801e5bc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (DAT_0801e5d4 < (uint)(iVar2 + DAT_0801e5d0)) {
    if (DAT_0801e5ec < (uint)(iVar2 + DAT_0801e5e8)) {
      if (DAT_0801e5ec < (uint)(iVar2 + DAT_0801e5fc)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 3;
  }
  return CONCAT44(in_lr,uVar1);
}


