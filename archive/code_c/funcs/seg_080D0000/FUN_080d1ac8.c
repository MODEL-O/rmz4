// undefined FUN_080d1ac8(void)
// entry 0x80d1ac8


undefined4 FUN_080d1ac8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(undefined1 *)(param_1 + 0x13) = 0x80;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d1b0c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d1a90(param_1);
  return in_lr;
}


