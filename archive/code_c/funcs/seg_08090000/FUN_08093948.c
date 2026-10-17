// undefined FUN_08093948(void)
// entry 0x8093948


undefined4 FUN_08093948(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08093990);
    FUN_0801cf00(param_1,DAT_08093994);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08094a38(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


