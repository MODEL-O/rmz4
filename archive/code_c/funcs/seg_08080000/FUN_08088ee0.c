// undefined FUN_08088ee0(void)
// entry 0x8088ee0


undefined8 FUN_08088ee0(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  uVar2 = *(byte *)(param_1 + 10) >> 5 & 1;
  iVar7 = *(int *)(param_1 + 0x58) + param_2;
  iVar5 = DAT_08088f58 + *(int *)(param_1 + 0x54);
  iVar8 = iVar7;
  if (param_2 < 0) {
    uVar2 = uVar2 + 1 & 1;
    iVar6 = iVar7 + uVar2 * -0xc00;
    iVar9 = 1;
    do {
      sVar1 = FUN_08007c7c(iVar5,iVar6);
      if (sVar1 != 0) {
        iVar3 = FUN_08008748(iVar5,iVar6);
        iVar3 = iVar3 + uVar2 * 0xc00;
        if (iVar8 < iVar3) {
          iVar8 = iVar3;
        }
      }
      iVar5 = iVar5 + 0x1000;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  else {
    iVar9 = iVar7 + uVar2 * 0xc00;
    iVar3 = 1;
    iVar6 = iVar5;
    do {
      sVar1 = FUN_08007c7c(iVar6,iVar9);
      if (sVar1 != 0) {
        iVar4 = FUN_08008534(iVar6,iVar9);
        iVar4 = iVar4 + uVar2 * -0xc00;
        if (iVar4 < iVar8) {
          iVar8 = iVar4;
        }
      }
      iVar6 = iVar6 + 0x1000;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    sVar1 = FUN_08007c7c(iVar5 + 0x1000,iVar9);
    if (sVar1 != 0) {
      iVar5 = FUN_08008534(iVar5 + 0x1000,iVar9);
      iVar5 = iVar5 + uVar2 * -0xc00;
      if (iVar5 < iVar8) {
        iVar8 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x58) = iVar8;
  return CONCAT44(in_lr,(uint)(iVar8 != iVar7));
}


