// undefined FUN_08108aac(void)
// entry 0x8108aac


undefined4 FUN_08108aac(int param_1)

{
  byte bVar1;
  short sVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0x11) == '\0') {
    sVar2 = *(short *)(param_1 + 0x12);
    uVar7 = sVar2 - 1;
    *(ushort *)(param_1 + 0x12) = uVar7;
    if ((ushort)(sVar2 - 1U) < 0x3c) {
      if ((uVar7 & 2) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
  }
  puVar3 = (uint *)(param_1 + 0x8c);
  if (((*puVar3 & 4) != 0) && (*(int *)(param_1 + 0xb8) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08108b30);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_08108cc0(param_1);
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x11) < 2) &&
     ((*(short *)(param_1 + 0x12) == 0 ||
      (uVar5 = FUN_0801fb14(DAT_08108b88,param_1 + 0x54), 0x8000 < uVar5)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08108b8c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    piVar4 = (int *)(param_1 + 0xb4);
    if ((*(int *)(param_1 + 0x58) < *piVar4) ||
       (sVar2 = FUN_08108d14(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)), sVar2 == 0))
    {
      sVar2 = FUN_08108d14(*(undefined4 *)(param_1 + 0x54),*piVar4);
      if ((sVar2 != 0) &&
         (iVar8 = FUN_08108d54(*(undefined4 *)(param_1 + 0x54),*piVar4),
         iVar8 < *(int *)(param_1 + 0x58) + DAT_08108c0c)) {
        iVar8 = FUN_08108d84(*(undefined4 *)(param_1 + 0x54),*piVar4);
        *piVar4 = iVar8;
      }
    }
    else {
      uVar6 = FUN_08108d54(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar6;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    iVar8 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
    if (DAT_08108c10 < iVar8) {
      return in_lr;
    }
    *(int *)(param_1 + 0x60) = iVar8 + 0x40;
    return in_lr;
  }
  iVar8 = FUN_08108d54(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar10 = *(int *)(param_1 + 0x58);
  if (iVar8 < iVar10) {
    *(int *)(param_1 + 0x58) = iVar8;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if (iVar10 < iVar8) {
    iVar9 = *(int *)(param_1 + 0x60);
    if (iVar9 == 0) {
      if (iVar8 <= iVar10 + 0x700) {
        *(int *)(param_1 + 0x58) = iVar8;
        goto LAB_08108c62;
      }
      *(undefined4 *)(param_1 + 0x60) = 0x40;
      iVar10 = iVar10 + 0x40;
    }
    else {
      if (iVar9 <= DAT_08108cb4) {
        *(int *)(param_1 + 0x60) = iVar9 + 0x40;
      }
      iVar10 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    }
    *(int *)(param_1 + 0x58) = iVar10;
  }
LAB_08108c62:
  iVar8 = FUN_08108db4(*(int *)(param_1 + 0x54) + DAT_08108cb8,*(int *)(param_1 + 0x58) + 0x400);
  if (((iVar8 != 0) ||
      (iVar8 = FUN_08108db4(*(int *)(param_1 + 0x54) + 0x700,*(int *)(param_1 + 0x58) + 0x400),
      iVar8 != 0)) &&
     (sVar2 = FUN_08108d14(*(int *)(param_1 + 0x54) + iVar8,*(int *)(param_1 + 0x58) + DAT_08108cbc)
     , sVar2 == 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
  }
  return in_lr;
}


