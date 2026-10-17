// undefined FUN_080877ec(void)
// entry 0x80877ec


undefined4 FUN_080877ec(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    FUN_08005784(param_1 + 0x74,DAT_08087840);
    FUN_0801cf00(param_1,DAT_08087844);
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * 2 + -1) * 0x100;
    *(undefined4 *)(param_1 + 0x60) = DAT_08087848;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = FUN_08088c9c(param_1);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


