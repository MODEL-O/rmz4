// undefined FUN_080b0bd4(void)
// entry 0x80b0bd4


undefined4 FUN_080b0bd4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = FUN_0802adac(0,param_1,DAT_080b0c14);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x12) == -1) {
        FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x11) * 0x30 + DAT_080b0c38);
      }
      else {
        FUN_08005784(param_1 + 0x74,DAT_080b0c18);
      }
    }
  }
  return in_lr;
}


