// undefined FUN_080c9c50(void)
// entry 0x80c9c50


undefined4 FUN_080c9c50(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c9c90);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080c9c94));
  FUN_080c9c98(param_1);
  return in_lr;
}


