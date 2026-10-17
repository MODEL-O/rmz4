// undefined FUN_0806dc18(void)
// entry 0x806dc18


undefined4 FUN_0806dc18(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0806dc64);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined1 *)(param_1 + 0xc3) = 0;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


