// undefined FUN_080738b4(void)
// entry 0x80738b4


undefined4 FUN_080738b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58) + DAT_08073934;
  iVar6 = -0x80000000;
  iVar7 = iVar1 + DAT_08073938;
  iVar4 = *(int *)(param_1 + 0x58) + DAT_0807393c;
  iVar5 = 1;
  do {
    iVar2 = FUN_08008988(iVar7,iVar4,iVar4,iVar5,iVar1);
    if (iVar6 < iVar2 + 0xa00) {
      iVar6 = iVar2 + 0xa00;
    }
    iVar4 = iVar4 + 0x1000;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar1 = FUN_08008988(iVar7,iVar3 + 0xe00,iVar3,iVar5,iVar1);
  if (iVar6 < iVar1 + 0xa00) {
    iVar6 = iVar1 + 0xa00;
  }
  *(int *)(param_1 + 0x54) = iVar6;
  return in_lr;
}


