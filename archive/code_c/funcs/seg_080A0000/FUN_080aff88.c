// undefined FUN_080aff88(void)
// entry 0x80aff88


undefined4 FUN_080aff88(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080afffc + (uint)*(byte *)(param_1 + 0xb7) & 0xffff);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_08005784(param_1 + 0x74,DAT_080b0000);
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd) = 4;
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0x3c;
      FUN_08002b10(0x132);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_080b0318(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x10) == '\0')) {
    FUN_08005784(param_1 + 0x74,DAT_080b0004);
    *(undefined1 *)(param_1 + 0x13) = 0xb4;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


