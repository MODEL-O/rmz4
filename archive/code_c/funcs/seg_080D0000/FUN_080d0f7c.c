// undefined FUN_080d0f7c(void)
// entry 0x80d0f7c


undefined4 FUN_080d0f7c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d0fa0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d0fa4();
  return in_lr;
}


