// undefined FUN_080352d8(void)
// entry 0x80352d8


undefined4 FUN_080352d8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x100) = 1;
  FUN_080352ec();
  return in_lr;
}


