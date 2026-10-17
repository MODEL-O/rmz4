// undefined FUN_080da4a8(void)
// entry 0x80da4a8


undefined4 FUN_080da4a8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  FUN_080ebf6c(param_1);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080da4d8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080da4dc(param_1);
  return in_lr;
}


