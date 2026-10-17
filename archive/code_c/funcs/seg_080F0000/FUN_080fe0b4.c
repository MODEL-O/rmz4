// undefined FUN_080fe0b4(void)
// entry 0x80fe0b4


undefined4 FUN_080fe0b4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x12) = (*(byte *)(param_1 + 0x11) & 3) + 6;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fe0dc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080fe040();
  return in_lr;
}


