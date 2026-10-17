// undefined FUN_080f3fc0(void)
// entry 0x80f3fc0


undefined4 FUN_080f3fc0(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cc9c();
  FUN_0801cf00(param_1,DAT_080f3ff0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0xe;
  return in_lr;
}


