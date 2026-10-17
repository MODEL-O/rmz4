// undefined FUN_080ca268(void)
// entry 0x80ca268


undefined4 FUN_080ca268(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x13) = (~*(byte *)(param_1 + 0x11) & 3) << 2;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  return in_lr;
}


