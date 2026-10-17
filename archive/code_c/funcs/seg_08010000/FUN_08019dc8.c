// undefined FUN_08019dc8(void)
// entry 0x8019dc8


undefined4 FUN_08019dc8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0x3c0;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


