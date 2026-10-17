// undefined FUN_08092238(void)
// entry 0x8092238


undefined4 FUN_08092238(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080922a0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_080922a4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080922a8,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080922ac;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  FUN_080922b0(param_1);
  return in_lr;
}


