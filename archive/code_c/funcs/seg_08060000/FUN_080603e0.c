// undefined FUN_080603e0(void)
// entry 0x80603e0


undefined4 FUN_080603e0(int param_1)

{
  bool bVar1;
  int *piVar2;
  short *psVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0xb;
    FUN_0801cf00(param_1,DAT_08060444);
    iVar8 = *DAT_08060448;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar8 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar8 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar4 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar4;
    FUN_08002b10(0x118);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) == '\x01') {
      iVar8 = FUN_080dad0c(param_1 + 0x54,0,0xc1);
      *(int *)(param_1 + 0xc0) = iVar8;
      if (iVar8 == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0xd;
        *(undefined1 *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      *(undefined1 *)(iVar8 + 0x74) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x75) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x76) = 0;
      iVar8 = DAT_08060500;
      iVar7 = *(int *)(param_1 + 0xc0);
      *(int *)(iVar7 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08060500;
      *(int *)(iVar7 + 0x68) = *(int *)(param_1 + 0x58) + iVar8;
      iVar8 = DAT_08060504;
      *(int *)(iVar7 + 0x60) = *(int *)(param_1 + 0x58) + DAT_08060504;
      *(int *)(iVar7 + 0x80) = *(int *)(param_1 + 0x58) + iVar8;
      iVar8 = DAT_08060574;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar9 = *(int *)(param_1 + 0xc0);
        *(int *)(iVar9 + 0x54) = *(int *)(param_1 + 0x54) + DAT_08060574;
        iVar6 = *(int *)(param_1 + 0x54);
        iVar7 = DAT_08060578;
      }
      else {
        iVar9 = *(int *)(param_1 + 0xc0);
        iVar8 = 0x1800;
        *(int *)(iVar9 + 0x54) = *(int *)(param_1 + 0x54) + 0x1800;
        iVar6 = *(int *)(param_1 + 0x54);
        iVar7 = 0xf000;
      }
      *(int *)(iVar9 + 100) = iVar6 + iVar7;
      *(int *)(iVar9 + 0x5c) = *(int *)(param_1 + 0x54) + iVar7;
      *(int *)(iVar9 + 0x7c) = *(int *)(param_1 + 0x54) + iVar8;
      *(undefined1 *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    iVar8 = DAT_080605d4;
    piVar2 = DAT_08060580;
    iVar7 = *(int *)(param_1 + 0xc0);
    if (iVar7 != 0) {
      piVar10 = (int *)((uint)*(byte *)(*DAT_08060580 + 0x174) * 8 + DAT_0806057c);
      iVar6 = *piVar10;
      iVar9 = piVar10[1];
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(int *)(iVar7 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080605d4;
        *(int *)(iVar7 + 0x7c) = *(int *)(param_1 + 0x54) + iVar8;
      }
      else {
        *(int *)(iVar7 + 100) = *(int *)(param_1 + 0x54) + 0xf000;
        *(int *)(iVar7 + 0x5c) = *(int *)(param_1 + 0x54) + 0xf000;
      }
      psVar3 = DAT_080605d8;
      if ((DAT_080605d8[4] & 8U) == 0) {
        iVar8 = *piVar2;
        iVar6 = *(int *)(iVar8 + 0x58) + (iVar6 >> 0x10);
        iVar9 = iVar9 >> 0x11;
        if ((*(int *)(iVar7 + 0x58) < iVar6 + iVar9) && (iVar6 - iVar9 < *(int *)(iVar7 + 0x58))) {
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            iVar8 = *(int *)(iVar8 + 0x54);
            if (iVar8 < *(int *)(iVar7 + 100)) {
              *(int *)(iVar7 + 0x54) = iVar8;
              *(int *)(iVar7 + 0x7c) = iVar8;
            }
          }
          else {
            iVar8 = *(int *)(iVar8 + 0x54);
            if (*(int *)(iVar7 + 0x54) < iVar8) {
              *(int *)(iVar7 + 100) = iVar8;
              *(int *)(iVar7 + 0x5c) = iVar8;
            }
          }
        }
      }
      bVar4 = *(byte *)(param_1 + 0x12);
      if ((bVar4 & 1) == 0) {
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x78) = 0xff;
        *(byte *)(*(int *)(param_1 + 0xc0) + 0x79) = bVar4 & 1;
      }
      else if (*psVar3 == 0xb) {
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x78) = 0x39;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x79) = 6;
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x78) = 0x35;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x79) = 10;
      }
      if ((*(char *)(param_1 + 0x12) == '\x06') && (*(int *)(param_1 + 0xc0) != 0)) {
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
    }
    cVar5 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar5;
    if (cVar5 == -1) {
      *(undefined1 *)(param_1 + 0xd) = 0xc;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


