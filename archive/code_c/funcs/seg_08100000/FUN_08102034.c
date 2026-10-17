// undefined FUN_08102034(void)
// entry 0x8102034


undefined4 FUN_08102034(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002624(*(undefined2 *)(param_1 + 0xbc));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08102058);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


