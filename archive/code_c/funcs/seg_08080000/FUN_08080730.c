// undefined FUN_08080730(void)
// entry 0x8080730


undefined8 FUN_08080730(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54);
  sVar1 = FUN_08007020(iVar3,*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    iVar3 = iVar3 + DAT_08080780;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = iVar3 + 0x4000;
    }
    iVar4 = *(int *)(param_1 + 0x58);
    sVar1 = FUN_08007c7c(iVar3,iVar4 + DAT_08080784);
    if (sVar1 == 1) {
      sVar1 = FUN_08007c7c(iVar3,iVar4 + DAT_08080788);
      if (sVar1 == 0) {
LAB_080807b0:
        uVar2 = 1;
        goto LAB_080807b6;
      }
    }
    else {
      sVar1 = FUN_08007c7c(iVar3,iVar4 + 0x800);
      if (sVar1 != 0) goto LAB_080807b4;
      sVar1 = FUN_08007c7c(iVar3,iVar4 + 0x4800);
      if (sVar1 != 0) goto LAB_080807b0;
    }
    uVar2 = 2;
  }
  else {
LAB_080807b4:
    uVar2 = 0;
  }
LAB_080807b6:
  return CONCAT44(in_lr,uVar2);
}


