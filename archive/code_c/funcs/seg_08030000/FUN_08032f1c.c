// undefined FUN_08032f1c(void)
// entry 0x8032f1c


undefined4 FUN_08032f1c(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x174) = 5;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_08032f3c));
  return in_lr;
}


