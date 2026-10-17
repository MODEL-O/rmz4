// undefined FUN_080e4db4(void)
// entry 0x80e4db4


undefined4 FUN_080e4db4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x11) = 1;
  FUN_08002b10(0x2a);
  FUN_080e4a54(param_1 + 0x54,DAT_080e4de0,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e4c48(param_1);
  return in_lr;
}


