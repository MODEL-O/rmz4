// undefined FUN_0809e058(void)
// entry 0x809e058


undefined4 FUN_0809e058(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    FUN_08005784(param_1 + 0x74,DAT_0809e08c);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x32;
  }
  return in_lr;
}


