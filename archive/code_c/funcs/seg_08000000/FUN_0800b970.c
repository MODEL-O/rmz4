// undefined FUN_0800b970(void)
// entry 0x800b970


undefined4 FUN_0800b970(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ushort *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  undefined4 in_lr;
  
  iVar10 = 0x9f;
  iVar2 = FUN_08000a70(0x280);
  iVar5 = DAT_0800bca0;
  if (iVar2 != 0) {
    *(int *)(DAT_0800bca0 + 0x174) = iVar2;
    *(uint *)(iVar5 + 0x178) = (*(uint *)(param_1 + 0x5c) >> 4) * 4 + DAT_0800bca4;
    *(undefined4 *)(iVar5 + 0x17c) = DAT_0800bca8;
    iVar5 = DAT_0800bcac;
    iVar6 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(DAT_0800bcac + DAT_0800bcb0);
    iVar3 = *(int *)(param_1 + 0x38) + DAT_0800bcb4;
    uVar11 = iVar3 * 0x10000;
    iVar4 = (int)uVar11 >> 0x10;
    if (0xe0 < iVar4 + 0x9f) {
      puVar9 = (uint *)(iVar2 + 0x27c);
      do {
        *puVar9 = uVar11 | (iVar6 >> 1) + (uint)(uVar1 >> 8) & 0xffff;
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar4 + iVar10 < 0xe1) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(DAT_0800bcb8 + iVar5);
    uVar11 = iVar3 * 0x10000;
    iVar3 = (int)uVar11 >> 0x10;
    if ((0xcb < iVar3 + iVar10) && (-1 < iVar10)) {
      puVar9 = (uint *)(iVar10 * 4 + iVar2);
      do {
        *puVar9 = uVar11 | (iVar4 >> 2) + (uint)(uVar1 >> 8) & 0xffff;
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar3 + iVar10 < 0xcc) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(DAT_0800bcbc + iVar5);
    if ((0xbb < iVar3 + iVar10) && (-1 < iVar10)) {
      puVar9 = (uint *)(iVar10 * 4 + iVar2);
      do {
        *puVar9 = uVar11 | (iVar4 >> 4) + (uint)(uVar1 >> 8) & 0xffff;
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar3 + iVar10 < 0xbc) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(DAT_0800bcc0 + iVar5);
    if ((0xb4 < iVar3 + iVar10) && (-1 < iVar10)) {
      puVar9 = (uint *)(iVar10 * 4 + iVar2);
      do {
        *puVar9 = uVar11 | (iVar4 >> 5) + (uint)(uVar1 >> 8) & 0xffff;
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar3 + iVar10 < 0xb5) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(DAT_0800bcc4 + iVar5);
    if ((0xaf < iVar3 + iVar10) && (-1 < iVar10)) {
      puVar9 = (uint *)(iVar10 * 4 + iVar2);
      do {
        *puVar9 = uVar11 | (iVar4 >> 5) + (uint)(uVar1 >> 8) & 0xffff;
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar3 + iVar10 < 0xb0) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(DAT_0800bcc8 + iVar5);
    if ((0xab < iVar3 + iVar10) && (-1 < iVar10)) {
      puVar9 = (uint *)(iVar10 * 4 + iVar2);
      do {
        *puVar9 = uVar11 | (iVar4 >> 6) + (uint)(uVar1 >> 8) & 0xffff;
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar3 + iVar10 < 0xac) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(DAT_0800bccc + iVar5);
    if ((0xa7 < iVar3 + iVar10) && (-1 < iVar10)) {
      puVar9 = (uint *)(iVar10 * 4 + iVar2);
      do {
        *puVar9 = uVar11 | (iVar4 >> 6) + (uint)(uVar1 >> 8) & 0xffff;
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar3 + iVar10 < 0xa8) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(DAT_0800bcd0 + iVar5);
    if ((0x9f < iVar3 + iVar10) && (-1 < iVar10)) {
      puVar9 = (uint *)(iVar10 * 4 + iVar2);
      do {
        *puVar9 = uVar11 | (iVar4 >> 7) + (uint)(uVar1 >> 8) & 0xffff;
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar3 + iVar10 < 0xa0) break;
      } while (-1 < iVar10);
    }
    if (-1 < iVar10) {
      iVar5 = iVar10 * -0x10000 + 0x980000;
      piVar7 = (int *)(iVar10 * 4 + iVar2);
      do {
        *piVar7 = iVar5;
        iVar5 = iVar5 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
    }
  }
  if (*(short *)(DAT_0800bcac + DAT_0800bcd4) != 0x100) {
    iVar10 = 0x9f;
    iVar2 = FUN_08000a70(0x140);
    iVar5 = DAT_0800bca0;
    if (iVar2 != 0) {
      *(int *)(DAT_0800bca0 + 400) = iVar2;
      *(uint *)(iVar5 + 0x194) = (*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800bcd8;
      *(undefined4 *)(iVar5 + 0x198) = DAT_0800bcdc;
      uVar1 = (ushort)*(undefined4 *)(param_1 + 100);
      iVar5 = *(int *)(param_1 + 0x38) + DAT_0800bcb4;
      sVar12 = (short)iVar5;
      if (*(short *)(param_1 + 0x10) != 0) {
        sVar12 = (short)((uint)(iVar5 * 0x10000 + DAT_0800bce0) >> 0x10);
      }
      if (0xcb < sVar12 + 0x9f) {
        puVar8 = (ushort *)(iVar2 + 0x13e);
        do {
          *puVar8 = uVar1 | 0x45;
          puVar8 = puVar8 + -1;
          iVar10 = iVar10 + -1;
          if (sVar12 + iVar10 < 0xcc) break;
        } while (-1 < iVar10);
      }
      if (-1 < iVar10) {
        puVar8 = (ushort *)(iVar10 * 2 + iVar2);
        do {
          *puVar8 = uVar1 | 0x47;
          puVar8 = puVar8 + -1;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
      }
    }
  }
  return in_lr;
}


