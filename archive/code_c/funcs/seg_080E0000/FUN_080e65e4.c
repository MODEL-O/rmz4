// undefined FUN_080e65e4(void)
// entry 0x80e65e4


undefined4 FUN_080e65e4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + DAT_080e6628;
  FUN_080d0c88(1,&local_10);
  FUN_08002b10(0x2a);
  *(undefined1 *)(param_1 + 0x11) = 1;
  FUN_080e6270(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e6480(param_1);
  return in_lr;
}


