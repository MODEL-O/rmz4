// undefined FUN_08073a68(void)
// entry 0x8073a68


undefined4 FUN_08073a68(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar6 = iVar3 + DAT_08073b04;
  iVar4 = iVar6 + 0xe00;
  iVar7 = iVar1 + DAT_08073b0c;
  iVar8 = 1;
  iVar5 = DAT_08073b08;
  do {
    iVar2 = FUN_08008534(iVar7,iVar4);
    if (iVar2 + -0xe01 < iVar5) {
      iVar5 = iVar2 + -0xe01;
    }
    iVar7 = iVar7 + 0x1000;
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  iVar1 = FUN_08008534(iVar1 + 0xa00,iVar4);
  if (iVar1 + -0xe01 < iVar5) {
    iVar5 = iVar1 + -0xe01;
  }
  *(int *)(param_1 + 0x58) = iVar5 + (iVar3 - iVar6);
  return in_lr;
}


