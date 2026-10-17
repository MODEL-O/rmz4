// undefined FUN_080e255c(void)
// entry 0x80e255c


undefined4 FUN_080e255c(int param_1)

{
  undefined4 in_lr;
  
  FUN_080d0ff4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
  FUN_080d0ff4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500,1);
  FUN_080d0ff4(*(int *)(param_1 + 0x54) + 0x500,*(undefined4 *)(param_1 + 0x58),0);
  FUN_080d0ff4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0);
  FUN_080d0ff4(*(int *)(param_1 + 0x54) + DAT_080e25a4,*(undefined4 *)(param_1 + 0x58),0);
  return in_lr;
}


