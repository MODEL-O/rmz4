// undefined FUN_080acca8(void)
// entry 0x80acca8


undefined4 FUN_080acca8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080acd14);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x7800;
  *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xbc) + 0x5000;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 1;
  FUN_080acda0(param_1);
  return in_lr;
}


