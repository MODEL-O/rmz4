// undefined FUN_080865d4(void)
// entry 0x80865d4


undefined4 FUN_080865d4(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08086638);
    FUN_08086a14(param_1,1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_08086a48(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = FUN_08007c7c(iVar4,iVar3);
  if ((sVar1 == 0) || (uVar2 = FUN_08007c7c(iVar4,iVar3), (uVar2 & 0xf) == 0xf)) {
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = iVar3;
  }
  else {
    *(undefined1 *)(param_1 + 0xb7) = 1;
  }
  return in_lr;
}


