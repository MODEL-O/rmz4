// undefined FUN_080b3c08(void)
// entry 0x80b3c08


undefined4 FUN_080b3c08(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b3c70);
    *(undefined1 *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x71) == '\x05') {
    FUN_08002b10(0x162);
    FUN_08005784(param_1 + 0x74,DAT_080b3c74);
  }
  if (('\x05' < *(char *)(param_1 + 0x71)) && (cVar1 = FUN_080b3f2c(param_1), cVar1 != '\0')) {
    FUN_08005784(param_1 + 0x74,DAT_080b3c78);
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


