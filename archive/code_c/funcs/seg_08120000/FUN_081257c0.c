// undefined FUN_081257c0(void)
// entry 0x81257c0


longlong FUN_081257c0(int param_1)

{
  int iVar1;
  uint in_lr;
  
  if ((*(short *)(param_1 + 6) != 0) &&
     (iVar1 = param_1 + DAT_08125818, (*(uint *)(iVar1 + 0x24) & 2) != 0)) {
    if ((*(int *)(iVar1 + 8) < *(int *)(iVar1 + 0x10)) || (*(int *)(iVar1 + 0x10) == 0)) {
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 8);
    }
    if ((*(uint *)(param_1 + DAT_08125818 + 8) < *(uint *)(DAT_0812581c + 0x2c)) ||
       (*(uint *)(DAT_0812581c + 0x2c) == 0)) {
      FUN_08006a6c(4,*(undefined4 *)(param_1 + DAT_08125818 + 0x10));
    }
  }
  *(uint *)(param_1 + DAT_08125818 + 0x24) = *(uint *)(param_1 + DAT_08125818 + 0x24) | 4;
  return (ulonglong)in_lr << 0x20;
}


