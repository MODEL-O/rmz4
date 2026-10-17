// undefined FUN_080b5e88(void)
// entry 0x80b5e88


undefined4 FUN_080b5e88(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080b5f54);
    iVar3 = *(int *)(iVar5 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * 0x1d00;
    *(int *)(param_1 + 100) = iVar3;
    iVar5 = *(int *)(iVar5 + 0x58) + 0x900;
    *(int *)(param_1 + 0x68) = iVar5;
    iVar3 = iVar3 - *(int *)(param_1 + 0x54);
    iVar5 = iVar5 - *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x60) = iVar5;
    uVar2 = FUN_08128bf4(iVar3 * iVar3 + iVar5 * iVar5);
    iVar5 = (int)(uVar2 & 0xffff) >> 9;
    if ((uVar2 & 0xffff & DAT_080b5f58) != 0) {
      iVar5 = iVar5 + 1;
    }
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0xb8) = iVar5;
    *(int *)(param_1 + 0xb4) = iVar5;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  piVar4 = (int *)(param_1 + 0xb4);
  iVar5 = *piVar4;
  *piVar4 = iVar5 + -1;
  iVar5 = FUN_08128fb8(*(int *)(param_1 + 0x5c) * (iVar5 + -1),*(undefined4 *)(param_1 + 0xb8));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) - iVar5;
  iVar5 = FUN_08128fb8(*(int *)(param_1 + 0x60) * *piVar4,*(undefined4 *)(param_1 + 0xb8));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - iVar5;
  if (*piVar4 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


