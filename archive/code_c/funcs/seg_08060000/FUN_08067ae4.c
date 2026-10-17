// undefined FUN_08067ae4(void)
// entry 0x8067ae4


undefined4 FUN_08067ae4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08067b3c);
    *(undefined1 *)(param_1 + 0x12) = 4;
    FUN_08002b10(0x65);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    FUN_08005784(param_1 + 0x74,DAT_08067b40);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0xd) = 0x15;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


