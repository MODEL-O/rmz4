// undefined FUN_080e09a4(void)
// entry 0x80e09a4


undefined4 FUN_080e09a4(int param_1)

{
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  local_14 = *(int *)(param_1 + 0x54) + DAT_080e09f0;
  local_10 = *(int *)(param_1 + 0x58) + 0x400;
  FUN_080d0dc4(0,&local_14,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_080e08bc(param_1 + 0x54,3,1,*(byte *)(param_1 + 10) >> 4 & 1);
  return in_lr;
}


