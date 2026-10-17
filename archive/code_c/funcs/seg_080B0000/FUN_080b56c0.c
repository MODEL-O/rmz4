// undefined FUN_080b56c0(void)
// entry 0x80b56c0


undefined4 FUN_080b56c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x54) - *(int *)(*DAT_080b56dc + 0x54);
  if (iVar2 < 0) {
    if (DAT_080b571c < *(int *)(*DAT_080b56dc + 0x54) - *(int *)(param_1 + 0x54)) {
      return in_lr;
    }
  }
  else if (DAT_080b56e0 < iVar2) {
    return in_lr;
  }
  uVar1 = *DAT_080b5720 * DAT_080b5724 + DAT_080b5728;
  *DAT_080b5720 = uVar1 & 0x7fffffff;
  if (((uVar1 & 0x7fffffff) >> 0x10 & 7) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xb6) = 1;
  }
  return in_lr;
}


