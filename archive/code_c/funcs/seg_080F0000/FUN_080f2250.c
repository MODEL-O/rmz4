// undefined FUN_080f2250(void)
// entry 0x80f2250


undefined4 FUN_080f2250(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f226c);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  FUN_080f2218();
  return in_lr;
}


