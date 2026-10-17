// undefined FUN_080d37e8(void)
// entry 0x80d37e8


undefined4 FUN_080d37e8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080d3808 + 4) = 0;
  }
  FUN_080d0c30(param_1);
  return in_lr;
}


