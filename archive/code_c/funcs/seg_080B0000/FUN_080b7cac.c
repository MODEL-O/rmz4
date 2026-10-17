// undefined FUN_080b7cac(void)
// entry 0x80b7cac


undefined4 FUN_080b7cac(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    FUN_080e7a4c(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b7ce4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


