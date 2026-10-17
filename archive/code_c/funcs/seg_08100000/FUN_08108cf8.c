// undefined FUN_08108cf8(void)
// entry 0x8108cf8


undefined4 FUN_08108cf8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xb8) = iVar1;
  }
  return in_lr;
}


