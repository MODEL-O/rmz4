// undefined FUN_080f7f74(void)
// entry 0x80f7f74


undefined4 FUN_080f7f74(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080f7fa8));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f7fac);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080f7fb0(param_1);
  return in_lr;
}


