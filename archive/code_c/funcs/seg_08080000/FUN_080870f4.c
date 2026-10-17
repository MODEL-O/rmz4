// undefined FUN_080870f4(void)
// entry 0x80870f4


undefined4 FUN_080870f4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb9) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 7;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


