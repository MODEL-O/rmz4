// undefined FUN_08094c64(void)
// entry 0x8094c64


undefined4 FUN_08094c64(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = DAT_08094cfc;
  param_2 = param_2 + 0x700;
  iVar4 = *(int *)(param_1 + 0x58) + DAT_08094cf8;
  uVar1 = FUN_08007020(*(undefined4 *)(param_1 + 0x54));
  if ((ushort)((uVar1 & 0xf) - 2) < 6) {
    iVar5 = 2;
    do {
      uVar1 = FUN_08007020(param_2,iVar4);
      if (((((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) &&
          ((5 < (ushort)((uVar1 & 0xf) - 2) && (iVar2 = FUN_0800816c(param_2,iVar4), iVar2 < 0))))
         && (iVar2 = iVar2 + param_2, iVar2 < iVar7)) {
        param_2 = iVar2;
        iVar7 = iVar2;
      }
      iVar4 = iVar4 + 0x1000;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    iVar6 = 2;
    iVar5 = param_2;
    iVar2 = iVar4;
    do {
      uVar1 = FUN_08007020(iVar5,iVar2);
      if ((((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) &&
         ((iVar3 = FUN_0800816c(iVar5,iVar2), iVar3 < 0 && (iVar3 = iVar3 + iVar5, iVar3 < iVar7))))
      {
        iVar5 = iVar3;
        iVar7 = iVar3;
      }
      iVar2 = iVar2 + 0x1000;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar4 = iVar4 + DAT_08094da8;
    uVar1 = FUN_08007c7c(param_2,iVar4);
    if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) &&
       (((uVar1 & 0xf) != 0xf &&
        ((iVar4 = FUN_0800816c(param_2,iVar4), iVar4 < 0 && (iVar4 + param_2 < iVar7)))))) {
      iVar7 = iVar4 + param_2;
    }
  }
  if (iVar7 != DAT_08094dac) {
    *(int *)(param_1 + 0x54) = DAT_08094db0 + iVar7;
  }
  return in_lr;
}


