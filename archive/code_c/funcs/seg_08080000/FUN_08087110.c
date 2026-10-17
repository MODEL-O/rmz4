// undefined FUN_08087110(void)
// entry 0x8087110


undefined4 FUN_08087110(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb9) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 7;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


