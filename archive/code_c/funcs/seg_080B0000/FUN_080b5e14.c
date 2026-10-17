// undefined FUN_080b5e14(void)
// entry 0x80b5e14


undefined4 FUN_080b5e14(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080b5e80);
    FUN_0801cf00(param_1,0xb500);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x13) == '\0') && ('\x0f' < *(char *)(param_1 + 0x71))) {
    FUN_08005784(param_1 + 0x74,DAT_080b5e84);
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


