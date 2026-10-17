// undefined FUN_08100158(void)
// entry 0x8100158


undefined4 FUN_08100158(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xb4) = iVar1;
  }
  return in_lr;
}


