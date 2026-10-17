// undefined FUN_08105084(void)
// entry 0x8105084


undefined4 FUN_08105084(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined1 *)(param_1 + 0xb4) = 0;
      FUN_08005784(param_1 + 0x74,DAT_081050a8);
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_081050d8);
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(char *)(*(int *)(param_1 + 0x2c) + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xb5) = 1;
    }
    *(undefined1 *)(param_1 + 0xb5) = 0;
  }
  return in_lr;
}


