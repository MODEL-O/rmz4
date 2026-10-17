// undefined FUN_0801e608(void)
// entry 0x801e608


undefined8 FUN_0801e608(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (DAT_0801e62c < iVar2) {
    if ((DAT_0801e634 < (uint)(iVar2 + DAT_0801e630)) || (param_1[1] <= DAT_0801e638)) {
      uVar1 = 3;
    }
    else {
      uVar1 = 4;
    }
    goto LAB_0801e692;
  }
  if (DAT_0801e668 < iVar2) {
    if (DAT_0801e66c < param_1[1]) {
      if (DAT_0801e688 < iVar2) {
        uVar1 = 7;
        goto LAB_0801e692;
      }
    }
    else if ((DAT_0801e670 < iVar2) || (param_1[1] <= DAT_0801e674)) {
      if (DAT_0801e678 < *param_1) {
        uVar1 = 1;
        goto LAB_0801e692;
      }
      goto LAB_0801e690;
    }
    uVar1 = 2;
  }
  else {
LAB_0801e690:
    uVar1 = 0;
  }
LAB_0801e692:
  return CONCAT44(in_lr,uVar1);
}


