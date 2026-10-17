// undefined FUN_080bff80(void)
// entry 0x80bff80


undefined4 FUN_080bff80(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002b10(0x35);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  FUN_080d0c88(1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bffcc);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


