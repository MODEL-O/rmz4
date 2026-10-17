// undefined FUN_080a234c(void)
// entry 0x80a234c


undefined4 FUN_080a234c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_080d0c88(3,param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x22) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a237c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


