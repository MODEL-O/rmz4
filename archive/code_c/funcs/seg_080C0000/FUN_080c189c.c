// undefined FUN_080c189c(void)
// entry 0x80c189c


undefined4 FUN_080c189c(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080c191c);
    *(undefined4 *)(param_1 + 0x60) = 0x400;
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(bool *)(param_1 + 0x13) = sVar1 == 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,DAT_080c1920);
  uVar5 = *(undefined4 *)(param_1 + 0x54);
  iVar4 = *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 0x13) == '\0') || (sVar1 = FUN_08007c7c(uVar5), sVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(int *)(param_1 + 0x58) = iVar4 + iVar2;
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c1924);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080c1934(param_1);
  }
  return in_lr;
}


