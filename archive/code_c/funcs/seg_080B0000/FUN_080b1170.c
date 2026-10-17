// undefined FUN_080b1170(void)
// entry 0x80b1170


undefined4 FUN_080b1170(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x28) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = FUN_0802adac(0,param_1,DAT_080b11b0);
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 != 0) {
      FUN_08005784(param_1 + 0x74,DAT_080b11b4);
      *(undefined1 *)(param_1 + 0xc2) = 0xf;
    }
  }
  return in_lr;
}


