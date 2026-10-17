// undefined FUN_08035ab4(void)
// entry 0x8035ab4


undefined4 FUN_08035ab4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x100) = 1;
  FUN_08035ac8();
  return in_lr;
}


