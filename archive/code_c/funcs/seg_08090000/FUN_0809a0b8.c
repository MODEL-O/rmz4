// undefined FUN_0809a0b8(void)
// entry 0x809a0b8


undefined4 FUN_0809a0b8(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_0809a110);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0809a114,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = *(int *)(*DAT_0809a130 + 0x54);
    iVar4 = *(int *)(param_1 + 0x54);
    piVar3 = DAT_0809a130;
    if (iVar1 < iVar4) goto LAB_0809a128;
  }
  else {
    iVar1 = *(int *)(*DAT_0809a118 + 0x54);
    iVar4 = *(int *)(param_1 + 0x54);
    piVar3 = DAT_0809a118;
    if (iVar4 < iVar1) {
LAB_0809a128:
      iVar1 = iVar1 + 0x1800;
      goto LAB_0809a138;
    }
  }
  iVar1 = iVar1 + DAT_0809a194;
LAB_0809a138:
  uVar2 = FUN_08128bdc((iVar1 - iVar4) * 0x100 >> 0x10,
                       (*(int *)(*piVar3 + 0x58) - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
  iVar1 = DAT_0809a198;
  uVar2 = (uVar2 & 0xffff) >> 8;
  *(int *)(param_1 + 0x5c) = *(short *)((uVar2 + 0x40 & 0xff) * 2 + DAT_0809a198) * 9 >> 1;
  *(int *)(param_1 + 0x60) = *(short *)(uVar2 * 2 + iVar1) * 9 >> 1;
  iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar1 + DAT_0809a19c;
  return in_lr;
}


