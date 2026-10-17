// undefined FUN_080c5f90(void)
// entry 0x80c5f90


undefined4 FUN_080c5f90(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xb4);
  *psVar1 = *psVar1 + -1;
  FUN_080bd3f8();
  return in_lr;
}


