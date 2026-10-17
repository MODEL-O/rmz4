// undefined FUN_081098a4(void)
// entry 0x81098a4


undefined4 FUN_081098a4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_080df924(param_1 + 0x54,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081098d0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


