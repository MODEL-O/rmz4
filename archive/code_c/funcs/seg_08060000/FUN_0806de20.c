// undefined FUN_0806de20(void)
// entry 0x806de20


undefined4 FUN_0806de20(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0806de60);
    FUN_0801cf00(param_1,DAT_0806de64);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


