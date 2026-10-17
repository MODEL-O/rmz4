// undefined FUN_08031d7c(void)
// entry 0x8031d7c


undefined4 FUN_08031d7c(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,0x500);
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 8;
  *(undefined1 *)(param_1 + 0xe) = 1;
  FUN_08031dbc(param_1);
  return in_lr;
}


