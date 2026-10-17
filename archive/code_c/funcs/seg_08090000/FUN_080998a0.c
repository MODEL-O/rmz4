// undefined FUN_080998a0(void)
// entry 0x80998a0


undefined4 FUN_080998a0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x6900);
    FUN_08005784(param_1 + 0x74,DAT_080998f8);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((*(int *)(*DAT_080998fc + 0x54) - *(int *)(param_1 + 0x54)) + 0x6000U < 0xc001) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


