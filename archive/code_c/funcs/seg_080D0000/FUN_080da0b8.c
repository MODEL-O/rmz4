// undefined FUN_080da0b8(void)
// entry 0x80da0b8


undefined4 FUN_080da0b8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080da0fc));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080da100);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080da104(param_1);
  return in_lr;
}


