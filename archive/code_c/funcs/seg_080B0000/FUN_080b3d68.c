// undefined FUN_080b3d68(void)
// entry 0x80b3d68


undefined4 FUN_080b3d68(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0xb5) != '\0') && (*(int *)(param_1 + 0x2c) == 0)) &&
     ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = FUN_0802adac(0,param_1,DAT_080b3db0);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 != 0) {
      FUN_08005784(param_1 + 0x74,DAT_080b3db4);
      FUN_0801cf00(param_1,DAT_080b3db8);
    }
  }
  return in_lr;
}


