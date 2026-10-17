// undefined FUN_0805b148(void)
// entry 0x805b148


undefined4 FUN_0805b148(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xc0);
    if ((*(int *)(param_1 + 200) != 0) && (*(char *)(param_1 + 0xbf) == '\x04')) {
      *(undefined1 *)(*(int *)(param_1 + 200) + 0xb4) = 1;
    }
    FUN_08005784(param_1 + 0x74,DAT_0805b1c0);
    FUN_0801cf00(param_1,DAT_0805b1c4);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


