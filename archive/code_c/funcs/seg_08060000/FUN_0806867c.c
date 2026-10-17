// undefined FUN_0806867c(void)
// entry 0x806867c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0806867c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080686d4);
    FUN_08005784(param_1 + 0x74,_FUN_080686d8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     ((*(int *)(*(int *)(param_1 + 0x2c) + 0x54) - *(int *)(param_1 + 0x54)) + 0x8c00U < 0x11801)) {
    *(undefined1 *)(param_1 + 0xd) = 0x26;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


