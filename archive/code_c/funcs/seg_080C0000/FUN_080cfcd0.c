// undefined FUN_080cfcd0(void)
// entry 0x80cfcd0


undefined4 FUN_080cfcd0(int param_1)

{
  int iVar1;
  short *psVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  FUN_08002624(0xc5);
  psVar2 = (short *)(iVar1 + 0xcc);
  if (*psVar2 != 0) {
    *psVar2 = *psVar2 + -1;
  }
  FUN_080bd3f8(param_1);
  return in_lr;
}


