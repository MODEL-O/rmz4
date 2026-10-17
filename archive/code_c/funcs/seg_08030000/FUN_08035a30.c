// undefined FUN_08035a30(void)
// entry 0x8035a30


undefined4 FUN_08035a30(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08033e0c();
  return in_lr;
}


