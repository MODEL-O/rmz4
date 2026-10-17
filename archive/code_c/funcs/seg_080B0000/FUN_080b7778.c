// undefined FUN_080b7778(void)
// entry 0x80b7778


undefined4 FUN_080b7778(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b77b4);
    *(undefined1 *)(param_1 + 0x12) = 0xa0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)(param_1 + 0x13) == '\x02') {
      *(undefined1 *)(param_1 + 0xb4) = 1;
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


