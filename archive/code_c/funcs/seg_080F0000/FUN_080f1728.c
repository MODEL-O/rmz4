// undefined FUN_080f1728(void)
// entry 0x80f1728


undefined4 FUN_080f1728(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(short *)(DAT_080f176c + 0x14a) = (short)DAT_080f1770;
    *(undefined2 *)(DAT_080f1774 + 0x14a) = 9;
    FUN_0801cf00(param_1,DAT_080f1778);
    uVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


