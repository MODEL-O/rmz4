// undefined FUN_08095c44(void)
// entry 0x8095c44


undefined4 FUN_08095c44(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002b10(0x35);
  FUN_080d0c88(1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08095c8c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


