// undefined FUN_080b0c7c(void)
// entry 0x80b0c7c


undefined4 FUN_080b0c7c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x12) == -1) {
      FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x11) * 0x30 + DAT_080b0cc8);
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_080b0ca0);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return in_lr;
}


