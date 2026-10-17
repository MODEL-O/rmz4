// undefined FUN_080b2a4c(void)
// entry 0x80b2a4c


undefined4 FUN_080b2a4c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0xc0) == 0)) &&
     ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = FUN_0802adac(0,param_1,DAT_080b2aa4);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      if (*(byte *)(param_1 + 0x11) < 2) {
        local_14 = *(undefined4 *)(param_1 + 0x54);
        local_10 = *(int *)(param_1 + 0x58) + DAT_080b2aa8;
        FUN_080d0c88(2,&local_14);
        FUN_0801cf00(param_1,DAT_080b2aac);
      }
      else {
        FUN_0801cf00(param_1,DAT_080b2acc);
      }
      FUN_08005784(param_1 + 0x74,DAT_080b2ad0);
    }
  }
  return in_lr;
}


