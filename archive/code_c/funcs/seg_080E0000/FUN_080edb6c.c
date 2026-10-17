// undefined FUN_080edb6c(void)
// entry 0x80edb6c


undefined4 FUN_080edb6c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080edb88);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  FUN_080ed7e0();
  return in_lr;
}


