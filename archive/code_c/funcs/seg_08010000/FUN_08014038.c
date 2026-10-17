// undefined FUN_08014038(void)
// entry 0x8014038


undefined4 FUN_08014038(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_lr;
  
  iVar9 = 0x9f;
  iVar2 = FUN_08000a70(0x280);
  iVar3 = DAT_08014248;
  if (iVar2 != 0) {
    *(int *)(DAT_08014248 + 0x174) = iVar2;
    *(undefined4 *)(iVar3 + 0x178) = DAT_0801424c;
    *(undefined4 *)(iVar3 + 0x17c) = DAT_08014250;
    iVar3 = *(int *)(param_1 + 0x34);
    uVar8 = (*(int *)(param_1 + 0x38) + DAT_08014254) * 0x10000;
    iVar4 = (int)uVar8 >> 0x10;
    if (0x9f < iVar4 + 0x9f) {
      puVar6 = (uint *)(iVar2 + 0x27c);
      do {
        *puVar6 = uVar8 | iVar3 + 0x20U & 0xffff;
        puVar6 = puVar6 + -1;
        iVar9 = iVar9 + -1;
        if (iVar4 + iVar9 < 0xa0) break;
      } while (-1 < iVar9);
    }
    iVar3 = *(int *)(param_1 + 0x38) + DAT_08014258;
    iVar4 = iVar3 * 0x10000 >> 0x10;
    if ((0x3f < iVar4 + iVar9) && (-1 < iVar9)) {
      iVar5 = iVar9 * -0x10000 + 0x3c0000;
      piVar7 = (int *)(iVar9 * 4 + iVar2);
      do {
        *piVar7 = iVar5;
        iVar5 = iVar5 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar9 = iVar9 + -1;
        if (iVar4 + iVar9 < 0x40) break;
      } while (-1 < iVar9);
    }
    uVar1 = *(ushort *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x4c);
    uVar8 = iVar3 * 0x10000;
    iVar3 = (int)uVar8 >> 0x10;
    if ((0x2b < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar6 = (uint *)(iVar9 * 4 + iVar2);
      do {
        *puVar6 = uVar8 | (uint)(uVar1 >> 5) + (iVar4 >> 6) & 0xffff;
        puVar6 = puVar6 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0x2c) break;
      } while (-1 < iVar9);
    }
    uVar1 = *(ushort *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x4c);
    if ((0x22 < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar6 = (uint *)(iVar9 * 4 + iVar2);
      do {
        *puVar6 = uVar8 | (uint)(uVar1 >> 4) + (iVar4 >> 5) & 0xffff;
        puVar6 = puVar6 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0x23) break;
      } while (-1 < iVar9);
    }
    uVar1 = *(ushort *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x4c);
    if ((0x14 < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar6 = (uint *)(iVar9 * 4 + iVar2);
      do {
        *puVar6 = uVar8 | (uint)(uVar1 >> 3) + (iVar4 >> 4) & 0xffff;
        puVar6 = puVar6 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0x15) break;
      } while (-1 < iVar9);
    }
    uVar1 = *(ushort *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x4c);
    if ((10 < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar6 = (uint *)(iVar9 * 4 + iVar2);
      do {
        *puVar6 = uVar8 | (uint)(uVar1 >> 2) + (iVar4 >> 3) & 0xffff;
        puVar6 = puVar6 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0xb) break;
      } while (-1 < iVar9);
    }
    uVar10 = (uint)(*(ushort *)(param_1 + 0x10) >> 1) + (*(int *)(param_1 + 0x4c) >> 2) & 0xffff;
    if ((4 < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar6 = (uint *)(iVar9 * 4 + iVar2);
      do {
        *puVar6 = uVar8 | uVar10;
        puVar6 = puVar6 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 5) break;
      } while (-1 < iVar9);
    }
    if (-1 < iVar3 + iVar9) {
      if (iVar9 < 0) {
        return in_lr;
      }
      puVar6 = (uint *)(iVar9 * 4 + iVar2);
      do {
        *puVar6 = uVar8 | uVar10;
        puVar6 = puVar6 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0) break;
      } while (-1 < iVar9);
    }
    if (-1 < iVar9) {
      iVar3 = iVar9 * -0x10000;
      piVar7 = (int *)(iVar9 * 4 + iVar2);
      do {
        *piVar7 = iVar3;
        iVar3 = iVar3 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  return in_lr;
}


