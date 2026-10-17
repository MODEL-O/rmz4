// undefined FUN_080d0148(void)
// entry 0x80d0148


undefined4 FUN_080d0148(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar1 != 0) {
    *psVar1 = *psVar1 + -1;
  }
  FUN_080bd3f8(param_1);
  return in_lr;
}


