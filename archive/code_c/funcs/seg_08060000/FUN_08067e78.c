// undefined FUN_08067e78(void)
// entry 0x8067e78


undefined4 FUN_08067e78(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08067eb8);
    FUN_08002b10(0x65);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ('\x03' < *(char *)(param_1 + 0x71)) {
    *(undefined1 *)(param_1 + 0xd) = 0x18;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


