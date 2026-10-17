// undefined FUN_080ba968(void)
// entry 0x80ba968


undefined4 FUN_080ba968(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080ba9c4);
    FUN_08005784(param_1 + 0x74,DAT_080ba9c8);
    FUN_0801cf00(param_1,DAT_080ba9cc);
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


