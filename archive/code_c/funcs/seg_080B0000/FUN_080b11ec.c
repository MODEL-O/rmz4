// undefined FUN_080b11ec(void)
// entry 0x80b11ec


undefined4 FUN_080b11ec(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b1214);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_080b108c();
  return in_lr;
}


