// undefined FUN_08091af8(void)
// entry 0x8091af8


undefined4 FUN_08091af8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08091b44);
    FUN_08005784(param_1 + 0x74,DAT_08091b48);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(undefined1 *)(param_1 + 0xc1) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


