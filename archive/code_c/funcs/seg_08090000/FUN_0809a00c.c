// undefined FUN_0809a00c(void)
// entry 0x809a00c


undefined4 FUN_0809a00c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_0801ce54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_0809a064);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0809a068,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = -*(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_0809a0b0);
  }
  else {
    iVar1 = *(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_0809a06c);
  }
  *(int *)(param_1 + 0x5c) = iVar1;
  *(undefined4 *)(param_1 + 0x60) =
       *(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_0809a0b4);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  return in_lr;
}


