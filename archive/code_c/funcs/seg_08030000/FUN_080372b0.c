// undefined FUN_080372b0(void)
// entry 0x80372b0


undefined4 FUN_080372b0(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + DAT_080372d8) = *(byte *)(param_1 + DAT_080372d8) | 6;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_080372e0) * 4 + DAT_080372dc));
  return in_lr;
}


