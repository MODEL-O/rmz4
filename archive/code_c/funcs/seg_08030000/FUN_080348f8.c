// undefined FUN_080348f8(void)
// entry 0x80348f8


undefined4 FUN_080348f8(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + DAT_08034920) = *(byte *)(param_1 + DAT_08034920) | 6;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08034928) * 4 + DAT_08034924));
  return in_lr;
}


