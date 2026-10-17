// undefined FUN_080f56c4(void)
// entry 0x80f56c4


undefined4 FUN_080f56c4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = 0;
  FUN_0801cff0();
  iVar5 = *(int *)((uint)*(byte *)(param_1 + 0xb8) * 8 + *(int *)(param_1 + 0xb4));
  iVar2 = *(int *)(param_1 + 0x54);
  iVar1 = iVar5 - iVar2;
  iVar4 = iVar1;
  if (iVar1 < 0) {
    iVar4 = -iVar1;
  }
  if (iVar4 < 0x101) {
    *(int *)(param_1 + 0x54) = iVar5;
    iVar7 = 1;
  }
  else if (iVar1 < 0) {
    *(int *)(param_1 + 0x54) = iVar2 + DAT_080f5700;
  }
  else {
    *(int *)(param_1 + 0x54) = iVar2 + 0x100;
  }
  pbVar6 = (byte *)(param_1 + 0xb8);
  iVar2 = *(int *)((uint)*pbVar6 * 8 + *(int *)(param_1 + 0xb4) + 4);
  iVar1 = iVar2 - *(int *)(param_1 + 0x58);
  iVar4 = iVar1;
  if (iVar1 < 0) {
    iVar4 = -iVar1;
  }
  if (iVar4 < 0x101) {
    *(int *)(param_1 + 0x58) = iVar2;
    iVar7 = iVar7 + 1;
  }
  else {
    iVar4 = 0x100;
    if (iVar1 < 0) {
      iVar4 = DAT_080f5744;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
  }
  if (iVar7 == 2) {
    *pbVar6 = *pbVar6 + 1;
    piVar3 = (int *)((uint)*pbVar6 * 8 + *(int *)(param_1 + 0xb4));
    if ((*piVar3 == 0) && (piVar3[1] == 0)) {
      *pbVar6 = 0;
    }
  }
  return in_lr;
}


