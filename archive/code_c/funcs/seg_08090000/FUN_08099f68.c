// undefined FUN_08099f68(void)
// entry 0x8099f68


undefined4 FUN_08099f68(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08099f9c));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08099fa0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_08099fa4(param_1);
  return in_lr;
}


