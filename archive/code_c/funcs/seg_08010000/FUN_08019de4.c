// undefined FUN_08019de4(void)
// entry 0x8019de4


undefined4 FUN_08019de4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0x3fc;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


