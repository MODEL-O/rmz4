// undefined FUN_0805a994(void)
// entry 0x805a994


undefined4 FUN_0805a994(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(int *)(param_1 + 200) != 0) && (*(char *)(param_1 + 0xbf) == '\x01')) {
      *(undefined1 *)(*(int *)(param_1 + 200) + 0xb4) = 1;
    }
    FUN_08005784(param_1 + 0x74,DAT_0805a9f4);
    FUN_0801cf00(param_1,DAT_0805a9f8);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


