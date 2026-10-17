// undefined FUN_08036270(void)
// entry 0x8036270


undefined4 FUN_08036270(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + DAT_08036298) = *(byte *)(param_1 + DAT_08036298) | 6;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_080362a0) * 4 + DAT_0803629c));
  return in_lr;
}


