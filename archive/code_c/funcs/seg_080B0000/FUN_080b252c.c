// undefined FUN_080b252c(void)
// entry 0x80b252c


undefined4 FUN_080b252c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb5) = 0;
  if (*(char *)(param_1 + 0x11) == '\x02') {
    *(undefined1 *)(param_1 + 0xb5) = 4;
  }
  uVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080b2580,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b2584;
  FUN_080b2b38(param_1);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


