// undefined FUN_080c926c(void)
// entry 0x80c926c


undefined4 FUN_080c926c(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *DAT_080c92cc;
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = FUN_08007c7c(iVar2 + *(int *)(param_1 + 100));
  if (sVar1 != 0) {
    FUN_08002b10(0x38);
    FUN_08005784(param_1 + 0x74,DAT_080c92d0);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c92d4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  if (iVar5 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar5 + 0x58) = uVar4;
  }
  return in_lr;
}


