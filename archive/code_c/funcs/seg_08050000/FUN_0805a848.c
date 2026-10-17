// undefined FUN_0805a848(void)
// entry 0x805a848


undefined4 FUN_0805a848(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0805a8a4);
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0805a8a8) {
      FUN_0801cf00(param_1);
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    FUN_0805bf8c(param_1);
  }
  return in_lr;
}


