// undefined FUN_080f58d8(void)
// entry 0x80f58d8


undefined4 FUN_080f58d8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080f590c));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f5910);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080f5914(param_1);
  return in_lr;
}


