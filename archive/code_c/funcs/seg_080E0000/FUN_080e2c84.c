// undefined FUN_080e2c84(void)
// entry 0x80e2c84


undefined4 FUN_080e2c84(int param_1)

{
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x58) + DAT_080e2ca8;
  local_10 = DAT_080e2ce8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_10 = 0x800;
  }
  local_10 = *(int *)(param_1 + 0x54) + local_10;
  FUN_080d0c88(1,&local_10);
  FUN_08002b10(0x166);
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_080e2914(param_1 + 0x54,DAT_080e2cec,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e2aac(param_1);
  return in_lr;
}


