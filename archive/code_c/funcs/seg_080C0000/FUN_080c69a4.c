// undefined FUN_080c69a4(void)
// entry 0x80c69a4


undefined4 FUN_080c69a4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar9 = *DAT_080c69d8;
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0xd) < 2) {
    bVar1 = *(byte *)(iVar2 + 10) >> 4;
    bVar8 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar8;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar8 << 4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(iVar2 + 0x54) + DAT_080c6a38;
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x54) + 0x1100;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + DAT_080c6a3c;
    if (4 < (byte)(*(char *)(iVar2 + 0xd) - 0xeU)) {
LAB_080c6a52:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c6a90);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
      return in_lr;
    }
  }
  else {
    uVar4 = FUN_0801fb14(DAT_080c6a8c,param_1 + 0x54);
    if (0x3000 < uVar4) goto LAB_080c6a52;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      return in_lr;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
    goto LAB_080c6c10;
  }
  if (iVar9 != 0) {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x54) + DAT_080c6b30;
      iVar6 = *(int *)(DAT_080c6b34 + 0x38) + DAT_080c6b38;
      if (iVar3 < iVar6) {
        iVar3 = iVar6;
      }
      if ((*(byte *)(iVar9 + 10) & 0x10) == 0) goto LAB_080c6b40;
      *(undefined1 *)(iVar9 + DAT_080c6b3c) = 1;
      *(byte *)(iVar9 + 0x172) = bVar1 & 0x10;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54) + 0x3100;
      iVar6 = *(int *)(DAT_080c6af4 + 0x38) + DAT_080c6af8;
      if (iVar6 < iVar3) {
        iVar3 = iVar6;
      }
      bVar1 = *(byte *)(iVar9 + 10);
      if ((bVar1 & 0x10) == 0) {
        *(undefined1 *)(iVar9 + DAT_080c6afc) = 1;
        *(byte *)(iVar9 + 0x172) = bVar1 & 0x10;
      }
      else {
LAB_080c6b40:
        *(undefined1 *)(iVar9 + DAT_080c6b6c) = 1;
        *(undefined1 *)(iVar9 + 0x172) = 1;
      }
    }
    iVar10 = *(int *)(param_1 + 0x58) + 0x1500;
    iVar6 = *(int *)(iVar9 + 0x54);
    if (iVar6 - iVar3 < 0) {
      if (0x800 < iVar3 - iVar6) goto LAB_080c6b7a;
LAB_080c6b92:
      *(int *)(iVar9 + 0x54) = iVar3;
    }
    else {
      if (iVar6 - iVar3 < 0x801) goto LAB_080c6b92;
LAB_080c6b7a:
      iVar7 = DAT_080c6b84;
      if (iVar6 <= iVar3) {
        iVar7 = 0x800;
      }
      *(int *)(iVar9 + 0x54) = iVar6 + iVar7;
    }
    iVar3 = *(int *)(iVar9 + 0x58);
    iVar6 = iVar3 - iVar10;
    if (iVar6 < 0) {
      iVar6 = iVar10 - iVar3;
    }
    if (iVar6 < 0x801) {
      *(int *)(iVar9 + 0x58) = iVar10;
    }
    else if (iVar10 < iVar3) {
      *(int *)(iVar9 + 0x58) = iVar3 + DAT_080c6bc0;
    }
    else {
      *(int *)(iVar9 + 0x58) = iVar3 + 0x800;
    }
  }
  if (*(char *)(iVar2 + 0xd) != '\x11') {
    return in_lr;
  }
  FUN_08005784(param_1 + 0x74,DAT_080c6bf8);
  iVar2 = DAT_080c6cb0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x5c) = DAT_080c6cb0;
    iVar2 = iVar2 + 0x80;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x400;
    iVar2 = 0x380;
  }
  *(int *)(param_1 + 100) = iVar2;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080c6c10:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  bVar1 = FUN_08129120(*(undefined1 *)(param_1 + 0x12),10);
  if ((*(byte *)(param_1 + 0x13) != bVar1) && (bVar1 < 4)) {
    *(byte *)(param_1 + 0x13) = bVar1;
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x13) * 0x18 + DAT_080c6cb4);
  }
  if ((iVar9 != 0) && ((*(uint *)(iVar9 + 0x8c) & 1) != 0)) {
    *(byte *)(iVar9 + 0x142) = *(byte *)(iVar9 + 0x142) | 0x40;
    *(undefined1 *)(iVar9 + 0xd) = 4;
    *(undefined1 *)(iVar9 + 0xe) = 0;
    *(undefined4 *)(iVar9 + 0x128) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(iVar9 + 300) = 0;
    *(undefined4 *)(iVar9 + 0x130) = 0;
    *(undefined4 *)(iVar9 + 0x134) = 0;
    *(undefined2 *)(iVar9 + 0x138) = 8;
    FUN_080c634c(*(undefined4 *)(iVar9 + 0x54),*(undefined4 *)(param_1 + 0x58),
                 *(byte *)(param_1 + 10) >> 4 & 1);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}


