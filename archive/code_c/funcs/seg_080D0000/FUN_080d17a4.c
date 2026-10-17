// undefined FUN_080d17a4(void)
// entry 0x80d17a4


void FUN_080d17a4(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d17b8);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return;
}


