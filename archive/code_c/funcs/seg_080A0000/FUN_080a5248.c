// undefined FUN_080a5248(void)
// entry 0x80a5248


undefined4 FUN_080a5248(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002b10(0x3f);
  FUN_080a52e4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a5290);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


