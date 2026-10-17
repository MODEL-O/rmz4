// undefined FUN_080469bc(void)
// entry 0x80469bc


undefined4 FUN_080469bc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08046a70);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08046a74);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08046a78,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08046a7c;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  iVar1 = DAT_08046a80;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((*(byte *)(param_1 + 0x10) + 0x40 & 0xff) * 2 + DAT_08046a80) << 2;
  *(int *)(param_1 + 0x60) = (int)*(short *)((uint)*(byte *)(param_1 + 0x10) * 2 + iVar1) << 2;
  FUN_08046a84(param_1);
  return in_lr;
}


