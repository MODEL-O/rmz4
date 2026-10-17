// undefined FUN_08088c9c(void)
// entry 0x8088c9c


undefined8 FUN_08088c9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  FUN_08088db4(param_1,*(undefined4 *)(param_1 + 0x5c));
  iVar1 = FUN_08088ee0(param_1,*(undefined4 *)(param_1 + 0x60));
  if (iVar1 != 0) {
    if (-1 < *(int *)(param_1 + 0x60)) {
      uVar2 = 1;
      goto LAB_08088cd2;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  uVar2 = 0;
LAB_08088cd2:
  return CONCAT44(in_lr,uVar2);
}


