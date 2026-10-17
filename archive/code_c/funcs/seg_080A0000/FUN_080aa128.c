// undefined FUN_080aa128(void)
// entry 0x80aa128


undefined4 FUN_080aa128(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_080a9ba4(param_1);
    FUN_0801cf00(param_1,DAT_080aa23c + (uint)*(byte *)(param_1 + 0xbc) & 0xffff);
    uVar2 = FUN_08128bdc((*(int *)(*DAT_080aa240 + 0x54) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10
                         ,((*(int *)(*DAT_080aa240 + 0x58) + 0x1400) - *(int *)(param_1 + 0x58)) *
                          0x100 >> 0x10);
    iVar6 = DAT_080aa244;
    uVar2 = (uVar2 & 0xffff) >> 8;
    iVar5 = (int)*(short *)((uVar2 + 0x40 & 0xff) * 2 + DAT_080aa244);
    iVar3 = iVar5 * -0x780;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar6 = (int)*(short *)(uVar2 * 2 + iVar6);
    iVar3 = iVar6 * -0x780;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    iVar5 = iVar5 * -0xf;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar5 >> 8;
    iVar6 = iVar6 * -0xf;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x68) = iVar6 >> 8;
    FUN_08005784(param_1 + 0x74,DAT_080aa248);
    *(undefined4 *)(param_1 + 0x98) = DAT_080aa24c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68) + 0x40;
  sVar1 = FUN_08007c7c(iVar3,iVar5 + DAT_080aa250);
  if ((sVar1 != 0) ||
     (sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080aa254),
     sVar1 != 0)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080aa258);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    *(undefined1 *)(param_1 + 0xb7) = 0;
  }
  return in_lr;
}


