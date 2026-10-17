// undefined FUN_080b11b8(void)
// entry 0x80b11b8


undefined4 FUN_080b11b8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_080b11e8;
  FUN_08005784(param_1 + 0x74,DAT_080b11e8);
  iVar2 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0x28));
  if (iVar2 != 0) {
    FUN_08005784(param_1 + 0x74,iVar1 + -0x18);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return in_lr;
}


