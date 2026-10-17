// undefined FUN_080a5bd4(void)
// entry 0x80a5bd4


undefined4 FUN_080a5bd4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  FUN_08129258(auStack_10,DAT_080a5c54,3);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080a5c58);
    FUN_0801cf00(param_1,DAT_080a5c5c);
    FUN_0801d3d0(param_1,5);
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(char *)(param_1 + 0x71) == '\x06')) {
    FUN_08005784(param_1 + 0x74,DAT_080a5c60);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = auStack_10[bVar1];
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


