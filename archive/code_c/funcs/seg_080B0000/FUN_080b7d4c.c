// undefined FUN_080b7d4c(void)
// entry 0x80b7d4c


undefined4 FUN_080b7d4c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  FUN_0801cf00(param_1,0xb200);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x17;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080b7de8,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b7dec;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b7df0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080b7df4(param_1);
  return in_lr;
}


