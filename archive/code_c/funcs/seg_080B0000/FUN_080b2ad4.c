// undefined FUN_080b2ad4(void)
// entry 0x80b2ad4


undefined4 FUN_080b2ad4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_080b2b94();
  iVar1 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    FUN_08005784(param_1 + 0x74,DAT_080b2b08);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(byte *)(param_1 + 0x11) < 2) {
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xf) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0x18;
    }
  }
  return in_lr;
}


