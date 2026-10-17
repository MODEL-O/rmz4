// undefined FUN_080345a0(void)
// entry 0x80345a0


undefined4 FUN_080345a0(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,DAT_080345d0);
  FUN_0803a308(param_1);
  *(undefined1 *)(param_1 + DAT_080345d4) = 1;
  *(undefined1 *)(param_1 + 0x102) = 0;
  FUN_080345d8(param_1);
  return in_lr;
}


