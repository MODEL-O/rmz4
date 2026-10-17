// undefined FUN_080e247c(void)
// entry 0x80e247c


undefined4 FUN_080e247c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_080e255c();
  iVar1 = param_1 + 0x54;
  FUN_080d0c88(1,iVar1);
  FUN_080e25a8(param_1);
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_080e2188(iVar1,DAT_080e24c0,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e2188(iVar1,DAT_080e24c4,*(byte *)(param_1 + 10) >> 4 & 1);
  return in_lr;
}


