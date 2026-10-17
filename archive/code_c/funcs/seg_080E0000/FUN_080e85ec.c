// undefined FUN_080e85ec(void)
// entry 0x80e85ec


undefined4 FUN_080e85ec(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar1 != 0) {
    *psVar1 = *psVar1 + -1;
  }
  FUN_080d0c30(param_1);
  return in_lr;
}


