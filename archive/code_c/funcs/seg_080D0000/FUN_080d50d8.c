// undefined FUN_080d50d8(void)
// entry 0x80d50d8


undefined4 FUN_080d50d8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002c94(param_1 + 0x34,DAT_080d5120);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d5124);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d5128(param_1);
  return in_lr;
}


