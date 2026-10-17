// undefined FUN_080e5dc0(void)
// entry 0x80e5dc0


undefined4 FUN_080e5dc0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e5e04);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080e5e08));
  FUN_080e5e0c(param_1);
  return in_lr;
}


