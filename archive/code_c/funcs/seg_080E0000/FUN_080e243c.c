// undefined FUN_080e243c(void)
// entry 0x80e243c


undefined4 FUN_080e243c(int param_1)

{
  undefined4 in_lr;
  
  FUN_080e255c();
  FUN_080e2188(param_1 + 0x54,0x304,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080d0dc4(0,param_1 + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
  *(undefined1 *)(param_1 + 0x11) = 3;
  *(undefined1 *)(param_1 + 0x25) = 0x18;
  return in_lr;
}


