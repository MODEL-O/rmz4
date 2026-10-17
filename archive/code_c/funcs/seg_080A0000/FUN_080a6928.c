// undefined FUN_080a6928(void)
// entry 0x80a6928


undefined4 FUN_080a6928(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    FUN_08005784(param_1 + 0x74,DAT_080a6950);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


