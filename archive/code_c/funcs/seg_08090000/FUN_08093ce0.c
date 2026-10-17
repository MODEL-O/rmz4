// undefined FUN_08093ce0(void)
// entry 0x8093ce0


undefined4 FUN_08093ce0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08093d2c);
    FUN_0801cf00(param_1,DAT_08093d30);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(int *)(DAT_08093d34 + 0x38) - *(int *)(param_1 + 0x54)) + 0x9800U < 0x13001) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


