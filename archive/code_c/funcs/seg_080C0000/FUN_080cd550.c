// undefined FUN_080cd550(void)
// entry 0x80cd550


undefined4 FUN_080cd550(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd62c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080cd630,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  iVar1 = DAT_080cd638;
  iVar3 = DAT_080cd634;
  iVar4 = (int)*(short *)((*(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080cd638) + 0x40 & 0xff)
                          * 2 + DAT_080cd634);
  *(int *)(param_1 + 0x5c) = iVar4 * 3;
  iVar3 = *(short *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) + iVar1) * 2 + iVar3) * -0x300;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  if (*(int *)(param_1 + 0xb4) < *(int *)(*DAT_080cd63c + 0x54)) {
    iVar4 = iVar4 * -0x300;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_0801cf00(param_1,DAT_080cd640);
  FUN_080cd644(param_1);
  return in_lr;
}


