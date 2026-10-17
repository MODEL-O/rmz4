// undefined FUN_080fe328(void)
// entry 0x80fe328


undefined4 FUN_080fe328(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar2 + 0xd) != '\0') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(iVar3 + 4);
  piVar6 = *(int **)(iVar3 + 8);
  if ((*(byte *)(*(int *)(iVar3 + 0x2c) + 10) & 0x10) == 0) {
    iVar3 = *piVar6 + (int)*(short *)(iVar5 + 0x10);
  }
  else {
    iVar3 = *piVar6 - (int)*(short *)(iVar5 + 0x10);
  }
  iVar7 = piVar6[1] + (int)*(short *)(iVar5 + 0x12);
  uVar4 = (uint)(*(ushort *)(iVar5 + 0x14) >> 1);
  uVar8 = (uint)(*(ushort *)(iVar5 + 0x16) >> 1);
  sVar1 = FUN_080146bc(iVar3,iVar7);
  if (sVar1 == 0) {
    sVar1 = FUN_080146bc(iVar3 + uVar4,iVar7 + uVar8);
    if (sVar1 == 0) {
      sVar1 = FUN_080146bc(iVar3 + uVar4,iVar7 - uVar8);
      if (sVar1 == 0) {
        sVar1 = FUN_080146bc(iVar3 - uVar4,iVar7 + uVar8);
        if ((sVar1 == 0) && (sVar1 = FUN_080146bc(iVar3 - uVar4,iVar7 - uVar8), sVar1 == 0))
        goto LAB_080fe3e0;
      }
    }
  }
  *(int *)(iVar2 + 100) = iVar3;
  *(int *)(iVar2 + 0x68) = iVar7;
  *(uint *)(iVar2 + 0x5c) = uVar4;
  *(uint *)(iVar2 + 0x60) = uVar8;
  *(undefined1 *)(iVar2 + 0xd) = 1;
LAB_080fe3e0:
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
  return in_lr;
}


