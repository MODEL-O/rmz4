// undefined FUN_08065180(void)
// entry 0x8065180


undefined4 FUN_08065180(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08065a94(param_1,0);
    iVar3 = *(int *)(param_1 + 0xd0);
    iVar7 = *(int *)(param_1 + 0x54);
    if ((iVar7 == iVar3 + 0x2800) || (iVar5 = iVar3 + 0xc800, iVar7 == iVar5)) {
      bVar11 = false;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      iVar5 = iVar7;
    }
    else {
      if (iVar7 < iVar3 + 0x7800) {
        iVar5 = iVar3 + 0x2800;
      }
      bVar11 = iVar7 < iVar5;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(uint *)(param_1 + 100) = (uint)bVar11 * 0x10 + -8;
    }
    *(int *)(param_1 + 0xdc) = iVar5;
    iVar3 = (uint)(*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xd4) + 0x8800) * 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x68) = (iVar3 + -1) * 8;
    *(byte *)(param_1 + 0x13) = (byte)iVar3 | bVar11;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar8 = *(byte *)(param_1 + 0x13) & 1;
  uVar4 = *(byte *)(param_1 + 0x13) >> 1 & 1;
  iVar10 = *(int *)(param_1 + 0xdc);
  iVar7 = *(int *)(param_1 + 0xd4) + (uVar4 * 2 + -1) * -0x1800 + 0x8800;
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08065308) * 4 +
                               DAT_08065304)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_0806530c))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar9 = *(int *)(param_1 + 0x5c);
  iVar3 = -*(int *)(param_1 + 100);
  iVar5 = FUN_08128fb8(-iVar9,iVar3);
  if (-1 < (int)(((*(int *)(param_1 + 0x54) + ((iVar9 * 2 + iVar3 * iVar5) * (iVar5 + 1) >> 1)) -
                 iVar10) * (uVar8 * 2 + -1))) {
    *(int *)(param_1 + 100) = iVar3;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  if (iVar3 < 0) {
    iVar5 = DAT_08065310;
    if (iVar3 < DAT_08065310) {
LAB_08065320:
      *(int *)(param_1 + 0x5c) = iVar5;
    }
  }
  else if ((0 < iVar3) && (iVar5 = 0x200, 0x200 < iVar3)) goto LAB_08065320;
  if (-1 < (int)((uVar8 * 2 + -1) * (*(int *)(param_1 + 0x54) - iVar10))) {
    *(int *)(param_1 + 0x54) = iVar10;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  iVar9 = *(int *)(param_1 + 0x60);
  iVar3 = -*(int *)(param_1 + 0x68);
  iVar5 = FUN_08128fb8(-iVar9,iVar3);
  iVar6 = uVar4 * 2;
  if (-1 < ((*(int *)(param_1 + 0x58) + ((iVar9 * 2 + iVar3 * iVar5) * (iVar5 + 1) >> 1)) - iVar7) *
           (iVar6 + -1)) {
    *(int *)(param_1 + 0x68) = iVar3;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar9;
  iVar9 = iVar9 + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar9;
  if (iVar9 < 0) {
    iVar3 = DAT_08065384;
    if (DAT_08065384 <= iVar9) goto LAB_08065396;
  }
  else if ((iVar9 < 1) || (iVar3 = 0x200, iVar9 < 0x201)) goto LAB_08065396;
  *(int *)(param_1 + 0x60) = iVar3;
LAB_08065396:
  if (-1 < (iVar6 + -1) * (*(int *)(param_1 + 0x58) - iVar7)) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if ((*(int *)(param_1 + 0x54) == iVar10) &&
     ((*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0x58)) + 0xa000U < 0x3001)) {
    if ((bool)(bVar1 >> 4 & 1) == *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xd0) + 0x7800) {
      uVar2 = 3;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0xe) = uVar2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


