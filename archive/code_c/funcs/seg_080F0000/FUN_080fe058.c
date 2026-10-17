// undefined FUN_080fe058(void)
// entry 0x80fe058


undefined4 FUN_080fe058(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080fe0a8,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080fe0ac;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x1c);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fe0b0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080fe040(param_1);
  return in_lr;
}


