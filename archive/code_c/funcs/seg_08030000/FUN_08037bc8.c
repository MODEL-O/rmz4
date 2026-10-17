// undefined FUN_08037bc8(void)
// entry 0x8037bc8


undefined4 FUN_08037bc8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x100) = 1;
  FUN_08037bdc();
  return in_lr;
}


