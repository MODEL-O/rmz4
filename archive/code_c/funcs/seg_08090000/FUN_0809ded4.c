// undefined FUN_0809ded4(void)
// entry 0x809ded4


undefined8 FUN_0809ded4(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0xc00;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = -0xc00;
  }
  iVar3 = iVar3 + *(int *)(param_1 + 0x54);
  sVar1 = FUN_08007c7c(iVar3,*(int *)(param_1 + 0x58) + 0x800);
  if (((sVar1 == 0) || (sVar1 == 0xf)) ||
     (sVar1 = FUN_08007c7c(iVar3,*(int *)(param_1 + 0x58) + DAT_0809df28), sVar1 == 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


