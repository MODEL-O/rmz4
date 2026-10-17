// undefined FUN_080f02b8(void)
// entry 0x80f02b8


undefined4 FUN_080f02b8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  FUN_0801cc9c(param_1);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f02e8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080ed7c8(param_1);
  return in_lr;
}


