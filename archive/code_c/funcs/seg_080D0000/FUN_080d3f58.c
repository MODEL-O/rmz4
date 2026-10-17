// undefined FUN_080d3f58(void)
// entry 0x80d3f58


undefined4 FUN_080d3f58(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002c94(param_1 + 0x34,DAT_080d3f9c);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3fa0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d3f20(param_1);
  return in_lr;
}


