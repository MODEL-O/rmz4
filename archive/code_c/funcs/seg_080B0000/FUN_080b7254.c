// undefined FUN_080b7254(void)
// entry 0x80b7254


undefined4 FUN_080b7254(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar1 != 0) {
    *psVar1 = *psVar1 + -1;
  }
  FUN_0807f8ec(param_1);
  return in_lr;
}


