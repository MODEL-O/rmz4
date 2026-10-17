// undefined FUN_0804ee04(void)
// entry 0x804ee04


undefined4 FUN_0804ee04(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801cff0(param_1);
  iVar5 = DAT_0804ee3c;
  if (*(char *)(param_1 + 0xe) != '\0') {
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 - 1;
    if ((bVar2 & 1) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      FUN_0810dae0(*(undefined1 *)(param_1 + 0xbd),0x17,2);
      FUN_0810da2c(DAT_0804ef98,0x18,2);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    sVar3 = FUN_08007020(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar3 == 0) {
      return in_lr;
    }
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804ef9c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 8);
    FUN_0804f238(param_1);
    return in_lr;
  }
  iVar10 = *(int *)(DAT_0804ee3c + 0x24) + 0xd600;
  iVar8 = *(int *)(param_1 + 0x54) + DAT_0804ee40;
  if (iVar8 < 0) {
    if (0x1b400 - *(int *)(param_1 + 0x54) <= DAT_0804ee68) goto LAB_0804ee56;
  }
  else if (iVar8 <= DAT_0804ee44) {
LAB_0804ee56:
    iVar8 = *(int *)(param_1 + 0x58) - iVar10;
    if (iVar8 < 0) {
      if (iVar10 - *(int *)(param_1 + 0x58) <= DAT_0804eea4) goto LAB_0804ee7a;
    }
    else if (iVar8 <= DAT_0804ee6c) {
LAB_0804ee7a:
      *(undefined1 *)(DAT_0804ee3c + 0x2d) = 2;
      if (*(char *)(param_1 + 0x13) == '\0') {
        pbVar9 = (byte *)(iVar5 + 0x2e);
        *(byte *)(param_1 + 0xbd) = *pbVar9 + 5;
        *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 5 + (uint)*pbVar9;
        bVar2 = *pbVar9;
        *pbVar9 = bVar2 + 1;
        if (5 < (byte)(bVar2 + 1)) {
          *pbVar9 = 5;
        }
        FUN_08002b10(0x1a4);
      }
      else {
        *(undefined1 *)(param_1 + 0xbd) = 2;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 2;
        *(undefined1 *)(iVar5 + 0x2e) = 0;
        FUN_08002b10(DAT_0804eea8);
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0x3c;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    cVar1 = FUN_08041318(iVar4,param_1 + 0x54);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804f004);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0xc);
      return in_lr;
    }
    if (*(int *)(iVar4 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x280;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = DAT_0804f0e4;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    *(undefined4 *)(param_1 + 0x60) = DAT_0804f0e8;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0804f0ec,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_0804f0f0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0803aa4c(iVar4);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sVar3 = FUN_0804f360(iVar5 + DAT_0804f130,*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) goto LAB_0804f158;
    iVar5 = FUN_0800834c(*(int *)(param_1 + 0x54) + DAT_0804f130,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(param_1 + 10);
    bVar7 = ~(bVar2 >> 4) & 1;
    if (bVar7 == 0) goto LAB_0804f134;
    bVar2 = bVar2 | 0x10;
  }
  else {
    sVar3 = FUN_0804f360(iVar5 + 0x800,*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) goto LAB_0804f158;
    iVar5 = FUN_0800816c(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(param_1 + 10);
    bVar7 = ~(bVar2 >> 4) & 1;
    if (bVar7 == 0) {
LAB_0804f134:
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar7 << 4;
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
LAB_0804f158:
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  sVar3 = FUN_0804f360(*(undefined4 *)(param_1 + 0x54),iVar5 + 0x800);
  if (sVar3 != 0) {
    iVar5 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    iVar5 = *(int *)(param_1 + 0x58) + iVar5;
    *(int *)(param_1 + 0x58) = iVar5;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    if (iVar5 < *(int *)(param_1 + 0xb8)) {
      *(undefined1 *)(DAT_0804f228 + 0x2c) = 2;
      cVar1 = *(char *)(param_1 + 0x13) + '\x01';
    }
    else {
      cVar1 = '\x10';
    }
    *(char *)(param_1 + 0x13) = cVar1;
  }
  sVar3 = FUN_0804f360(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_0804f22c);
  if (sVar3 != 0) {
    iVar5 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_0804f22c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if ((0xf < *(byte *)(param_1 + 0x13)) || ((*(uint *)(param_1 + 0x8c) & DAT_0804f230) != 0)) {
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804f234);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 8);
    FUN_0804f238(param_1);
    *(undefined1 *)(DAT_0804f228 + 0x2e) = 0;
  }
  return in_lr;
}


