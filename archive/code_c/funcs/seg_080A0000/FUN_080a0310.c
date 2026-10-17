// undefined FUN_080a0310(void)
// entry 0x80a0310


undefined4 FUN_080a0310(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_08005784(param_1 + 0x74,DAT_080a0370);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(int *)(param_1 + 0x2c) == 0)) {
    FUN_08005784(param_1 + 0x74,DAT_080a0374);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  iVar1 = FUN_080a0a94(param_1,*(undefined4 *)(param_1 + 0x60));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


