// undefined FUN_08087640(void)
// entry 0x8087640


undefined4 FUN_08087640(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080876b0);
    FUN_0801cf00(param_1,0x1d00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined1 *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0xc00;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = DAT_080876b4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = FUN_08088c9c(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


