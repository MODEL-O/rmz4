// undefined FUN_08017b50(void)
// entry 0x8017b50


undefined4 FUN_08017b50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  iVar9 = 0x9f;
  if (*(short *)(DAT_08017cf0 + DAT_08017cf4) != 0) {
    puVar8 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08017d00);
    FUN_08128be0(*DAT_08017cf8 + DAT_08017cfc,(*puVar8 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = 0;
    FUN_08128be0(local_20,(*puVar8 & 0x1f00) * 8 + DAT_08017d04,0x1000200);
  }
  iVar1 = FUN_08000a70(0x280);
  iVar2 = DAT_08017d08;
  if (iVar1 != 0) {
    *(int *)(DAT_08017d08 + 0x174) = iVar1;
    *(undefined4 *)(iVar2 + 0x178) = DAT_08017d0c;
    *(undefined4 *)(iVar2 + 0x17c) = DAT_08017d10;
    iVar2 = *(int *)(param_1 + 0x38) + DAT_08017d14;
    uVar6 = iVar2 * 0x10000;
    iVar3 = (int)uVar6 >> 0x10;
    if (0xa7 < iVar3 + 0x9f) {
      uVar7 = DAT_08017d18 & *(int *)(param_1 + 0x34) * 0xe >> 4;
      puVar5 = (uint *)(iVar1 + 0x27c);
      do {
        *puVar5 = uVar6 | uVar7;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0xa8) break;
      } while (-1 < iVar9);
    }
    uVar6 = iVar2 * 0x10000;
    iVar2 = (int)uVar6 >> 0x10;
    if ((0xa1 < iVar2 + iVar9) && (-1 < iVar9)) {
      uVar7 = DAT_08017d18 & *(int *)(param_1 + 0x34) * 0xe >> 4;
      puVar5 = (uint *)(iVar9 * 4 + iVar1);
      do {
        *puVar5 = uVar6 | uVar7;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar2 + iVar9 < 0xa2) break;
      } while (-1 < iVar9);
    }
    if ((0x97 < iVar2 + iVar9) && (-1 < iVar9)) {
      uVar7 = DAT_08017d18 & *(int *)(param_1 + 0x34) * 0xd >> 4;
      puVar5 = (uint *)(iVar9 * 4 + iVar1);
      do {
        *puVar5 = uVar6 | uVar7;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar2 + iVar9 < 0x98) break;
      } while (-1 < iVar9);
    }
    if (0x8f < iVar2 + iVar9) {
      if (iVar9 < 0) {
        return in_lr;
      }
      uVar7 = DAT_08017d18 & *(int *)(param_1 + 0x34) * 0xc >> 4;
      puVar5 = (uint *)(iVar9 * 4 + iVar1);
      do {
        *puVar5 = uVar6 | uVar7;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar2 + iVar9 < 0x90) break;
      } while (-1 < iVar9);
    }
    if (-1 < iVar9) {
      iVar2 = iVar9 * -0x10000;
      piVar4 = (int *)(iVar9 * 4 + iVar1);
      do {
        *piVar4 = iVar2;
        iVar2 = iVar2 + 0x10000;
        piVar4 = piVar4 + -1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  return in_lr;
}


