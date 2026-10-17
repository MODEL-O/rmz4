// undefined FUN_080f5da0(void)
// entry 0x80f5da0


undefined4 FUN_080f5da0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080f5dd4));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f5dd8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080f5ddc(param_1);
  return in_lr;
}


