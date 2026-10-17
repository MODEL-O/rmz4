// undefined FUN_080b1aa4(void)
// entry 0x80b1aa4


undefined4 FUN_080b1aa4(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b1b30);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  FUN_08005760(param_1 + 0x74,DAT_080b1b34,param_1 + 0x54,0xc);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b1b38;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  if ((*(byte *)(DAT_080b1b3c + DAT_080b1b40) & 0xf) == 0) {
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(int *)(param_1 + 0x58) = ((*(int *)(param_1 + 0x58) >> 0xc) * 0x10 + 10) * 0x100;
  FUN_080b2170(param_1);
  FUN_080b1b44(param_1);
  return in_lr;
}


