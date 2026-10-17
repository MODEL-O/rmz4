// undefined FUN_081119e8(void)
// entry 0x81119e8


undefined4 FUN_081119e8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  undefined4 in_lr;
  
  uVar2 = FUN_08128fb8((param_1 << 0x10) >> 10,0x30);
  iVar9 = 0x100 - *(short *)((uVar2 & 0xff) * 2 + DAT_08111ac4);
  iVar3 = iVar9 * -0x7800;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = iVar9 * -0xf000;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar3 = (iVar3 >> 8) + 0x1000 >> 8;
  iVar5 = iVar9 * 0x78 + 0x8f00 >> 8;
  iVar6 = FUN_08000a70(0x140);
  if (iVar6 != 0) {
    FUN_08000ab4(0,iVar6,0x140);
    iVar1 = DAT_08111ac8;
    iVar10 = iVar3;
    if (iVar3 < 0) {
      iVar10 = 0;
    }
    iVar12 = iVar5 + -0x7f;
    iVar13 = iVar12;
    if (0xa0 < iVar12) {
      iVar13 = 0xa0;
    }
    iVar7 = iVar3 + 0x7f;
    if (iVar10 < iVar13) {
      puVar8 = (undefined2 *)(iVar10 * 2 + iVar6);
      iVar13 = iVar13 - iVar10;
      do {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    if (iVar12 < 0) {
      iVar10 = -iVar12;
      iVar12 = 0;
    }
    else {
      iVar10 = 0;
    }
    iVar13 = iVar5;
    if (0xa0 < iVar5) {
      iVar13 = 0xa0;
    }
    if (iVar12 < iVar13) {
      puVar8 = (undefined2 *)(iVar12 * 2 + iVar6);
      iVar13 = iVar13 - iVar12;
      do {
        iVar12 = FUN_08128fb8((0x7f - iVar10) * 0x7f);
        iVar12 = ((iVar4 >> 8) + 0x3800 >> 8) + iVar12;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        *puVar8 = (short)(iVar12 << 8);
        puVar8 = puVar8 + 1;
        iVar13 = iVar13 + -1;
        iVar10 = iVar10 + 1;
      } while (iVar13 != 0);
    }
    iVar4 = DAT_08111bb8;
    if (iVar3 < 0) {
      iVar10 = -iVar3;
      iVar3 = 0;
    }
    else {
      iVar10 = 0;
    }
    if (0xa0 < iVar7) {
      iVar7 = 0xa0;
    }
    if (iVar3 < iVar7) {
      iVar10 = DAT_08111bb8 * iVar10;
      puVar11 = (ushort *)(iVar3 * 2 + iVar6);
      iVar13 = iVar7 - iVar3;
      do {
        iVar3 = FUN_08128fb8(iVar10,0x7f00);
        iVar3 = (iVar9 * 0xf0 + 0xb700 >> 8) + iVar3;
        if (0xf0 < iVar3) {
          iVar3 = 0xf0;
        }
        *puVar11 = (ushort)iVar3 | *puVar11;
        puVar11 = puVar11 + 1;
        iVar13 = iVar13 + -1;
        iVar10 = iVar10 + iVar4;
        iVar3 = iVar7;
      } while (iVar13 != 0);
    }
    if (0xa0 < iVar5) {
      iVar5 = 0xa0;
    }
    if (iVar3 < iVar5) {
      puVar11 = (ushort *)(iVar3 * 2 + iVar6);
      iVar5 = iVar5 - iVar3;
      do {
        *puVar11 = *puVar11 | 0xf0;
        puVar11 = puVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(int *)(iVar1 + 0x174) = iVar6;
    *(undefined4 *)(iVar1 + 0x178) = DAT_08111bbc;
    *(undefined4 *)(iVar1 + 0x17c) = DAT_08111bc0;
  }
  return in_lr;
}


