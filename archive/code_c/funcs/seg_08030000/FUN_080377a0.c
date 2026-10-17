// undefined FUN_080377a0(void)
// entry 0x80377a0


undefined4 FUN_080377a0(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + DAT_080377c4) = *(byte *)(param_1 + DAT_080377c4) | 4;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_080377cc) * 4 + DAT_080377c8));
  return in_lr;
}


