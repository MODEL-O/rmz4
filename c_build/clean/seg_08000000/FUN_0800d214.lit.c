// undefined FUN_0800d214(void)
// entry 0x800d214


void FUN_0800d214(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  iVar10 = 0x9f;
  iVar1 = FUN_08000a70(0x280);
  iVar2 = 0x03001590;
  if (iVar1 != 0) {
    *(int *)(0x03001590 + 0x174) = iVar1;
    *(undefined4 *)(iVar2 + 0x178) = 0x0400001c;
    *(undefined4 *)(iVar2 + 0x17c) = 0xa6600001;
    iVar2 = *(int *)(param_1 + 0x38) + -0xe0;
    uVar3 = FUN_08128fb8(*(int *)(param_1 + 0x34) << 1,3);
    sVar8 = (short)iVar2;
    iVar4 = (int)sVar8;
    if (0x1fe < iVar4 + 0x9f) {
      puVar6 = (uint *)(iVar1 + 0x27c);
      do {
        *puVar6 = (iVar4 + 0x102) * 0x10000 | uVar3 & 0xffff;
        puVar6 = puVar6 + -1;
        iVar10 = iVar10 + -1;
        if (iVar4 + iVar10 < 0x1ff) break;
      } while (-1 < iVar10);
    }
    uVar9 = iVar2 * 0x10000;
    iVar2 = (int)uVar9 >> 0x10;
    if ((0xa0 < iVar2 + iVar10) && (-1 < iVar10)) {
      puVar6 = (uint *)(iVar10 * 4 + iVar1);
      do {
        *puVar6 = uVar9 | uVar3 & 0xffff;
        puVar6 = puVar6 + -1;
        iVar10 = iVar10 + -1;
        if (iVar2 + iVar10 < 0xa1) break;
      } while (-1 < iVar10);
    }
    uVar3 = *(uint *)(param_1 + 0x34);
    if ((0x90 < iVar2 + iVar10) && (-1 < iVar10)) {
      puVar6 = (uint *)(iVar10 * 4 + iVar1);
      do {
        *puVar6 = uVar9 | (uVar3 & 0x1ffff) >> 1;
        puVar6 = puVar6 + -1;
        iVar10 = iVar10 + -1;
        if (iVar2 + iVar10 < 0x91) break;
      } while (-1 < iVar10);
    }
    uVar3 = *(uint *)(param_1 + 0x34);
    iVar2 = (int)sVar8 - (*(int *)(param_1 + 0x38) + 0xfffffec0 >> 4);
    iVar4 = iVar2 * 0x10000 >> 0x10;
    if ((0x90 < iVar4 + iVar10) && (-1 < iVar10)) {
      iVar5 = iVar10 * -0x10000 + 0x900000;
      piVar7 = (int *)(iVar10 * 4 + iVar1);
      do {
        *piVar7 = iVar5;
        iVar5 = iVar5 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar10 = iVar10 + -1;
        if (iVar4 + iVar10 < 0x91) break;
      } while (-1 < iVar10);
    }
    iVar4 = iVar2 * 0x10000 >> 0x10;
    if ((0x74 < iVar4 + iVar10) && (-1 < iVar10)) {
      puVar6 = (uint *)(iVar10 * 4 + iVar1);
      do {
        *puVar6 = iVar2 * 0x10000 | (uVar3 & 0x3ffff) >> 2;
        puVar6 = puVar6 + -1;
        iVar10 = iVar10 + -1;
        if (iVar4 + iVar10 < 0x75) break;
      } while (-1 < iVar10);
    }
    uVar3 = *(uint *)(param_1 + 0x34);
    iVar2 = (int)(short)iVar2 - (*(int *)(param_1 + 0x38) + 0xfffffec0 >> 4);
    iVar4 = iVar2 * 0x10000 >> 0x10;
    if ((0x74 < iVar4 + iVar10) && (-1 < iVar10)) {
      iVar5 = iVar10 * -0x10000 + 0x740000;
      piVar7 = (int *)(iVar10 * 4 + iVar1);
      do {
        *piVar7 = iVar5;
        iVar5 = iVar5 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar10 = iVar10 + -1;
        if (iVar4 + iVar10 < 0x75) break;
      } while (-1 < iVar10);
    }
    iVar4 = iVar2 * 0x10000 >> 0x10;
    if ((0x60 < iVar4 + iVar10) && (-1 < iVar10)) {
      puVar6 = (uint *)(iVar10 * 4 + iVar1);
      do {
        *puVar6 = iVar2 * 0x10000 | (uVar3 & 0x7ffff) >> 3;
        puVar6 = puVar6 + -1;
        iVar10 = iVar10 + -1;
        if (iVar4 + iVar10 < 0x61) break;
      } while (-1 < iVar10);
    }
    uVar3 = *(uint *)(param_1 + 0x34);
    iVar2 = (int)(short)iVar2 + (*(int *)(param_1 + 0x38) + 0xfffffec0 >> 5);
    iVar4 = iVar2 * 0x10000 >> 0x10;
    if ((0x60 < iVar4 + iVar10) && (-1 < iVar10)) {
      iVar5 = iVar10 * -0x10000 + 0x600000;
      piVar7 = (int *)(iVar10 * 4 + iVar1);
      do {
        *piVar7 = iVar5;
        iVar5 = iVar5 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar10 = iVar10 + -1;
        if (iVar4 + iVar10 < 0x61) break;
      } while (-1 < iVar10);
    }
    uVar9 = iVar2 * 0x10000;
    iVar2 = (int)uVar9 >> 0x10;
    if (0 < iVar2 + iVar10) {
      if (-1 < iVar10) {
        puVar6 = (uint *)(iVar10 * 4 + iVar1);
        do {
          *puVar6 = uVar9 | (uVar3 & 0xfffff) >> 4;
          puVar6 = puVar6 + -1;
          iVar10 = iVar10 + -1;
          if (iVar2 + iVar10 < 1) goto LAB_0800d48e;
        } while (-1 < iVar10);
      }
      if (0 < iVar2 + iVar10) {
        return;
      }
    }
LAB_0800d48e:
    if (-1 < iVar10) {
      iVar4 = iVar10 * -0x10000;
      piVar7 = (int *)(iVar10 * 4 + iVar1);
      do {
        *piVar7 = iVar4;
        iVar4 = iVar4 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar10 = iVar10 + -1;
        if (0 < iVar2 + iVar10) {
          return;
        }
      } while (-1 < iVar10);
    }
  }
  return;
}


