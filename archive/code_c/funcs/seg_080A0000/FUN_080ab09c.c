// undefined FUN_080ab09c(void)
// entry 0x80ab09c


undefined4 FUN_080ab09c(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined1 *)(param_1 + 0xb9) = 1;
  *(undefined2 *)(param_1 + 0xa4) = 8;
  *(undefined1 *)(param_1 + 0xd) = 4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)(DAT_080ab0cc + 0x10));
  return in_lr;
}


