// undefined FUN_080e3c3c(void)
// entry 0x80e3c3c


undefined4 FUN_080e3c3c(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080e3c60;
  FUN_0801cf00(param_1,DAT_080e3c64);
  *(undefined1 *)(param_1 + 0x12) = 0xb4;
  *(undefined1 *)(param_1 + 0xd) = 2;
  return in_lr;
}


