// undefined FUN_080b6a14(void)
// entry 0x80b6a14


undefined4 FUN_080b6a14(int param_1)

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


