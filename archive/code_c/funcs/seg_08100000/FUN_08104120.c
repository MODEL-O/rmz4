// undefined FUN_08104120(void)
// entry 0x8104120


undefined4 FUN_08104120(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08104154));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08104158);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0810415c(param_1);
  return in_lr;
}


