// undefined FUN_080125fc(void)
// entry 0x80125fc


undefined4 FUN_080125fc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  iVar1 = param_1 + 0x14;
  local_18 = (*(int *)(param_1 + 0x2c) >> 8) + *(int *)(param_1 + 0x34);
  local_14 = (*(int *)(param_1 + 0x30) >> 8) + *(int *)(param_1 + 0x38) + 800;
  if ((((*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x3c)) + 0xfU < 0x1f) &&
      ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40)) + 0xfU < 0x1f)) &&
     (*(char *)(DAT_08012668 + DAT_0801266c) == '\0')) {
    FUN_08005124(iVar1,&local_18,
                 (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_080126c4) & 0x1f00) * 8 +
                 0x6000000,DAT_08012668 + 0x7e0);
  }
  else {
    FUN_08005050(iVar1,&local_18,
                 (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_08012670) & 0x1f00) * 8 +
                 0x6000000,DAT_08012674);
  }
  *(undefined1 *)(DAT_080126c8 + DAT_080126cc) = 0;
  FUN_0800531c(iVar1,(*(uint *)(param_1 + 0x5c) >> 4) * 4 + DAT_080126d0);
  return in_lr;
}


