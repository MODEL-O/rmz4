// undefined FUN_080d37ac(void)
// entry 0x80d37ac


undefined4 FUN_080d37ac(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080d37e0 + 4) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d37e4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


