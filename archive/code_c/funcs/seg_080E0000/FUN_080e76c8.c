// undefined FUN_080e76c8(void)
// entry 0x80e76c8


undefined4 FUN_080e76c8(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + DAT_080e771c;
  FUN_080d0c88(1,&local_18);
  FUN_08002b10(0x2a);
  *(undefined1 *)(param_1 + 0x11) = 1;
  FUN_080e70d4(param_1 + 0x54,DAT_080e7720,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e70d4(param_1 + 0x54,DAT_080e7724,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e7484(param_1);
  return in_lr;
}


