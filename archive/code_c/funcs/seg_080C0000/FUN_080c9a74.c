// undefined FUN_080c9a74(void)
// entry 0x80c9a74


undefined4 FUN_080c9a74(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c9b1c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar1 = DAT_080c9b20;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((*(byte *)(param_1 + 0xb4) + 0x40 & 0xff) * 2 + DAT_080c9b20) / 2;
  *(int *)(param_1 + 0x60) = (int)*(short *)((uint)*(byte *)(param_1 + 0xb4) * 2 + iVar1) / 2;
  *(undefined1 *)(param_1 + 0x12) = 0x18;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c9b24,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c9b28(param_1);
  return in_lr;
}


