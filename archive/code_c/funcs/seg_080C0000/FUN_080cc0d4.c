// undefined FUN_080cc0d4(void)
// entry 0x80cc0d4


undefined4 FUN_080cc0d4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_0801cf00(param_1,DAT_080cc114);
    FUN_080cbf1c(param_1 + 0x54,0,2,*(undefined1 *)(param_1 + 0x13));
    *(undefined1 *)(param_1 + 0x12) = 2;
  }
  else {
    FUN_0801cf00(param_1,0x9500);
    *(undefined1 *)(param_1 + 0x12) = 4;
  }
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080cc1b8,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar1 = DAT_080cc1bc;
  *(int *)(param_1 + 0x5c) =
       *(short *)((*(byte *)(param_1 + 0x13) + 0x40 & 0xff) * 2 + DAT_080cc1bc) * 3;
  *(int *)(param_1 + 0x60) = *(short *)((uint)*(byte *)(param_1 + 0x13) * 2 + iVar1) * 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cc1c0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080cc0a4(param_1);
  return in_lr;
}


