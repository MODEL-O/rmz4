// undefined FUN_080edaf4(void)
// entry 0x80edaf4


undefined4 FUN_080edaf4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080edb28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080ed7c8(param_1);
  return in_lr;
}


