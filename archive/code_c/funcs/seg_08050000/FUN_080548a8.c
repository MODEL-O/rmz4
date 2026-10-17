// undefined FUN_080548a8(void)
// entry 0x80548a8


undefined4 FUN_080548a8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0xb8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xbc) = 0x20;
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 200) + 0xbc) = 0x20;
    FUN_0801cf00(param_1,0x2c00);
    *(undefined1 *)(param_1 + 0x12) = 0xb4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  FUN_08054fb0(param_1);
  if (((*(short *)(*(int *)(param_1 + 0xc4) + 0xbc) == 0) &&
      (*(short *)(*(int *)(param_1 + 200) + 0xbc) == 0)) && (*(char *)(param_1 + 0x12) == '\0')) {
    FUN_08054ff0(param_1);
  }
  return in_lr;
}


