// undefined FUN_080becb0(void)
// entry 0x80becb0


undefined4 FUN_080becb0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0xc9) = 0;
    *(char *)(param_1 + 0xb8) = '\0';
  }
  FUN_080bd3f8(param_1);
  return in_lr;
}


