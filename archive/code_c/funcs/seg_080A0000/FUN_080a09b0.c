// undefined FUN_080a09b0(void)
// entry 0x80a09b0


undefined8 FUN_080a09b0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  uint local_28;
  
  iVar2 = *(int *)(param_1 + 0x54);
  iVar4 = *(int *)(param_1 + 0x58) + DAT_080a0a24;
  uVar5 = iVar2 + param_2;
  if (param_2 < 0) {
    iVar6 = uVar5 + DAT_080a0a28;
    iVar7 = 0;
    do {
      iVar3 = iVar4 + -0x800 + iVar7 * 0x1000;
      sVar1 = FUN_08007c7c(iVar6,iVar3);
      if (sVar1 != 0) {
        iVar3 = FUN_08008988(iVar6,iVar3);
        if ((int)uVar5 < (int)(iVar3 + 0xc00U)) {
          uVar5 = iVar3 + 0xc00U;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  else {
    iVar6 = uVar5 + 0xc00;
    iVar7 = 0;
    do {
      iVar3 = iVar4 + -0x800 + iVar7 * 0x1000;
      sVar1 = FUN_08007c7c(iVar6,iVar3);
      if (sVar1 != 0) {
        iVar3 = FUN_08008868(iVar6,iVar3);
        if ((int)(iVar3 - 0xc00U) < (int)uVar5) {
          uVar5 = iVar3 - 0xc00U;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  local_28 = param_2 + iVar2;
  *(uint *)(param_1 + 0x54) = uVar5;
  return CONCAT44(in_lr,(-(local_28 ^ uVar5) | local_28 ^ uVar5) >> 0x1f);
}


