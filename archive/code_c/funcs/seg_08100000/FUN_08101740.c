// undefined FUN_08101740(void)
// entry 0x8101740


undefined4 FUN_08101740(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((((*(uint *)(param_1 + 0x14) & 4) != 0) && (*(char *)(iVar1 + 8) == '\0')) &&
     (*(char *)(iVar1 + DAT_0810176c) != '\0')) {
    *(int *)(*(int *)(param_1 + 0x2c) + 0x2c) = iVar1;
  }
  return in_lr;
}


