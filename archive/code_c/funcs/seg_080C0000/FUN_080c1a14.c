// undefined FUN_080c1a14(void)
// entry 0x80c1a14


undefined4 FUN_080c1a14(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


