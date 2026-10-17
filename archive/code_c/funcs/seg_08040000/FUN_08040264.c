// undefined FUN_08040264(void)
// entry 0x8040264


undefined4 FUN_08040264(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080402ac);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  bVar1 = *(byte *)(param_1 + 0x11) >> 4;
  if (bVar1 == 1) {
    FUN_0801cf00(param_1,DAT_0804035c + (uint)*(byte *)((uVar4 & 4) * 3 + DAT_08040358 + 1) & 0xffff
                );
    uVar4 = *DAT_08040360 * DAT_08040364 + DAT_08040368;
    *DAT_08040360 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = -((uVar4 & 0x7fffffff) >> 0x10 & 0x7f);
    uVar3 = DAT_0804036c;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080403b4;
    FUN_0801cf00(param_1,DAT_08040300 + (uint)*(byte *)((uVar4 & 4) * 3 + DAT_080402fc) & 0xffff);
    uVar4 = *DAT_08040304 * DAT_08040308 + DAT_0804030c;
    *DAT_08040304 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = ((uVar4 & 0x7fffffff) >> 0x10 & 0x7f) + 0x180;
    uVar3 = DAT_08040310;
  }
  else {
    if (bVar1 != 2) goto LAB_080403b4;
    FUN_0801cf00(param_1,DAT_080403e4 + (uint)*(byte *)((uVar4 & 4) * 3 + DAT_080403e0 + 2) & 0xffff
                );
    uVar4 = *DAT_080403e8 * DAT_080403ec + DAT_080403f0;
    *DAT_080403e8 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = ((uVar4 & 0x7fffffff) >> 0x10 & 0x7f) + 0x80;
    uVar3 = DAT_080403f4;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
LAB_080403b4:
  FUN_0801cff0(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  *(byte *)(param_1 + 0x12) = '@' - (*(byte *)(param_1 + 0x11) >> 4);
  FUN_08040154(param_1);
  return in_lr;
}


