// undefined FUN_081039e4(void)
// entry 0x81039e4


undefined4 FUN_081039e4(int param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(iVar4 + 4);
  piVar6 = *(int **)(iVar4 + 8);
  if (*(char *)(iVar5 + 1) == '\0') {
    iVar4 = *param_2;
    iVar7 = param_2[1];
  }
  else {
    if ((*(byte *)(*(int *)(iVar4 + 0x2c) + 10) & 0x10) == 0) {
      iVar4 = *piVar6 + (int)*(short *)(iVar5 + 0x10);
    }
    else {
      iVar4 = *piVar6 - (int)*(short *)(iVar5 + 0x10);
    }
    iVar7 = piVar6[1] + (int)*(short *)(iVar5 + 0x12);
  }
  uVar2 = (uint)(*(ushort *)(iVar5 + 0x14) >> 1);
  uVar3 = (uint)(*(ushort *)(iVar5 + 0x16) >> 1);
  sVar1 = FUN_0801a728(iVar4,iVar7);
  iVar5 = iVar4;
  if (sVar1 == 0) {
    iVar5 = iVar4 + uVar2;
    iVar8 = iVar7 + uVar3;
    sVar1 = FUN_0801a728(iVar5,iVar8);
    if (sVar1 != 0) {
LAB_08103a84:
      FUN_0801a788(iVar5,iVar8);
      return in_lr;
    }
    iVar7 = iVar7 - uVar3;
    sVar1 = FUN_0801a728(iVar5,iVar7);
    if (sVar1 == 0) {
      iVar5 = iVar4 - uVar2;
      sVar1 = FUN_0801a728(iVar5,iVar8);
      if (sVar1 != 0) goto LAB_08103a84;
      sVar1 = FUN_0801a728(iVar5,iVar7);
      if (sVar1 == 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
        return in_lr;
      }
    }
  }
  FUN_0801a788(iVar5,iVar7);
  return in_lr;
}


