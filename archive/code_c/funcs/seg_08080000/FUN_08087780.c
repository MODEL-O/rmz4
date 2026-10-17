// undefined FUN_08087780(void)
// entry 0x8087780


undefined4 FUN_08087780(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb4) = 3;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)(DAT_080877a0 + 4));
  return in_lr;
}


