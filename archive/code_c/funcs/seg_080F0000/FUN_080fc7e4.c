// undefined FUN_080fc7e4(void)
// entry 0x80fc7e4


undefined4 FUN_080fc7e4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    if ((*(char *)(iVar1 + 8) == '\0') && (*(char *)(iVar1 + 9) == '\0')) {
      *(int *)(*(int *)(param_1 + 0x2c) + 0xc0) = iVar1;
    }
  }
  return in_lr;
}


