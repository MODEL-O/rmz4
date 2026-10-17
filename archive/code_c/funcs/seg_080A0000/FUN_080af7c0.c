// undefined FUN_080af7c0(void)
// entry 0x80af7c0


undefined4 FUN_080af7c0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0x11) == '\0') && (piVar2 = (int *)(param_1 + 0xc0), *piVar2 == 0)) &&
     ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = FUN_0802adac(0,param_1,DAT_080af80c);
    *piVar2 = iVar1;
    if (iVar1 != 0) {
      FUN_08005784(param_1 + 0x74,DAT_080af810);
      *(int *)(*(int *)(param_1 + 0x2c) + 0xc0) = *piVar2;
    }
  }
  return in_lr;
}


