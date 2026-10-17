// undefined FUN_08034a80(void)
// entry 0x8034a80


undefined4 FUN_08034a80(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x100) = 1;
  FUN_08034a94();
  return in_lr;
}


