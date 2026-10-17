// undefined FUN_0800dc70(void)
// entry 0x800dc70


void FUN_0800dc70(int param_1)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  iVar10 = 0x9f;
  puVar2 = (uint *)FUN_08000a70(0x280);
  iVar8 = DAT_0800dfc8;
  if (puVar2 != (uint *)0x0) {
    *(uint **)(DAT_0800dfc8 + 0x174) = puVar2;
    *(undefined4 *)(iVar8 + 0x178) = DAT_0800dfcc;
    *(undefined4 *)(iVar8 + 0x17c) = DAT_0800dfd0;
    uVar3 = *(uint *)(param_1 + 0x34);
    iVar8 = ((*(int *)(param_1 + 0x38) + DAT_0800dfd4 >> 4) + 0x20) * 0x10000 >> 0x10;
    if (0x56 < iVar8 + 0x9f) {
      puVar5 = puVar2 + 0x9f;
      do {
        *puVar5 = iVar8 << 0x10 | (uVar3 & 0x7ffff) >> 3;
        puVar5 = puVar5 + -1;
        iVar10 = iVar10 + -1;
        if (iVar10 < 0) break;
      } while (0x56 < iVar8 + iVar10);
    }
    sVar7 = (short)iVar10;
    uVar1 = *(ushort *)(param_1 + 0x68);
    iVar8 = *(int *)(param_1 + 0x34);
    iVar10 = 0;
    if (((uint)(int)sVar7 < 0x80000000) &&
       (iVar4 = (int)(short)((short)(*(int *)(param_1 + 0x38) + DAT_0800dfd8 >> 4) + 0x18),
       iVar4 < 0x25)) {
      puVar5 = puVar2;
      do {
        *puVar5 = iVar4 << 0x10 | (uint)(uVar1 >> 4) + (iVar8 >> 2) & 0xffff;
        puVar5 = puVar5 + 1;
        iVar10 = iVar10 + 1;
        if (sVar7 < iVar10) break;
      } while (iVar4 + iVar10 < 0x25);
    }
    iVar8 = DAT_0800dfdc;
    uVar3 = (uint)(*(ushort *)(param_1 + 0x6a) >> 4) + (*(int *)(param_1 + 0x34) >> 3) & 0xffff;
    iVar4 = (int)sVar7;
    if (iVar10 <= iVar4) {
      iVar9 = ((*(int *)(param_1 + 0x38) + DAT_0800dfd8 >> 5) + 0x18) * 0x10000 >> 0x10;
      if (iVar9 + iVar10 < 0x25) {
        uVar6 = iVar10 * -0x10000 + 0x250000;
        puVar5 = puVar2 + iVar10;
        do {
          *puVar5 = uVar6 | uVar3;
          uVar6 = uVar6 + iVar8;
          iVar10 = iVar10 + 1;
          if (iVar4 < iVar10) goto LAB_0800dde0;
          puVar5 = puVar5 + 1;
        } while (iVar9 + iVar10 < 0x25);
      }
      if ((iVar10 <= iVar4) && (iVar9 + iVar10 < 0x35)) {
        puVar5 = puVar2 + iVar10;
        do {
          *puVar5 = iVar9 << 0x10 | uVar3;
          puVar5 = puVar5 + 1;
          iVar10 = iVar10 + 1;
          if (iVar4 < iVar10) break;
        } while (iVar9 + iVar10 < 0x35);
      }
    }
LAB_0800dde0:
    iVar8 = DAT_0800dfdc;
    uVar3 = (uint)(*(ushort *)(param_1 + 0x6c) >> 4) + (*(int *)(param_1 + 0x34) >> 5) & 0xffff;
    if (iVar10 <= iVar4) {
      iVar9 = ((*(int *)(param_1 + 0x38) + DAT_0800dfd8 >> 6) + 0x18) * 0x10000 >> 0x10;
      if (iVar9 + iVar10 < 0x35) {
        uVar6 = iVar10 * -0x10000 + 0x350000;
        puVar5 = puVar2 + iVar10;
        do {
          *puVar5 = uVar6 | uVar3;
          uVar6 = uVar6 + iVar8;
          iVar10 = iVar10 + 1;
          if (iVar4 < iVar10) goto LAB_0800de72;
          puVar5 = puVar5 + 1;
        } while (iVar9 + iVar10 < 0x35);
      }
      if ((iVar10 <= iVar4) && (iVar9 + iVar10 < 0x3c)) {
        puVar5 = puVar2 + iVar10;
        do {
          *puVar5 = iVar9 << 0x10 | uVar3;
          puVar5 = puVar5 + 1;
          iVar10 = iVar10 + 1;
          if (iVar4 < iVar10) break;
        } while (iVar9 + iVar10 < 0x3c);
      }
    }
LAB_0800de72:
    iVar8 = DAT_0800dfdc;
    uVar3 = (uint)(*(ushort *)(param_1 + 0x6e) >> 4) + (*(int *)(param_1 + 0x34) >> 6) & 0xffff;
    if (iVar10 <= iVar4) {
      iVar9 = ((*(int *)(param_1 + 0x38) + DAT_0800dfd8 >> 7) + 0x18) * 0x10000 >> 0x10;
      if (iVar9 + iVar10 < 0x3c) {
        uVar6 = iVar10 * -0x10000 + 0x3c0000;
        puVar5 = puVar2 + iVar10;
        do {
          *puVar5 = uVar6 | uVar3;
          uVar6 = uVar6 + iVar8;
          iVar10 = iVar10 + 1;
          if (iVar4 < iVar10) goto LAB_0800df04;
          puVar5 = puVar5 + 1;
        } while (iVar9 + iVar10 < 0x3c);
      }
      if ((iVar10 <= iVar4) && (iVar9 + iVar10 < 0x44)) {
        puVar5 = puVar2 + iVar10;
        do {
          *puVar5 = iVar9 << 0x10 | uVar3;
          puVar5 = puVar5 + 1;
          iVar10 = iVar10 + 1;
          if (iVar4 < iVar10) break;
        } while (iVar9 + iVar10 < 0x44);
      }
    }
LAB_0800df04:
    iVar8 = DAT_0800dfdc;
    uVar3 = (uint)(*(ushort *)(param_1 + 0x70) >> 4) + (*(int *)(param_1 + 0x34) >> 7) & 0xffff;
    if (iVar10 <= iVar4) {
      iVar9 = ((*(int *)(param_1 + 0x38) + DAT_0800dfd8 >> 8) + 0x18) * 0x10000 >> 0x10;
      if (iVar9 + iVar10 < 0x44) {
        uVar6 = iVar10 * -0x10000 + 0x440000;
        puVar5 = puVar2 + iVar10;
        do {
          *puVar5 = uVar6 | uVar3;
          uVar6 = uVar6 + iVar8;
          iVar10 = iVar10 + 1;
          if (iVar4 < iVar10) {
            return;
          }
          puVar5 = puVar5 + 1;
        } while (iVar9 + iVar10 < 0x44);
      }
      if (iVar10 <= iVar4) {
        if (iVar9 + iVar10 < 0x54) {
          puVar5 = puVar2 + iVar10;
          do {
            *puVar5 = iVar9 << 0x10 | uVar3;
            puVar5 = puVar5 + 1;
            iVar10 = iVar10 + 1;
            if (iVar4 < iVar10) {
              return;
            }
          } while (iVar9 + iVar10 < 0x54);
        }
        iVar8 = DAT_0800dfdc;
        if (iVar10 <= iVar4) {
          uVar3 = iVar10 * -0x10000 + 0x570000;
          puVar2 = puVar2 + iVar10;
          do {
            *puVar2 = uVar3;
            puVar2 = puVar2 + 1;
            uVar3 = uVar3 + iVar8;
            iVar10 = iVar10 + 1;
          } while (iVar10 <= iVar4);
        }
      }
    }
  }
  return;
}


