// undefined FUN_080da450(void)
// entry 0x80da450


undefined4 FUN_080da450(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x12) = 0x10;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080da470;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_0801cf00(param_1,DAT_080da474);
  return in_lr;
}


