// undefined FUN_080e4f5c(void)
// entry 0x80e4f5c


undefined4 FUN_080e4f5c(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  pbVar2 = (byte *)(param_1 + 0x4a);
  *pbVar2 = *pbVar2 & 0xef;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e4fe4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080e4fe8 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *pbVar2 = *pbVar2 & 0xef | 0x10;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080e4fec));
  FUN_080e4ff0(param_1);
  return in_lr;
}


