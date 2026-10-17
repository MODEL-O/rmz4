// undefined FUN_080bb6c0(void)
// entry 0x80bb6c0


undefined4 FUN_080bb6c0(int param_1)

{
  int iVar1;
  short *psVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *DAT_080bb6f4 = 0;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
  psVar2 = (short *)(iVar1 + 0xcc);
  if (*psVar2 != 0) {
    *psVar2 = *psVar2 + -1;
  }
  FUN_0807f8ec(param_1);
  return in_lr;
}


