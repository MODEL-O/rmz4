// undefined FUN_080b94dc(void)
// entry 0x80b94dc


undefined4 FUN_080b94dc(int param_1)

{
  int iVar1;
  short *psVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *DAT_080b9510 = 0;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
  psVar2 = (short *)(iVar1 + 0xcc);
  if (*psVar2 != 0) {
    *psVar2 = *psVar2 + -1;
  }
  FUN_0807f8ec(param_1);
  return in_lr;
}


