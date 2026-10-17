// undefined FUN_080ac300(void)
// entry 0x80ac300


undefined4 FUN_080ac300(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *DAT_080ac33c;
  if ((iVar1 != 0) && ((*(uint *)(param_1 + 0x8c) & 0x800) != 0)) {
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(int *)(iVar1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xb4);
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xb8);
  }
  return in_lr;
}


