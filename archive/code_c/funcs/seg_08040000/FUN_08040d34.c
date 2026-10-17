// undefined FUN_08040d34(void)
// entry 0x8040d34


undefined4 FUN_08040d34(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xbe) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08040d50));
  return in_lr;
}


