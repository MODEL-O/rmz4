// undefined FUN_080a9c10(void)
// entry 0x80a9c10


undefined8 FUN_080a9c10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*DAT_080a9c30 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar2 < 0) {
    iVar2 = *(int *)(param_1 + 0x54) - *(int *)(*DAT_080a9c30 + 0x54);
  }
  if (iVar2 < 0x7801) {
    iVar2 = *(int *)(*DAT_080a9c30 + 0x58) - *(int *)(param_1 + 0x58);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x58) - *(int *)(*DAT_080a9c30 + 0x58);
    }
    if (iVar2 < 0x5001) {
      uVar1 = 1;
      goto LAB_080a9c64;
    }
  }
  uVar1 = 0;
LAB_080a9c64:
  return CONCAT44(in_lr,uVar1);
}


