// undefined FUN_0809b0e0(void)
// entry 0x809b0e0


undefined4 FUN_0809b0e0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xb7) = 0;
    FUN_08005784(param_1 + 0x74,*DAT_0809b150);
    FUN_0801cf00(param_1,0x6400);
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(char *)(param_1 + 0x71) == '\x04')) {
    FUN_08005784(param_1 + 0x74,DAT_0809b150[2]);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0xb4) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


