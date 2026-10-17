// undefined FUN_080a07e4(void)
// entry 0x80a07e4


undefined4 FUN_080a07e4(int param_1)

{
  undefined4 in_lr;
  byte abStack_c [4];
  
  FUN_08129258(abStack_c,DAT_080a087c,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xa9);
    FUN_080a0c18(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,DAT_080a0880);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,(uint)abStack_c[*(char *)(param_1 + 0x71)] * 0x18 + DAT_080a0884);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


