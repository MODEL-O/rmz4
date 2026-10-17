// undefined FUN_0800b764(void)
// entry 0x800b764


undefined4 FUN_0800b764(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  iVar1 = param_1 + 0x14;
  local_18 = (*(int *)(param_1 + 0x2c) >> 8) + *(int *)(param_1 + 0x34);
  local_14 = (*(int *)(param_1 + 0x30) >> 8) + *(int *)(param_1 + 0x38);
  if ((((*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x3c)) + 0xfU < 0x1f) &&
      ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40)) + 0xfU < 0x1f)) &&
     (*(char *)(DAT_0800b7cc + DAT_0800b7d0) == '\0')) {
    FUN_08005124(iVar1,&local_18,
                 (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800b828) & 0x1f00) * 8 +
                 0x6000000,DAT_0800b7cc + 0x7e0);
  }
  else {
    FUN_08005050(iVar1,&local_18,
                 (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800b7d4) & 0x1f00) * 8 +
                 0x6000000,DAT_0800b7d8);
  }
  *(undefined1 *)(DAT_0800b82c + DAT_0800b830) = 0;
  FUN_0800531c(iVar1,(*(uint *)(param_1 + 0x5c) >> 4) * 4 + DAT_0800b834);
  return in_lr;
}


