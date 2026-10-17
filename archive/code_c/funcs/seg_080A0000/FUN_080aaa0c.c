// undefined FUN_080aaa0c(void)
// entry 0x80aaa0c


undefined8 FUN_080aaa0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(int *)(*DAT_080aaa38 + 0x58) - *(int *)(param_1 + 0x58) >> 8) - 1U < 0x6f) {
    iVar1 = *(int *)(*DAT_080aaa38 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 0x20) {
      uVar2 = 1;
      goto LAB_080aaa3e;
    }
  }
  uVar2 = 0;
LAB_080aaa3e:
  return CONCAT44(in_lr,uVar2);
}


