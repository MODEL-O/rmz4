// undefined FUN_080badc8(void)
// entry 0x80badc8


undefined4 FUN_080badc8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080bae4c);
    FUN_0801cf00(param_1,DAT_080bae50);
    iVar1 = uVar2 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar1 * 0x300;
    *(int *)(param_1 + 0x68) = *(int *)(iVar3 + 0xb4) + iVar1 * 0x6000 + 0x7800;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801d134(param_1);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (-1 < (int)((iVar3 - *(int *)(param_1 + 0x68)) * (uVar2 * 2 + -1))) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


