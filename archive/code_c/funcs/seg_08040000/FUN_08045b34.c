// undefined FUN_08045b34(void)
// entry 0x8045b34


undefined4 FUN_08045b34(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08045b88);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08045b8c);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0xf;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_08045864(param_1);
  return in_lr;
}


