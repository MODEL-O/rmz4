// undefined FUN_08105b4c(void)
// entry 0x8105b4c


undefined4 FUN_08105b4c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08105b68);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  FUN_081057d0();
  return in_lr;
}


