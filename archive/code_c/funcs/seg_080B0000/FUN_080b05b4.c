// undefined FUN_080b05b4(void)
// entry 0x80b05b4


undefined4 FUN_080b05b4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0xb7) = 0;
  }
  FUN_0807f8ec();
  return in_lr;
}


