// undefined FUN_080aaafc(void)
// entry 0x80aaafc


undefined4 FUN_080aaafc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    FUN_08005784(param_1 + 0x74,DAT_080aab2c);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0x20;
  }
  return in_lr;
}


