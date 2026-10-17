// undefined FUN_080368f4(void)
// entry 0x80368f4


undefined4 FUN_080368f4(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + DAT_08036918) = *(byte *)(param_1 + DAT_08036918) | 4;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08036920) * 4 + DAT_0803691c));
  return in_lr;
}


