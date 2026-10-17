// undefined FUN_080ac2cc(void)
// entry 0x80ac2cc


undefined4 FUN_080ac2cc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_08005784(param_1 + 0x74,DAT_080ac2f8);
  iVar1 = *DAT_080ac2fc;
  *(int *)(param_1 + 0xb4) = *(int *)(iVar1 + 0x54) - *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0xb8) = *(int *)(iVar1 + 0x58) - *(int *)(param_1 + 0x58);
  return in_lr;
}


