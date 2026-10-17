// undefined FUN_080bfc18(void)
// entry 0x80bfc18


undefined4 FUN_080bfc18(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xbc) = iVar1 + -1;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080bfc40));
  return in_lr;
}


