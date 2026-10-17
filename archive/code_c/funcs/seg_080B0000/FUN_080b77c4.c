// undefined FUN_080b77c4(void)
// entry 0x80b77c4


undefined4 FUN_080b77c4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_080b7804));
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = 1;
      FUN_08002b10(0x13e);
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 3;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


