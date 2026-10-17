// undefined FUN_0801e558(void)
// entry 0x801e558


undefined8 FUN_0801e558(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (DAT_0801e568 < iVar2) {
    uVar1 = 3;
  }
  else if (DAT_0801e578 < iVar2) {
    uVar1 = 2;
  }
  else if (DAT_0801e588 < iVar2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


