// undefined FUN_08042d14(void)
// entry 0x8042d14


undefined4 FUN_08042d14(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x60) + -0x80;
  *(int *)(param_1 + 0x60) = iVar4;
  iVar2 = *(int *)(param_1 + 0x5c) + iVar4;
  *(int *)(param_1 + 0x5c) = iVar2;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (-1 < iVar4) goto LAB_08042dd8;
    FUN_08005794(param_1 + 0x74,DAT_08042d74,0xffffffff,0xffffffff,0xffffffff,2);
  }
  else {
    if (bVar1 < 2) {
      if ((bVar1 != 0) || (uVar5 = DAT_08042d54, DAT_08042d50 < iVar4)) goto LAB_08042dd8;
    }
    else {
      if (bVar1 != 2) {
        if ((bVar1 == 3) && (iVar2 < 0)) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined1 *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08042dd4);
          *(undefined4 *)(param_1 + 0xc) = 3;
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
          return in_lr;
        }
        goto LAB_08042dd8;
      }
      uVar5 = DAT_08042d94;
      if (DAT_08042d90 <= iVar4) goto LAB_08042dd8;
    }
    FUN_0801cf00(param_1,uVar5);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08042dd8:
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(iVar8 + 10) >> 4;
  bVar6 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar6 << 4;
  uVar7 = (uint)*(byte *)(iVar8 + 0x24);
  uVar5 = *(undefined4 *)(iVar8 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar8 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  uVar5 = *(undefined4 *)(iVar8 + 0x58);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar8 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar8 = *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x54) -
            (iVar8 * *(short *)((uVar7 + 0x40 & 0xff) * 2 + DAT_08042e94) >> 8);
    iVar2 = DAT_08042e94;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x54) +
            (iVar8 * *(short *)((uVar7 + 0x40 & 0xff) * 2 + DAT_08042e54) >> 8);
    iVar2 = DAT_08042e54;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - (iVar8 * *(short *)(uVar7 * 2 + iVar2) >> 8)
  ;
  return in_lr;
}


