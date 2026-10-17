// undefined FUN_0807371c(void)
// entry 0x807371c


undefined8 FUN_0807371c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar4 = *(int *)(param_1 + 0x58) + DAT_0807376c;
  iVar5 = iVar3 + DAT_08073770;
  iVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x58) + DAT_08073774;
  do {
    sVar1 = FUN_08007c7c(iVar5,iVar6,iVar3,iVar4,iVar3);
    if (sVar1 != 0) goto LAB_08073778;
    iVar6 = iVar6 + 0x1000;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  sVar1 = FUN_08007c7c(iVar5,iVar4 + 0xe00);
  if (sVar1 == 0) {
    uVar2 = 0;
  }
  else {
LAB_08073778:
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}


