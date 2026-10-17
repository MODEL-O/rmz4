// undefined FUN_080fe0e0(void)
// entry 0x80fe0e0


undefined4 FUN_080fe0e0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar2 = DAT_080fe1a8;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_080fe1a8 + 0x38);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x3c);
  if (*(char *)(param_1 + 0xd) != '\0') {
    iVar2 = *(int *)(param_1 + 100);
    iVar6 = *(int *)(param_1 + 0x68);
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x60);
    sVar1 = FUN_080146bc(iVar2,iVar6);
    if (sVar1 != 0) {
      FUN_080fe400(param_1,iVar2,iVar6);
    }
    iVar5 = iVar2 + iVar4;
    iVar7 = iVar6 + iVar3;
    sVar1 = FUN_080146bc(iVar5,iVar7);
    if (sVar1 != 0) {
      FUN_080fe400(param_1,iVar5,iVar7);
    }
    iVar6 = iVar6 - iVar3;
    sVar1 = FUN_080146bc(iVar5,iVar6);
    if (sVar1 != 0) {
      FUN_080fe400(param_1,iVar5,iVar6);
    }
    iVar2 = iVar2 - iVar4;
    sVar1 = FUN_080146bc(iVar2,iVar7);
    if (sVar1 != 0) {
      FUN_080fe400(param_1,iVar2,iVar7);
    }
    sVar1 = FUN_080146bc(iVar2,iVar6);
    if (sVar1 != 0) {
      FUN_080fe400(param_1,iVar2,iVar6);
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}


