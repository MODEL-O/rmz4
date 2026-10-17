// undefined FUN_080e2978(void)
// entry 0x80e2978


undefined4 FUN_080e2978(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e29c0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0x74) = 1;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080e29c4));
  FUN_080e29c8(param_1);
  return in_lr;
}


