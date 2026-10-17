// undefined FUN_080ab0d0(void)
// entry 0x80ab0d0


undefined4 FUN_080ab0d0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080ab120);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,DAT_080ab124);
  iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + -1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    FUN_080ab610(param_1);
  }
  return in_lr;
}


