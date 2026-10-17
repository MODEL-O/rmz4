// undefined FUN_080aa894(void)
// entry 0x80aa894


undefined4 FUN_080aa894(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080aa934);
    FUN_0801cf00(param_1,DAT_080aa938);
    *(undefined1 *)(param_1 + 0x13) = 0x60;
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xb4) = 1;
    }
    FUN_08002b10(DAT_080aa93c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0xe) == '\x01') && ((*(byte *)(param_1 + 0x13) & 7) == 0)) {
    FUN_080cc9e0(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,0);
  }
  cVar1 = FUN_080aab30(param_1);
  if ((cVar1 != '\0') || (*(char *)(param_1 + 0x73) == '\x03')) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cf00(param_1,DAT_080aa940);
      *(undefined1 *)(param_1 + 0x13) = 0xff;
      if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
        *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x12) = 0;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined1 *)(param_1 + 0xb4) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


