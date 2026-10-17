// undefined FUN_08032f40(void)
// entry 0x8032f40


undefined4 FUN_08032f40(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined1 *)(param_1 + 0x100) = 0;
  FUN_0803a964(DAT_08032f80);
  *DAT_08032f84 = 1;
  *(undefined1 *)(param_1 + 0xe) = 2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08032f8c(param_1);
  return in_lr;
}


