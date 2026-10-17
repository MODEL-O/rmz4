// undefined FUN_08032fdc(void)
// entry 0x8032fdc


undefined4 FUN_08032fdc(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x174) = 5;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_08032ffc));
  return in_lr;
}


