// undefined FUN_080c4cec(void)
// entry 0x80c4cec


undefined4 FUN_080c4cec(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c4d28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  FUN_0801cc9c(param_1);
  FUN_080c4eac(param_1);
  return in_lr;
}


