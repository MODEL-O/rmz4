// undefined FUN_080c719c(void)
// entry 0x80c719c


undefined4 FUN_080c719c(int param_1)

{
  undefined4 in_lr;
  
  if (((*(char *)(*(int *)(param_1 + 0x2c) + 0xd) == '\0') && ((*(uint *)(param_1 + 0x14) & 4) != 0)
      ) && (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) == '\0')) {
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd) = 1;
  }
  return in_lr;
}


