// undefined FUN_080b2730(void)
// entry 0x80b2730


undefined4 FUN_080b2730(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b2780);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_080b2b94(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cf00(param_1,DAT_080b2784);
      FUN_080b2244(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xf) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0x1e;
    }
  }
  return in_lr;
}


