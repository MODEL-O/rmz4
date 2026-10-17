// undefined FUN_080f3d04(void)
// entry 0x80f3d04


undefined4 FUN_080f3d04(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(uint *)(param_1 + 0x30) = (uint)*(byte *)(param_1 + 0x10) * 8 + DAT_080f3d3c;
  *(undefined2 *)(param_1 + 0x26) = 1;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f3d40);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080f3d44();
  return in_lr;
}


