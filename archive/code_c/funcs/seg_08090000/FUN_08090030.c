// undefined FUN_08090030(void)
// entry 0x8090030


undefined4 FUN_08090030(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080900a8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  FUN_0801cc9c(param_1);
  FUN_0801cf00(param_1,DAT_080900ac);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080900b0,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar1 + 0x1c);
  FUN_080900b4(param_1);
  return in_lr;
}


