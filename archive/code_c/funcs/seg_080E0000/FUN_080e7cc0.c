// undefined FUN_080e7cc0(void)
// entry 0x80e7cc0


undefined4 FUN_080e7cc0(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,DAT_080e7cd4);
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


