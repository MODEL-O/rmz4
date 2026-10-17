// undefined FUN_08075d5c(void)
// entry 0x8075d5c


undefined4 FUN_08075d5c(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08075db8);
    FUN_08002b10(0xd9);
    FUN_08005784(param_1 + 0x74,DAT_08075dbc);
    *(undefined1 *)(param_1 + 0x12) = 0xc;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x03' < *(char *)(param_1 + 0x71)) {
      FUN_08005784(param_1 + 0x74,DAT_08075dc0);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(char *)(param_1 + 0x73) == '\x04') {
      *(undefined1 *)(param_1 + 0xf) = 2;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0xd) = 0xe;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


