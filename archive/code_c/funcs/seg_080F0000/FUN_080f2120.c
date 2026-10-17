// undefined FUN_080f2120(void)
// entry 0x80f2120


undefined4 FUN_080f2120(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  FUN_08005760(param_1 + 0x74,DAT_080f2168,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f216c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080f2170(param_1);
  return in_lr;
}


