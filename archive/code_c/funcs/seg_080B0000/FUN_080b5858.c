// undefined FUN_080b5858(void)
// entry 0x80b5858


undefined4 FUN_080b5858(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30)) {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(char *)(param_1 + 0xb4) = '\x01';
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b58a0));
  return in_lr;
}


