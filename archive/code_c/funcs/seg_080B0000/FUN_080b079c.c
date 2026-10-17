// undefined FUN_080b079c(void)
// entry 0x80b079c


undefined4 FUN_080b079c(int param_1)

{
  undefined1 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(DAT_080b07c8 + DAT_080b07cc) & 0xf) == 0) {
      FUN_0801cf00(param_1,DAT_080b07d0);
      uVar1 = 7;
    }
    else {
      FUN_0801cf00(param_1,DAT_080b0848);
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0xb6) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x72) == '\x01') {
    if (*(char *)(param_1 + 0x71) == '\x04') {
      FUN_08005784(param_1 + 0x74,DAT_080b084c);
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
    if (*(char *)(param_1 + 0x71) == '\t') {
      FUN_08005784(param_1 + 0x74,DAT_080b0850);
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    FUN_08005784(param_1 + 0x74,DAT_080b0854);
    FUN_08002b10(0xe8);
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


