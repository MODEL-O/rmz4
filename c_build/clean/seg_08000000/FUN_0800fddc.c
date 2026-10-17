// undefined FUN_0800fddc(void)
// entry 0x800fddc


void FUN_0800fddc(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uVar12 = 0x9f;
  iVar4 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x3c);
  uVar13 = (uint)*(ushort *)(param_1 + 0x38);
  if (*(short *)(param_1 + 0x38) <= DAT_0801012c) {
    uVar13 = 0x1b0;
  }
  puVar1 = (uint *)FUN_08000a70(0x280);
  iVar3 = DAT_08010130;
  if (puVar1 != (uint *)0x0) {
    *(uint **)(DAT_08010130 + 0x174) = puVar1;
    *(undefined4 *)(iVar3 + 0x178) = DAT_08010134;
    *(undefined4 *)(iVar3 + 0x17c) = DAT_08010138;
    iVar11 = uVar13 * 0x10000;
    iVar2 = iVar11 + DAT_0801013c;
    iVar9 = *(int *)(param_1 + 0x68);
    iVar3 = (iVar2 >> 0x13) + -6;
    uVar13 = iVar3 * 0x10000;
    iVar5 = (int)uVar13 >> 0x10;
    if (199 < iVar5 + 0x9f) {
      puVar10 = puVar1 + 0x9f;
      do {
        *puVar10 = uVar13 | (iVar9 * 3 >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar5 + uVar12) < 200) break;
      } while (-1 < (int)uVar12);
    }
    iVar5 = *(int *)(param_1 + 0x68);
    uVar13 = iVar3 * 0x10000;
    iVar3 = (int)uVar13 >> 0x10;
    if ((0xbf < (int)(iVar3 + uVar12)) && (-1 < (int)uVar12)) {
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13 | ((iVar5 << 1) >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar3 + uVar12) < 0xc0) break;
      } while (-1 < (int)uVar12);
    }
    iVar5 = *(int *)(param_1 + 0x68);
    if ((0xb7 < (int)(iVar3 + uVar12)) && (-1 < (int)uVar12)) {
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13 | ((iVar5 << 2) >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar3 + uVar12) < 0xb8) break;
      } while (-1 < (int)uVar12);
    }
    iVar5 = *(int *)(param_1 + 0x68);
    if ((0xad < (int)(iVar3 + uVar12)) && (-1 < (int)uVar12)) {
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13 | (iVar5 * 3 >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar3 + uVar12) < 0xae) break;
      } while (-1 < (int)uVar12);
    }
    iVar3 = *(int *)(param_1 + 0x68);
    iVar2 = iVar2 >> 0x10;
    iVar5 = FUN_08128fb8(iVar2,7);
    iVar5 = (DAT_08010140 >> 0x10) + iVar5 + 10;
    iVar9 = iVar5 * 0x10000 >> 0x10;
    if ((0xad < (int)(iVar9 + uVar12)) && (-1 < (int)uVar12)) {
      uVar13 = uVar12 * -0x10000 + 0xae0000;
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13;
        uVar13 = uVar13 + 0x10000;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar9 + uVar12) < 0xae) break;
      } while (-1 < (int)uVar12);
    }
    uVar13 = iVar5 * 0x10000;
    iVar5 = (int)uVar13 >> 0x10;
    if ((0x9f < (int)(iVar5 + uVar12)) && (-1 < (int)uVar12)) {
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13 | ((iVar3 << 1) >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar5 + uVar12) < 0xa0) break;
      } while (-1 < (int)uVar12);
    }
    iVar3 = *(int *)(param_1 + 0x68);
    if ((0x97 < (int)(iVar5 + uVar12)) && (-1 < (int)uVar12)) {
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13 | (iVar3 * 3 >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar5 + uVar12) < 0x98) break;
      } while (-1 < (int)uVar12);
    }
    iVar3 = *(int *)(param_1 + 0x68);
    if ((0x8f < (int)(iVar5 + uVar12)) && (-1 < (int)uVar12)) {
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13 | ((iVar3 << 2) >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar5 + uVar12) < 0x90) break;
      } while (-1 < (int)uVar12);
    }
    iVar3 = *(int *)(param_1 + 0x68);
    if ((0x80 < (int)(iVar5 + uVar12)) && (-1 < (int)uVar12)) {
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13 | (iVar3 * 3 >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar5 + uVar12) < 0x81) break;
      } while (-1 < (int)uVar12);
    }
    iVar3 = *(int *)(param_1 + 0x68);
    iVar5 = FUN_08128fb8(iVar2,6);
    iVar5 = (DAT_08010140 >> 0x10) + iVar5 + 10;
    iVar9 = iVar5 * 0x10000 >> 0x10;
    if ((0x80 < (int)(iVar9 + uVar12)) && (-1 < (int)uVar12)) {
      uVar13 = uVar12 * -0x10000 + 0x830000;
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13;
        uVar13 = uVar13 + 0x10000;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar9 + uVar12) < 0x81) break;
      } while (-1 < (int)uVar12);
    }
    uVar13 = iVar5 * 0x10000;
    iVar5 = (int)uVar13 >> 0x10;
    if ((0x6f < (int)(iVar5 + uVar12)) && (-1 < (int)uVar12)) {
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13 | ((iVar3 << 1) >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar5 + uVar12) < 0x70) break;
      } while (-1 < (int)uVar12);
    }
    iVar3 = *(int *)(param_1 + 0x68);
    iVar2 = FUN_08128fb8(iVar2,5);
    iVar2 = (DAT_08010140 >> 0x10) + iVar2 + 0xe;
    iVar5 = iVar2 * 0x10000 >> 0x10;
    if ((0x6f < (int)(iVar5 + uVar12)) && (-1 < (int)uVar12)) {
      uVar13 = uVar12 * -0x10000 + 0xfa0000;
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13;
        uVar13 = uVar13 + 0x10000;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar5 + uVar12) < 0x70) break;
      } while (-1 < (int)uVar12);
    }
    uVar13 = iVar2 * 0x10000;
    iVar2 = (int)uVar13 >> 0x10;
    if ((99 < (int)(iVar2 + uVar12)) && (-1 < (int)uVar12)) {
      puVar10 = puVar1 + uVar12;
      do {
        *puVar10 = uVar13 | (iVar3 >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + -1;
        uVar12 = uVar12 - 1;
        if ((int)(iVar2 + uVar12) < 100) break;
      } while (-1 < (int)uVar12);
    }
    iVar3 = *(int *)(param_1 + 0x68);
    iVar2 = iVar11 >> 0x10;
    iVar9 = 0;
    uVar13 = ((DAT_08010448 >> 0x10) + (iVar2 + DAT_08010444 >> 2) + 0x14) * 0x10000;
    iVar5 = (int)uVar13 >> 0x10;
    if ((iVar5 < 0x26) && (puVar10 = puVar1, uVar12 < 0x80000000)) {
      do {
        *puVar10 = uVar13 | ((iVar3 << 2) >> 7) + iVar4 & 0xffffU;
        iVar9 = iVar9 + 1;
        if (0x25 < iVar5 + iVar9) break;
        puVar10 = puVar10 + 1;
      } while (iVar9 <= (int)uVar12);
    }
    iVar6 = *(int *)(param_1 + 0x68);
    iVar5 = FUN_08128fb8(iVar2 + DAT_08010444,5);
    iVar3 = DAT_0801044c;
    iVar5 = (DAT_08010448 >> 0x10) + iVar5 + 0x14;
    iVar7 = iVar5 * 0x10000 >> 0x10;
    if ((iVar7 + iVar9 < 0x26) && (iVar9 <= (int)uVar12)) {
      uVar13 = iVar9 * -0x10000 + 0x260000;
      puVar10 = puVar1 + iVar9;
      do {
        *puVar10 = uVar13;
        puVar10 = puVar10 + 1;
        uVar13 = uVar13 + iVar3;
        iVar9 = iVar9 + 1;
        if (0x25 < iVar7 + iVar9) break;
      } while (iVar9 <= (int)uVar12);
    }
    uVar13 = iVar5 * 0x10000;
    iVar3 = (int)uVar13 >> 0x10;
    if ((iVar3 + iVar9 < 0x38) && (iVar9 <= (int)uVar12)) {
      puVar10 = puVar1 + iVar9;
      do {
        *puVar10 = uVar13 | (iVar6 * 3 >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + 1;
        iVar9 = iVar9 + 1;
        if (0x37 < iVar3 + iVar9) break;
      } while (iVar9 <= (int)uVar12);
    }
    iVar5 = *(int *)(param_1 + 0x68);
    iVar6 = FUN_08128fb8(iVar2 + DAT_08010444,6);
    iVar3 = DAT_0801044c;
    iVar6 = (DAT_08010448 >> 0x10) + iVar6 + 0x14;
    iVar7 = iVar6 * 0x10000 >> 0x10;
    if ((iVar7 + iVar9 < 0x38) && (iVar9 <= (int)uVar12)) {
      uVar13 = iVar9 * -0x10000 + 0x380000;
      puVar10 = puVar1 + iVar9;
      do {
        *puVar10 = uVar13;
        puVar10 = puVar10 + 1;
        uVar13 = uVar13 + iVar3;
        iVar9 = iVar9 + 1;
        if (0x37 < iVar7 + iVar9) break;
      } while (iVar9 <= (int)uVar12);
    }
    uVar13 = iVar6 * 0x10000;
    iVar3 = (int)uVar13 >> 0x10;
    if ((iVar3 + iVar9 < 0x43) && (iVar9 <= (int)uVar12)) {
      puVar10 = puVar1 + iVar9;
      do {
        *puVar10 = uVar13 | ((iVar5 << 1) >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + 1;
        iVar9 = iVar9 + 1;
        if (0x42 < iVar3 + iVar9) break;
      } while (iVar9 <= (int)uVar12);
    }
    iVar6 = *(int *)(param_1 + 0x68);
    iVar5 = FUN_08128fb8(iVar2 + DAT_08010444,7);
    iVar3 = DAT_0801044c;
    iVar5 = (DAT_08010448 >> 0x10) + iVar5 + 0x14;
    iVar7 = iVar5 * 0x10000 >> 0x10;
    if ((iVar7 + iVar9 < 0x43) && (iVar9 <= (int)uVar12)) {
      uVar13 = iVar9 * -0x10000 + 0x430000;
      puVar10 = puVar1 + iVar9;
      do {
        *puVar10 = uVar13;
        puVar10 = puVar10 + 1;
        uVar13 = uVar13 + iVar3;
        iVar9 = iVar9 + 1;
        if (0x42 < iVar7 + iVar9) break;
      } while (iVar9 <= (int)uVar12);
    }
    uVar13 = iVar5 * 0x10000;
    iVar3 = (int)uVar13 >> 0x10;
    if ((iVar3 + iVar9 < 0x4c) && (iVar9 <= (int)uVar12)) {
      puVar10 = puVar1 + iVar9;
      do {
        *puVar10 = uVar13 | (iVar6 * 3 >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + 1;
        iVar9 = iVar9 + 1;
        if (0x4b < iVar3 + iVar9) break;
      } while (iVar9 <= (int)uVar12);
    }
    iVar3 = DAT_0801044c;
    iVar5 = *(int *)(param_1 + 0x68);
    iVar6 = iVar2 + DAT_08010444;
    if (iVar6 < 0) {
      iVar6 = iVar2 + DAT_08010444 + 7;
    }
    iVar2 = (DAT_08010448 >> 0x10) + (iVar6 >> 3) + 0x14;
    iVar6 = iVar2 * 0x10000 >> 0x10;
    if ((iVar6 + iVar9 < 0x4c) && (iVar9 <= (int)uVar12)) {
      uVar13 = iVar9 * -0x10000 + 0x4c0000;
      puVar10 = puVar1 + iVar9;
      do {
        *puVar10 = uVar13;
        puVar10 = puVar10 + 1;
        uVar13 = uVar13 + iVar3;
        iVar9 = iVar9 + 1;
        if (0x4b < iVar6 + iVar9) break;
      } while (iVar9 <= (int)uVar12);
    }
    uVar13 = iVar2 * 0x10000;
    iVar3 = (int)uVar13 >> 0x10;
    if ((iVar3 + iVar9 < 0x5c) && (iVar9 <= (int)uVar12)) {
      puVar10 = puVar1 + iVar9;
      do {
        *puVar10 = uVar13 | ((iVar5 << 1) >> 7) + iVar4 & 0xffffU;
        puVar10 = puVar10 + 1;
        iVar9 = iVar9 + 1;
        if (0x5b < iVar3 + iVar9) break;
      } while (iVar9 <= (int)uVar12);
    }
    iVar4 = DAT_0801044c;
    uVar13 = *(uint *)(param_1 + 0x34);
    iVar3 = (DAT_08010448 >> 0x10) + (iVar11 + DAT_08010450 >> 0x16) + 3;
    iVar2 = iVar3 * 0x10000 >> 0x10;
    if (iVar2 + iVar9 < 0x5c) {
      if ((int)uVar12 < iVar9) {
        return;
      }
      uVar8 = iVar9 * -0x10000 + 0x5c0000;
      puVar10 = puVar1 + iVar9;
      do {
        *puVar10 = uVar8;
        puVar10 = puVar10 + 1;
        uVar8 = uVar8 + iVar4;
        iVar9 = iVar9 + 1;
        if (0x5b < iVar2 + iVar9) break;
      } while (iVar9 <= (int)uVar12);
    }
    if (iVar9 <= (int)uVar12) {
      puVar1 = puVar1 + iVar9;
      do {
        *puVar1 = iVar3 * 0x10000 | (uVar13 & 0x7fffff) >> 7;
        puVar1 = puVar1 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar9 <= (int)uVar12);
    }
  }
  return;
}


