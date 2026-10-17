// undefined FUN_080f536c(void)
// entry 0x80f536c


undefined4 FUN_080f536c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080f53a0));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f53a4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080f53a8(param_1);
  return in_lr;
}


