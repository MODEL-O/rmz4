// undefined FUN_08067644(void)
// entry 0x8067644


undefined4 FUN_08067644(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806769c);
    FUN_08002b10(99);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    FUN_08005784(param_1 + 0x74,DAT_080676a0);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0xd) = 0xe;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


