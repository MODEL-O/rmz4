// undefined FUN_0800acb8(void)
// entry 0x800acb8


undefined4 FUN_0800acb8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar11 = 0x9f;
  if (*(short *)(DAT_0800af7c + DAT_0800af80) != 0) {
    puVar10 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_0800af8c);
    FUN_08128be0(*DAT_0800af84 + DAT_0800af88,(*puVar10 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0(*DAT_0800af90 + DAT_0800af94,(*puVar10 & 0x1f00) * 8 + DAT_0800af98,0x200);
  }
  iVar2 = FUN_08000a70(0x280);
  iVar3 = DAT_0800af9c;
  if (iVar2 != 0) {
    *(int *)(DAT_0800af9c + 0x174) = iVar2;
    *(undefined4 *)(iVar3 + 0x178) = DAT_0800afa0;
    *(undefined4 *)(iVar3 + 0x17c) = DAT_0800afa4;
    iVar5 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x68);
    iVar3 = *(int *)(param_1 + 0x38) + DAT_0800afa8;
    uVar9 = iVar3 * 0x10000;
    iVar4 = (int)uVar9 >> 0x10;
    if (0xec < iVar4 + 0x9f) {
      puVar8 = (uint *)(iVar2 + 0x27c);
      do {
        *puVar8 = uVar9 | (iVar5 >> 1) + (uint)(uVar1 >> 8) & 0xffff;
        puVar8 = puVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar4 + iVar11 < 0xed) break;
      } while (-1 < iVar11);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x6a);
    uVar9 = iVar3 * 0x10000;
    iVar3 = (int)uVar9 >> 0x10;
    if ((199 < iVar3 + iVar11) && (-1 < iVar11)) {
      puVar8 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar8 = uVar9 | (iVar4 >> 2) + (uint)(uVar1 >> 8) & 0xffff;
        puVar8 = puVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar3 + iVar11 < 200) break;
      } while (-1 < iVar11);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x6c);
    if ((0xb8 < iVar3 + iVar11) && (-1 < iVar11)) {
      puVar8 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar8 = uVar9 | (iVar4 >> 4) + (uint)(uVar1 >> 8) & 0xffff;
        puVar8 = puVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar3 + iVar11 < 0xb9) break;
      } while (-1 < iVar11);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x6e);
    if ((0xb0 < iVar3 + iVar11) && (-1 < iVar11)) {
      puVar8 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar8 = uVar9 | (iVar4 >> 5) + (uint)(uVar1 >> 8) & 0xffff;
        puVar8 = puVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar3 + iVar11 < 0xb1) break;
      } while (-1 < iVar11);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x70);
    if ((0xaa < iVar3 + iVar11) && (-1 < iVar11)) {
      puVar8 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar8 = uVar9 | (iVar4 >> 5) + (uint)(uVar1 >> 8) & 0xffff;
        puVar8 = puVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar3 + iVar11 < 0xab) break;
      } while (-1 < iVar11);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x72);
    if ((0xa7 < iVar3 + iVar11) && (-1 < iVar11)) {
      puVar8 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar8 = uVar9 | (iVar4 >> 6) + (uint)(uVar1 >> 8) & 0xffff;
        puVar8 = puVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar3 + iVar11 < 0xa8) break;
      } while (-1 < iVar11);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x74);
    if ((0xa3 < iVar3 + iVar11) && (-1 < iVar11)) {
      puVar8 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar8 = uVar9 | (iVar4 >> 6) + (uint)(uVar1 >> 8) & 0xffff;
        puVar8 = puVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar3 + iVar11 < 0xa4) break;
      } while (-1 < iVar11);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x76);
    if ((0x9f < iVar3 + iVar11) && (-1 < iVar11)) {
      puVar8 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar8 = uVar9 | (iVar4 >> 7) + (uint)(uVar1 >> 8) & 0xffff;
        puVar8 = puVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar3 + iVar11 < 0xa0) break;
      } while (-1 < iVar11);
    }
    if (*(ushort *)(param_1 + 0x78) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)(*(ushort *)(param_1 + 0x78) >> 4) -
              (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x34)) & 0xffff;
    }
    if ((-1 < iVar3 + iVar11) && (-1 < iVar11)) {
      puVar8 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar8 = uVar9 | uVar6;
        puVar8 = puVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar3 + iVar11 < 0) break;
      } while (-1 < iVar11);
    }
    if (-1 < iVar11) {
      iVar3 = iVar11 * -0x10000;
      piVar7 = (int *)(iVar11 * 4 + iVar2);
      do {
        *piVar7 = iVar3;
        iVar3 = iVar3 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  return in_lr;
}


