// undefined FUN_080a1f2c(void)
// entry 0x80a1f2c


undefined4 FUN_080a1f2c(int param_1)

{
  undefined4 in_lr;
  undefined2 auStack_c [2];
  
  FUN_08129258(auStack_c,DAT_080a1f74,4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,auStack_c[*(byte *)(param_1 + 0xb4)]);
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


