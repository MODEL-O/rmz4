// undefined FUN_080cc2b4(void)
// entry 0x80cc2b4


undefined4 FUN_080cc2b4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080cc378);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080cc37c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar1 = DAT_080cc380;
  *(int *)(param_1 + 0x5c) =
       *(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_080cc380) * 7 >> 2;
  *(int *)(param_1 + 0x60) = *(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar1) * 7 >> 2;
  *(undefined4 *)(param_1 + 0x68) = 0xfffffffc;
  *(undefined1 *)(param_1 + 0x12) = 0x18;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cc384);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080cc0a4(param_1);
  return in_lr;
}


