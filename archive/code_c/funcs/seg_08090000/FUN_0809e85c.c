// undefined FUN_0809e85c(void)
// entry 0x809e85c


undefined4 FUN_0809e85c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x35);
  }
  else {
    FUN_080d0c88(2,param_1 + 0x54);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809e89c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


