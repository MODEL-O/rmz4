// undefined FUN_08088db4(void)
// entry 0x8088db4


undefined8 FUN_08088db4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x54) + param_2;
  iVar3 = *(int *)(param_1 + 0x58) + (*(byte *)(param_1 + 10) >> 5 & 1) * 0xc00;
  iVar7 = iVar6;
  if (param_2 < 0) {
    iVar4 = iVar6 + DAT_08088e44;
    iVar8 = 0;
    iVar5 = iVar3;
    do {
      sVar1 = FUN_08007c7c(iVar4,iVar5);
      if (sVar1 != 0) {
        iVar2 = FUN_08008988(iVar4,iVar5);
        if (iVar7 < iVar2 + 0x800) {
          iVar7 = iVar2 + 0x800;
        }
      }
      iVar5 = iVar5 + DAT_08088e48;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    iVar3 = DAT_08088e4c + iVar3;
    sVar1 = FUN_08007c7c(iVar4,iVar3);
    if (sVar1 == 0) goto LAB_08088eb0;
    iVar3 = FUN_08008988(iVar4,iVar3);
    iVar3 = iVar3 + 0x800;
    if (iVar3 <= iVar7) goto LAB_08088eb0;
  }
  else {
    iVar4 = iVar6 + 0x800;
    iVar8 = 0;
    iVar5 = iVar3;
    do {
      sVar1 = FUN_08007c7c(iVar4,iVar5);
      if (sVar1 != 0) {
        iVar2 = FUN_08008868(iVar4,iVar5);
        if (iVar2 + DAT_08088ec0 < iVar7) {
          iVar7 = iVar2 + DAT_08088ec0;
        }
      }
      iVar5 = iVar5 + DAT_08088ec4;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    iVar3 = DAT_08088ec8 + iVar3;
    sVar1 = FUN_08007c7c(iVar4,iVar3);
    if (sVar1 == 0) goto LAB_08088eb0;
    iVar3 = FUN_08008868(iVar4,iVar3);
    iVar3 = iVar3 + DAT_08088ec0;
    if (iVar7 <= iVar3) goto LAB_08088eb0;
  }
  iVar7 = iVar3;
LAB_08088eb0:
  *(int *)(param_1 + 0x54) = iVar7;
  return CONCAT44(in_lr,(uint)(iVar7 != iVar6));
}


