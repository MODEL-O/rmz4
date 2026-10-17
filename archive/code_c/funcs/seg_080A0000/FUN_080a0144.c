// undefined FUN_080a0144(void)
// entry 0x80a0144


undefined4 FUN_080a0144(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_08005784(param_1 + 0x74,DAT_080a01b8);
    FUN_0801cf00(param_1,DAT_080a01bc);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x13) == '\0') {
    uVar1 = FUN_080a0a94(param_1,*(undefined4 *)(param_1 + 0x60));
    *(undefined1 *)(param_1 + 0x13) = uVar1;
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x13) != '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


