// undefined FUN_080e24c8(void)
// entry 0x80e24c8


undefined4 FUN_080e24c8(int param_1)

{
  undefined4 in_lr;
  
  FUN_080e255c();
  FUN_080d0c88(1,param_1 + 0x54);
  FUN_080e25a8(param_1);
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_080e2188(param_1 + 0x54,DAT_080e24fc,*(byte *)(param_1 + 10) >> 4 & 1);
  return in_lr;
}


