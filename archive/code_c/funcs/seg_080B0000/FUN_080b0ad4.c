// undefined FUN_080b0ad4(void)
// entry 0x80b0ad4


undefined4 FUN_080b0ad4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_080b0ccc(param_1);
    *(undefined1 *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}


