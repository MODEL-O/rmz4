// undefined FUN_080ed420(void)
// entry 0x80ed420


undefined4 FUN_080ed420(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined1 *)(param_1 + 0x12) = 1;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ed448);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080ed44c();
  return in_lr;
}


