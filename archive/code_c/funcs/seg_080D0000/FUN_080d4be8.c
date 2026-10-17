// undefined FUN_080d4be8(void)
// entry 0x80d4be8


undefined4 FUN_080d4be8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(undefined1 *)(param_1 + 0x12) = 0x3c;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d4c20);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d4c24();
  return in_lr;
}


