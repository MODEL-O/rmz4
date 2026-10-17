// undefined FUN_08038354(void)
// entry 0x8038354


undefined4 FUN_08038354(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\x03') {
    if (*(char *)(param_1 + 8) != -1) {
      *(undefined1 *)(param_1 + 8) = 0x20;
    }
    if (*(char *)(param_1 + 9) != -1) {
      *(undefined1 *)(param_1 + 9) = 0x20;
    }
    if (*(char *)(param_1 + 10) != -1) {
      *(undefined1 *)(param_1 + 10) = 0x20;
    }
    if (*(char *)(param_1 + 0xb) != -1) {
      *(undefined1 *)(param_1 + 0xb) = 0x20;
    }
  }
  *(undefined1 *)(param_1 + 0x34) = 0x40;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return in_lr;
}


