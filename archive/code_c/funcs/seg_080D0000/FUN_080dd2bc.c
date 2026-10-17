// undefined FUN_080dd2bc(void)
// entry 0x80dd2bc


undefined4 FUN_080dd2bc(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  FUN_0801cff0();
  cVar1 = *(char *)(param_1 + 0x12) + *(char *)(param_1 + 0x13);
  *(char *)(param_1 + 0x13) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  sVar3 = FUN_08007c7c(iVar4,*(undefined4 *)(param_1 + 0x58));
  if (sVar3 != 0) {
    *(int *)(param_1 + 0x5c) = -(*(int *)(param_1 + 0x5c) >> 1);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  pbVar7 = (byte *)(param_1 + 0x7d);
  if ((0x40 < *(int *)(param_1 + 0x60)) &&
     (sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar3 != 0)) {
    uVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(int *)(param_1 + 0x60) = -(*(int *)(param_1 + 0x60) >> 1);
    *pbVar7 = *pbVar7 + 1;
  }
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (2 < *pbVar7) {
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dd374);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 8);
    FUN_080dcdf0(param_1);
  }
  return in_lr;
}


