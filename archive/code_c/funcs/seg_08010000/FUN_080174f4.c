// undefined FUN_080174f4(void)
// entry 0x80174f4


undefined4 FUN_080174f4(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  undefined4 in_lr;
  undefined4 local_38 [6];
  
  iVar12 = 0x9f;
  if (*(short *)(DAT_0801759c + DAT_080175a0) != 0) {
    puVar11 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_080175ac);
    FUN_08128be0(*DAT_080175a4 + DAT_080175a8,(*puVar11 & 0x1f00) * 8 + 0x6000000,0x200);
    local_38[0] = 0;
    FUN_08128be0(local_38,(*puVar11 & 0x1f00) * 8 + DAT_080175b0,0x1000200);
  }
  iVar2 = FUN_08000a70(0x280);
  iVar3 = DAT_080175b4;
  if (iVar2 != 0) {
    *(int *)(DAT_080175b4 + 0x174) = iVar2;
    *(undefined4 *)(iVar3 + 0x178) = DAT_080175b8;
    *(undefined4 *)(iVar3 + 0x17c) = DAT_080175bc;
    iVar3 = DAT_080178f0;
    if (*(int *)(param_1 + 0x38) <= DAT_080175c0) {
      iVar3 = DAT_080175c4;
    }
    iVar3 = *(int *)(param_1 + 0x38) + iVar3;
    uVar1 = *(ushort *)(param_1 + 0x34);
    uVar10 = iVar3 * 0x10000;
    iVar4 = (int)uVar10 >> 0x10;
    if (0xd7 < iVar4 + 0x9f) {
      puVar7 = (uint *)(iVar2 + 0x27c);
      do {
        *puVar7 = uVar10 | uVar1;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < 0xd8) break;
      } while (-1 < iVar12);
    }
    uVar5 = (uint)(*(int *)(param_1 + 0x34) * 0xe000) >> 0x10;
    if ((0x77 < iVar4 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = uVar10 | uVar5;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < 0x78) break;
      } while (-1 < iVar12);
    }
    if ((0x57 < iVar4 + iVar12) && (-1 < iVar12)) {
      iVar6 = iVar12 * -0x10000 + 0x780000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar6;
        iVar6 = iVar6 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < 0x58) break;
      } while (-1 < iVar12);
    }
    if ((0x37 < iVar4 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = uVar10 + 0x200000 | uVar5;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < 0x38) break;
      } while (-1 < iVar12);
    }
    if ((7 < iVar4 + iVar12) && (-1 < iVar12)) {
      iVar6 = iVar12 * -0x10000 + 0x580000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar6;
        iVar6 = iVar6 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < 8) break;
      } while (-1 < iVar12);
    }
    if ((-9 < iVar4 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = uVar10 + 0x500000 | uVar5;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < -8) break;
      } while (-1 < iVar12);
    }
    uVar1 = *(ushort *)(param_1 + 0x68);
    iVar4 = *(int *)(param_1 + 0x34);
    uVar10 = iVar3 * 0x10000 + 0x80000;
    uVar5 = uVar10 >> 0x10;
    iVar3 = (int)uVar10 >> 0x10;
    if ((-9 < iVar3 + iVar12) && (-1 < iVar12)) {
      iVar6 = iVar12 * -0x10000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar6;
        iVar6 = iVar6 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar3 + iVar12 < -8) break;
      } while (-1 < iVar12);
    }
    iVar6 = uVar5 * 0x10000;
    iVar3 = iVar6 >> 0x10;
    if ((-0x11 < iVar3 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = iVar6 + 0x500000U | (uint)(uVar1 >> 4) + (iVar4 * 0xb >> 4) & 0xffff;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar3 + iVar12 < -0x10) break;
      } while (-1 < iVar12);
    }
    uVar1 = *(ushort *)(param_1 + 0x6a);
    iVar4 = *(int *)(param_1 + 0x34);
    uVar10 = uVar5 * 0x10000 + 0xc0000;
    uVar5 = uVar10 >> 0x10;
    iVar3 = (int)uVar10 >> 0x10;
    if ((-0x11 < iVar3 + iVar12) && (-1 < iVar12)) {
      iVar6 = iVar12 * -0x10000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar6;
        iVar6 = iVar6 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar3 + iVar12 < -0x10) break;
      } while (-1 < iVar12);
    }
    iVar6 = uVar5 * 0x10000;
    iVar3 = iVar6 >> 0x10;
    if ((-0x19 < iVar3 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = iVar6 + 0x500000U | (uint)(uVar1 >> 4) + (iVar4 * 0xb4 >> 8) & 0xffff;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar3 + iVar12 < -0x18) break;
      } while (-1 < iVar12);
    }
    uVar1 = *(ushort *)(param_1 + 0x6c);
    iVar4 = *(int *)(param_1 + 0x34);
    uVar10 = uVar5 * 0x10000 + 0x40000;
    uVar5 = uVar10 >> 0x10;
    iVar3 = (int)uVar10 >> 0x10;
    if ((-0x19 < iVar3 + iVar12) && (-1 < iVar12)) {
      iVar6 = iVar12 * -0x10000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar6;
        iVar6 = iVar6 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar3 + iVar12 < -0x18) break;
      } while (-1 < iVar12);
    }
    iVar6 = uVar5 * 0x10000;
    iVar3 = iVar6 >> 0x10;
    if ((-0x31 < iVar3 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = iVar6 + 0x500000U | (uint)(uVar1 >> 4) + (iVar4 * 0xb8 >> 8) & 0xffff;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar3 + iVar12 < -0x30) break;
      } while (-1 < iVar12);
    }
    uVar1 = *(ushort *)(param_1 + 0x6e);
    iVar6 = *(int *)(param_1 + 0x34);
    iVar3 = uVar5 * 0x10000;
    iVar4 = iVar3 + 0x100000 >> 0x10;
    if ((-0x31 < iVar4 + iVar12) && (-1 < iVar12)) {
      iVar9 = iVar12 * -0x10000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar9;
        iVar9 = iVar9 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < -0x30) break;
      } while (-1 < iVar12);
    }
    if (-0x51 < iVar4 + iVar12) {
      if (iVar12 < 0) {
        return in_lr;
      }
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = iVar3 + 0x600000U | (uint)(uVar1 >> 4) + (iVar6 * 0xbc >> 8) & 0xffff;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < -0x50) break;
      } while (-1 < iVar12);
    }
    if (-1 < iVar12) {
      iVar3 = iVar12 * -0x10000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar3;
        iVar3 = iVar3 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
  }
  return in_lr;
}


