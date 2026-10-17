// undefined FUN_08017274(void)
// entry 0x8017274


undefined4 FUN_08017274(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  iVar9 = 0x9f;
  if (*(short *)(DAT_08017408 + DAT_0801740c) != 0) {
    puVar8 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08017418);
    FUN_08128be0(*DAT_08017410 + DAT_08017414,(*puVar8 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = 0;
    FUN_08128be0(local_20,(*puVar8 & 0x1f00) * 8 + DAT_0801741c,0x1000200);
  }
  iVar1 = FUN_08000a70(0x280);
  iVar2 = DAT_08017420;
  if (iVar1 != 0) {
    *(int *)(DAT_08017420 + 0x174) = iVar1;
    *(undefined4 *)(iVar2 + 0x178) = DAT_08017424;
    *(undefined4 *)(iVar2 + 0x17c) = DAT_08017428;
    iVar2 = *(int *)(param_1 + 0x38) + DAT_0801742c;
    iVar5 = *(int *)(param_1 + 0x34);
    iVar3 = iVar2 * 0x10000 >> 0x10;
    if (0xaf < iVar3 + 0x9f) {
      puVar6 = (uint *)(iVar1 + 0x27c);
      do {
        *puVar6 = iVar2 * 0x10000 | (uint)(iVar5 * 0xe000) >> 0x10;
        puVar6 = puVar6 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0xb0) break;
      } while (-1 < iVar9);
    }
    uVar4 = *(uint *)(param_1 + 0x34);
    iVar3 = iVar2 * 0x10000 >> 0x10;
    if ((0x9f < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar6 = (uint *)(iVar9 * 4 + iVar1);
      do {
        *puVar6 = iVar2 * 0x10000 | (uVar4 & 0x7ffff) >> 3;
        puVar6 = puVar6 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0xa0) break;
      } while (-1 < iVar9);
    }
    iVar3 = (int)(short)iVar2 - (*(int *)(param_1 + 0x38) + DAT_08017430 >> 3);
    iVar2 = iVar3 * 0x10000 >> 0x10;
    if ((0x9f < iVar2 + iVar9) && (-1 < iVar9)) {
      iVar5 = iVar9 * -0x10000 + 0xa00000;
      piVar7 = (int *)(iVar9 * 4 + iVar1);
      do {
        *piVar7 = iVar5;
        iVar5 = iVar5 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar9 = iVar9 + -1;
        if (iVar2 + iVar9 < 0xa0) break;
      } while (-1 < iVar9);
    }
    iVar3 = iVar3 * 0x10000;
    iVar2 = iVar3 >> 0x10;
    if (-1 < iVar2 + iVar9) {
      if (iVar9 < 0) {
        return in_lr;
      }
      piVar7 = (int *)(iVar9 * 4 + iVar1);
      do {
        *piVar7 = iVar3;
        piVar7 = piVar7 + -1;
        iVar9 = iVar9 + -1;
        if (iVar2 + iVar9 < 0) break;
      } while (-1 < iVar9);
    }
    if (-1 < iVar9) {
      iVar2 = iVar9 * -0x10000;
      piVar7 = (int *)(iVar9 * 4 + iVar1);
      do {
        *piVar7 = iVar2;
        iVar2 = iVar2 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  return in_lr;
}


