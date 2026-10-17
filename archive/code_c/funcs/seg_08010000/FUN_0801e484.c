// undefined FUN_0801e484(void)
// entry 0x801e484


undefined8 FUN_0801e484(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (((DAT_0801e4b0 < iVar2) && (DAT_0801e4b8 < (uint)(iVar2 + DAT_0801e4b4))) &&
     ((DAT_0801e4bc < param_1[1] || (iVar2 < 0xe1001)))) {
    if (DAT_0801e4cc < *param_1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 7;
  }
  return CONCAT44(in_lr,uVar1);
}


