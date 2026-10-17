// undefined FUN_080dc624(void)
// entry 0x80dc624


undefined4 FUN_080dc624(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dc664);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_080dc668);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  FUN_080dc66c(param_1);
  return in_lr;
}


