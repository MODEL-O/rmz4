// undefined FUN_080cc388(void)
// entry 0x80cc388


undefined4 FUN_080cc388(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080cc3fc);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080cc400,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x54) + DAT_080cc468;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54) + 0x2400;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080cc46c;
  iVar2 = DAT_080cc470;
  *(int *)(param_1 + 0x5c) =
       *(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_080cc470) * 3;
  *(int *)(param_1 + 0x60) = *(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar2) * 3;
  FUN_080cbf1c(param_1 + 0x54,0,1,*(undefined1 *)(param_1 + 0x11));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cc474);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080cc0a4(param_1);
  return in_lr;
}


