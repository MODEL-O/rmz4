// undefined FUN_080b0858(void)
// entry 0x80b0858


undefined4 FUN_080b0858(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b08a0);
    *(undefined1 *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x60;
  }
  if (*(char *)(param_1 + 0xb7) != *(char *)(param_1 + 0xb6)) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


