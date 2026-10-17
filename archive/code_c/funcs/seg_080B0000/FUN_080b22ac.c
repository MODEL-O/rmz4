// undefined FUN_080b22ac(void)
// entry 0x80b22ac


undefined4 FUN_080b22ac(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b22fc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080b2300));
  FUN_080b2304(param_1);
  return in_lr;
}


