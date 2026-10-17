// undefined FUN_080c3f64(void)
// entry 0x80c3f64


undefined4 FUN_080c3f64(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c3fa0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_0801cc9c(param_1);
  FUN_080c4000(param_1);
  return in_lr;
}


