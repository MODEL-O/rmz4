// undefined FUN_080e502c(void)
// entry 0x80e502c


undefined4 FUN_080e502c(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,DAT_080e504c);
  *(undefined4 *)(param_1 + 0x60) = 0x20;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


