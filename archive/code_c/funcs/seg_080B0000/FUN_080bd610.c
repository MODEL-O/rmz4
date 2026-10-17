// undefined FUN_080bd610(void)
// entry 0x80bd610


undefined4 FUN_080bd610(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  
  iVar5 = *DAT_080bd6a4;
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0xf) == '\0') && (*(char *)(DAT_080bd6a8 + iVar5) != '\0')) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined1 *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar11 = *(int *)(param_1 + 0x54);
    iVar6 = FUN_08128fb8(*(int *)(iVar5 + 0x15c) - iVar11,*(undefined1 *)(param_1 + 0x13));
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar12 = *(int *)(param_1 + 0x58);
    iVar7 = FUN_08128fb8(*(int *)(iVar5 + 0x160) - iVar12,*(undefined1 *)(param_1 + 0x13));
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x54) = iVar6 + iVar11;
    *(int *)(param_1 + 0x58) = iVar12 + iVar7;
    bVar1 = *(byte *)(param_1 + 0x13);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x13) = bVar1 - 1;
    if (bVar1 != 0) {
      if (*(char *)(DAT_080bd704 + iVar5) != '\0') {
        return in_lr;
      }
      *(byte *)(param_1 + 0x13) = bVar1 + 0xf;
      *(undefined1 *)(param_1 + 0xf) = 2;
      return in_lr;
    }
    *(char *)(iVar5 + 0x164) = *(char *)(iVar5 + 0x164) + '\x01';
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
LAB_080bd762:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar8 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bd780);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar8 + 0xc);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xf) == '\x02') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    bVar1 = *(byte *)(param_1 + 0x13);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x13) = bVar1 - 1;
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    goto LAB_080bd762;
  }
  puVar9 = (uint *)(param_1 + 0x8c);
  if ((*puVar9 & 0x1000) != 0) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_080bd7e0,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(int *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x5c) * -3) / 2;
      *(int *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) * -3) / 2;
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else if (*(int *)(param_1 + 0x60) < 0) {
      FUN_08002b10(0x2b);
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    }
    else {
      FUN_08002b10(0x2b);
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    }
  }
  if ((DAT_080bd828 & *puVar9) == 0) {
    if ((*puVar9 & 4) != 0) {
      *puVar9 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      uVar10 = 2;
      goto LAB_080bd88a;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if ((cVar3 != '\0') &&
       ((((*(char *)(param_1 + 0x10) == '\0' ||
          (uVar4 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
          uVar4 == 0)) || ((uVar4 & 0x8000) != 0)) || ((uVar4 & 0xf) == 0xf)))) {
      if (*(char *)(param_1 + 0xd) == '\0') {
        if (*(char *)(param_1 + 0xe) == '\0') {
          if (*DAT_080bd8cc != '\0') {
            FUN_08005784(param_1 + 0x74,DAT_080bd8d0);
            *(undefined1 *)(param_1 + 0xe) = 1;
          }
        }
        else if (*DAT_080bd908 == '\0') {
          FUN_08005784(param_1 + 0x74,DAT_080bd90c);
          *(undefined1 *)(param_1 + 0xe) = 0;
        }
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      return in_lr;
    }
  }
  else {
    *puVar9 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  uVar10 = 3;
LAB_080bd88a:
  FUN_080d0c88(uVar10,param_1 + 0x54);
  piVar8 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bd8a4);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar8 + 8);
  return in_lr;
}


