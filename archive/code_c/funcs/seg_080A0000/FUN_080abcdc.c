// undefined FUN_080abcdc(void)
// entry 0x80abcdc


undefined4 FUN_080abcdc(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080ac2cc(param_1);
    FUN_08005784(param_1 + 0x74,DAT_080abd2c);
    *(undefined1 *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  *(undefined2 *)(DAT_080abd30 + 4) = 0x10;
  FUN_080ac300(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


