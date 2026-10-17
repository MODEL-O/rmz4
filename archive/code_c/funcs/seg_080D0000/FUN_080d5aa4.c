// undefined FUN_080d5aa4(void)
// entry 0x80d5aa4


undefined4 FUN_080d5aa4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002c94(param_1 + 0x34,DAT_080d5ae8);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  *(undefined1 *)(param_1 + 0x77) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d5aec);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d5af0(param_1);
  return in_lr;
}


