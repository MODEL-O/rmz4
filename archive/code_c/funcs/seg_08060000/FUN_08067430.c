// undefined FUN_08067430(void)
// entry 0x8067430


undefined4 FUN_08067430(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08067488);
    FUN_08005784(param_1 + 0x74,DAT_0806748c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(int *)(param_1 + 0x2c) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc))) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xd)) {
      *(undefined1 *)(param_1 + 0xd) = 9;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


