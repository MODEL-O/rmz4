// undefined FUN_08094b14(void)
// entry 0x8094b14


undefined4 FUN_08094b14(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  param_2 = param_2 + DAT_08094bac;
  iVar5 = *(int *)(param_1 + 0x58) + DAT_08094bb0;
  iVar4 = -0x80000000;
  uVar1 = FUN_08007020(*(undefined4 *)(param_1 + 0x54));
  if ((ushort)((uVar1 & 0xf) - 8) < 6) {
    iVar6 = 2;
    do {
      uVar1 = FUN_08007020(param_2,iVar5);
      if (((((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) &&
          ((5 < (ushort)((uVar1 & 0xf) - 8) && (iVar2 = FUN_0800834c(param_2,iVar5), 0 < iVar2))))
         && (iVar2 = iVar2 + param_2, iVar4 < iVar2)) {
        param_2 = iVar2;
        iVar4 = iVar2;
      }
      iVar5 = iVar5 + 0x1000;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    iVar7 = 2;
    iVar6 = param_2;
    iVar2 = iVar5;
    do {
      uVar1 = FUN_08007020(iVar6,iVar2);
      if ((((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) &&
         ((iVar3 = FUN_0800834c(iVar6,iVar2), 0 < iVar3 && (iVar3 = iVar3 + iVar6, iVar4 < iVar3))))
      {
        iVar6 = iVar3;
        iVar4 = iVar3;
      }
      iVar2 = iVar2 + 0x1000;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar5 = iVar5 + DAT_08094c60;
    uVar1 = FUN_08007c7c(param_2,iVar5);
    if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) &&
       (((uVar1 & 0xf) != 0xf &&
        ((iVar5 = FUN_0800834c(param_2,iVar5), 0 < iVar5 && (iVar4 < iVar5 + param_2)))))) {
      iVar4 = iVar5 + param_2;
    }
  }
  if (iVar4 != -0x80000000) {
    *(int *)(param_1 + 0x54) = iVar4 + 0x700;
  }
  return in_lr;
}


