// undefined FUN_080737e8(void)
// entry 0x80737e8


undefined8 FUN_080737e8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar4 = *(int *)(param_1 + 0x58) + DAT_0807383c;
  iVar6 = 0;
  iVar5 = iVar3 + DAT_08073840;
  do {
    sVar1 = FUN_08007c7c(iVar5,iVar4);
    if (sVar1 != 0) goto LAB_08073844;
    iVar5 = iVar5 + 0x1000;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  sVar1 = FUN_08007c7c(iVar3 + 0xa00,iVar4);
  if (sVar1 == 0) {
    uVar2 = 0;
  }
  else {
LAB_08073844:
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}


