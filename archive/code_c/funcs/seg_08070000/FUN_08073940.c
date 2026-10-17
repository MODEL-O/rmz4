// undefined FUN_08073940(void)
// entry 0x8073940


undefined4 FUN_08073940(int param_1)

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
  iVar3 = *(int *)(param_1 + 0x58) + DAT_080739c0;
  iVar7 = iVar1 + 0xa00;
  iVar4 = *(int *)(param_1 + 0x58) + DAT_080739c8;
  iVar5 = 1;
  iVar6 = DAT_080739c4;
  do {
    iVar2 = FUN_08008868(iVar7,iVar4,iVar4,iVar5,iVar1);
    if (iVar2 + -0xa00 < iVar6) {
      iVar6 = iVar2 + -0xa00;
    }
    iVar4 = iVar4 + 0x1000;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar1 = FUN_08008868(iVar7,iVar3 + 0xe00,iVar3,iVar5,iVar1);
  if (iVar1 + -0xa00 < iVar6) {
    iVar6 = iVar1 + -0xa00;
  }
  *(int *)(param_1 + 0x54) = iVar6;
  return in_lr;
}


