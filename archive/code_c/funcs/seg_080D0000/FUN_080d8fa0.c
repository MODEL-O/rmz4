// undefined FUN_080d8fa0(void)
// entry 0x80d8fa0


undefined4 FUN_080d8fa0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080d8fe4));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8fe8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d8fec(param_1);
  return in_lr;
}


