// undefined FUN_080b0770(void)
// entry 0x80b0770


undefined4 FUN_080b0770(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*DAT_080b0798 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0x50) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


