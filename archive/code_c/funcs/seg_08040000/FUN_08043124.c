// undefined FUN_08043124(void)
// entry 0x8043124


undefined4 FUN_08043124(int param_1)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  uint *puVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    cVar2 = FUN_08041318(iVar10,param_1 + 0x54);
    puVar9 = DAT_08043338;
    puVar1 = DAT_08043250;
    if (cVar2 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804319c);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 0xc);
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(iVar10 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x180;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        iVar6 = DAT_08043200;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = DAT_080431fc;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        iVar6 = DAT_08043200;
      }
    }
    else {
      if (*(int *)(iVar10 + 0x54) < *(int *)(param_1 + 0x54)) {
        uVar5 = *DAT_08043250 * DAT_08043254 + DAT_08043258;
        *DAT_08043250 = uVar5 & 0x7fffffff;
        *(uint *)(param_1 + 0x5c) = ((uVar5 & 0x1ffffff) >> 0x10) + 0x180;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        puVar9 = puVar1;
      }
      else {
        uVar5 = *DAT_08043338 * DAT_0804333c + DAT_08043340;
        *DAT_08043338 = uVar5 & 0x7fffffff;
        *(uint *)(param_1 + 0x5c) = DAT_08043344 - ((uVar5 & 0x1ffffff) >> 0x10);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      uVar5 = *puVar9 * DAT_0804333c + DAT_08043340;
      *puVar9 = uVar5 & 0x7fffffff;
      iVar6 = ((uVar5 & 0x1ffffff) >> 0x10) + DAT_08043348;
    }
    *(int *)(param_1 + 0x60) = iVar6;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0804334c,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_08043350;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0803aa4c(iVar10);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  iVar10 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar10;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sVar4 = FUN_0804353c(iVar10 + DAT_08043390,*(undefined4 *)(param_1 + 0x58));
    if (sVar4 == 0) goto LAB_080433b8;
    iVar10 = FUN_0800834c(*(int *)(param_1 + 0x54) + DAT_08043390,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar10;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar3 = *(byte *)(param_1 + 10);
    bVar8 = ~(bVar3 >> 4) & 1;
    if (bVar8 == 0) goto LAB_08043394;
    bVar3 = bVar3 | 0x10;
  }
  else {
    sVar4 = FUN_0804353c(iVar10 + 0x800,*(undefined4 *)(param_1 + 0x58));
    if (sVar4 == 0) goto LAB_080433b8;
    iVar10 = FUN_0800816c(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar10;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar3 = *(byte *)(param_1 + 10);
    bVar8 = ~(bVar3 >> 4) & 1;
    if (bVar8 == 0) {
LAB_08043394:
      bVar3 = bVar3 & 0xef;
    }
    else {
      bVar3 = bVar3 | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(byte *)(param_1 + 0x4c) = bVar8;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar8 << 4;
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
LAB_080433b8:
  iVar10 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar10;
  if (0x700 < iVar10) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar10 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar10;
  sVar4 = FUN_0804353c(*(undefined4 *)(param_1 + 0x54),iVar10 + 0x800);
  if (sVar4 != 0) {
    iVar10 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar10;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  sVar4 = FUN_0804353c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_08043478);
  if (sVar4 != 0) {
    iVar10 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_08043478);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar10;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if ((5 < *(byte *)(param_1 + 0x13)) || ((*(uint *)(param_1 + 0x8c) & DAT_0804347c) != 0)) {
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x35);
    piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08043480);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 8);
    FUN_08043484(param_1);
  }
  return in_lr;
}


