// undefined FUN_080e6ec0(void)
// entry 0x80e6ec0


undefined4 FUN_080e6ec0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + DAT_080e6f24;
  FUN_080d0c88(1,&local_18);
  FUN_08002b10(0xa7);
  *(undefined1 *)(param_1 + 0x11) = 1;
  iVar1 = param_1 + 0x54;
  FUN_080e6b5c(iVar1,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e6b5c(iVar1,DAT_080e6f28,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e6b5c(iVar1,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e6d44(param_1);
  return in_lr;
}


