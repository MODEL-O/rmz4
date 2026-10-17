// undefined FUN_080cd0c4(void)
// entry 0x80cd0c4


undefined4 FUN_080cd0c4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_080d0c88(3,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd0ec);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


