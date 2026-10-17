// undefined FUN_080ca5d0(void)
// entry 0x80ca5d0


undefined4 FUN_080ca5d0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  byte bVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080ca678));
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,
               (uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080ca67c) * 0x18 + DAT_080ca680
               ,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080ca6fc);
    iVar3 = DAT_080ca704;
    iVar2 = DAT_080ca700;
    *(int *)(param_1 + 0x5c) =
         *(short *)((-*(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080ca704) - 0x40U & 0xff) *
                    2 + DAT_080ca700) * 6;
    sVar1 = *(short *)((-*(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + iVar3) - 0x80U & 0xff) * 2 +
                      iVar2);
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) - *(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080ca684);
    iVar3 = DAT_080ca68c;
    iVar2 = DAT_080ca688;
    *(int *)(param_1 + 0x5c) =
         *(short *)((*(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080ca68c) + 0x40U & 0xff) *
                    2 + DAT_080ca688) * 6;
    sVar1 = *(short *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) * 4 + iVar3) * 2 + iVar2);
  }
  *(int *)(param_1 + 0x60) = sVar1 * 6;
  bVar6 = *(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080ca708);
  if (bVar6 == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar4;
  bVar6 = bVar6 & 1;
  *(byte *)(param_1 + 0x4d) = bVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar6 << 5;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080ca760);
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ca764);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  FUN_080ca570(param_1);
  return in_lr;
}


