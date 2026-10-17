// undefined FUN_08042bc8(void)
// entry 0x8042bc8


undefined4 FUN_08042bc8(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cc9c();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08042bf8);
  *(undefined1 *)(param_1 + 0x25) = 0x12;
  return in_lr;
}


