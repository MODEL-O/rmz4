// undefined FUN_08054868(void)
// entry 0x8054868


undefined4 FUN_08054868(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080548a4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08054fb0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 5;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


