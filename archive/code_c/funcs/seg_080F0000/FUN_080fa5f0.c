// undefined FUN_080fa5f0(void)
// entry 0x80fa5f0


undefined4 FUN_080fa5f0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080fa650);
    FUN_080caeb4(param_1 + 100,2,*(byte *)(param_1 + 10) >> 4 & 1);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0xbe) == '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


