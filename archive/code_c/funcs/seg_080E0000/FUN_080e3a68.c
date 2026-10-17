// undefined FUN_080e3a68(void)
// entry 0x80e3a68


undefined4 FUN_080e3a68(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  FUN_080e38a0();
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + DAT_080e3ab0;
  FUN_080d0c88(1,&local_10);
  FUN_08002b10(0x2a);
  *(undefined1 *)(param_1 + 0x11) = 1;
  FUN_080e37a0(param_1 + 0x54,DAT_080e3ab4,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e3ab8(param_1);
  return in_lr;
}


