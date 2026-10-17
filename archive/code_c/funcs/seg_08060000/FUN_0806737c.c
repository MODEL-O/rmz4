// undefined FUN_0806737c(void)
// entry 0x806737c


undefined4 FUN_0806737c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080673cc);
    FUN_08002b10(0x60);
    FUN_08002b10(0x61);
    *(undefined2 *)(param_1 + 0xe0) = 0x61;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ('\x04' < *(char *)(param_1 + 0x71)) {
    *(undefined1 *)(param_1 + 0xd) = 7;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


