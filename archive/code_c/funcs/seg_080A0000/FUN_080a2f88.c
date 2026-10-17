// undefined FUN_080a2f88(void)
// entry 0x80a2f88


undefined4 FUN_080a2f88(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  byte abStack_18 [8];
  
  FUN_08129258(abStack_18,DAT_080a307c,6);
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080a3080);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,DAT_080a3084);
    iVar5 = DAT_080a3088;
    uVar3 = (uint)abStack_18[bVar1] + (bVar2 >> 4 & 1) * 2 * (0x140 - (uint)abStack_18[bVar1]) &
            0xff;
    iVar4 = *(short *)((uVar3 + 0x40 & 0xff) * 2 + DAT_080a3088) * 0x240;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    iVar5 = *(short *)(uVar3 * 2 + iVar5) * 0x240;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar5 >> 8;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar3 = FUN_0801fb14(DAT_080a308c,param_1 + 0x54);
  if (uVar3 < 0x8001) {
    if (0x2d000 < (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) + 0x16800U) {
      piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a30c8);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 8);
      FUN_080a30cc(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a3090);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0xc);
  }
  return in_lr;
}


