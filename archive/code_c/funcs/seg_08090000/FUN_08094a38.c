// undefined FUN_08094a38(void)
// entry 0x8094a38


undefined4 FUN_08094a38(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar2 = FUN_08094eb4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x58) + 0x800;
    iVar4 = *(int *)(param_1 + 0x54) + DAT_08094b0c;
    iVar8 = 0;
    iVar7 = iVar4;
    iVar3 = DAT_08094b10;
    do {
      sVar1 = FUN_08007c7c(iVar7,iVar2);
      if ((((sVar1 != 0) && (uVar5 = FUN_08007c7c(iVar7,iVar2), (uVar5 & 0xf) != 0xf)) &&
          (iVar6 = FUN_08007db4(iVar7,iVar2), iVar6 < 0)) && (iVar6 = iVar6 + iVar2, iVar6 < iVar3))
      {
        iVar2 = iVar6;
        iVar3 = iVar6;
      }
      iVar7 = iVar7 + 0x1000;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    iVar4 = iVar4 + 0xe00;
    sVar1 = FUN_08007c7c(iVar4,iVar2);
    if (((sVar1 != 0) && (uVar5 = FUN_08007c7c(iVar4,iVar2), (uVar5 & 0xf) != 0xf)) &&
       ((iVar7 = FUN_08007db4(iVar4,iVar2), iVar7 < 0 && (iVar7 + iVar2 < iVar3)))) {
      iVar3 = iVar7 + iVar2;
    }
    if (iVar3 == DAT_08094b10) {
      return in_lr;
    }
  }
  else {
    iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  *(int *)(param_1 + 0x58) = iVar3;
  return in_lr;
}


