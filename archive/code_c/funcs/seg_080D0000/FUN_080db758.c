// undefined FUN_080db758(void)
// entry 0x80db758


undefined4 FUN_080db758(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_080d0c88(1,param_1 + 0x54);
  FUN_08002b10(0x2a);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080db784);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


