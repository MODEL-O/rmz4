// undefined FUN_080e4318(void)
// entry 0x80e4318


undefined4 FUN_080e4318(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0xd400);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0x12) = 0x23;
  uVar3 = DAT_080e43c8 * *DAT_080e43c4 + DAT_080e43cc;
  *DAT_080e43c4 = uVar3 & 0x7fffffff;
  iVar1 = DAT_080e43d0;
  iVar4 = ((uVar3 & 0x7fffffff) >> 0x10 & 7) + 0x40;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       iVar4 * *(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_080e43d0);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar1) * iVar4;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e43d4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080e4284(param_1);
  return in_lr;
}


