// undefined FUN_0810c068(void)
// entry 0x810c068


undefined4 FUN_0810c068(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(undefined1 *)(param_1 + 0x25) = 0x11;
  FUN_0801cf00(param_1,DAT_0810c0a8);
  uVar1 = *(undefined4 *)(DAT_0810c0ac + 0x54);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0810c0ac + 0x50);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return in_lr;
}


