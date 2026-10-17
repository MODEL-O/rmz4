// undefined FUN_0804470c(void)
// entry 0x804470c


undefined4 FUN_0804470c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08044784);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(short *)(param_1 + 0xbe) = *(short *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_08044788);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,(ushort)*(byte *)(param_1 + 0x11) * 3 + *(short *)(param_1 + 0xbe));
  FUN_08002b10(*(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_0804478c));
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_08044790);
  FUN_08044794(param_1);
  return in_lr;
}


