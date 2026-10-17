// undefined FUN_080739cc(void)
// entry 0x80739cc


undefined4 FUN_080739cc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = DAT_08073a5c;
  iVar2 = *(int *)(param_1 + 0x54);
  iVar6 = -0x80000000;
  iVar7 = *(int *)(param_1 + 0x58) + DAT_08073a60;
  iVar4 = iVar2 + DAT_08073a64;
  iVar5 = 1;
  do {
    iVar3 = FUN_08008748(iVar4,iVar7);
    if (iVar6 < iVar3 + 0xe00) {
      iVar6 = iVar3 + 0xe00;
    }
    iVar4 = iVar4 + 0x1000;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar2 = FUN_08008748(iVar2 + 0xa00,iVar7);
  if (iVar6 < iVar2 + 0xe00) {
    iVar6 = iVar2 + 0xe00;
  }
  *(int *)(param_1 + 0x58) = iVar6 - iVar1;
  return in_lr;
}


