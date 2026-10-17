// undefined FUN_08009b5c(void)
// entry 0x8009b5c


undefined4 FUN_08009b5c(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = 0x9f;
  puVar1 = (uint *)FUN_08000a70(0x280);
  iVar6 = DAT_08009eb4;
  if (puVar1 != (uint *)0x0) {
    *(uint **)(DAT_08009eb4 + 0x174) = puVar1;
    *(undefined4 *)(iVar6 + 0x178) = DAT_08009eb8;
    *(undefined4 *)(iVar6 + 0x17c) = DAT_08009ebc;
    uVar2 = *(uint *)(param_1 + 0x34);
    iVar6 = ((*(int *)(param_1 + 0x38) + DAT_08009ec0 >> 3) + 0x13) * 0x10000 >> 0x10;
    if (0x80 < iVar6 + 0x9f) {
      puVar4 = puVar1 + 0x9f;
      do {
        *puVar4 = iVar6 << 0x10 | (uVar2 & 0x1ffff) >> 1;
        puVar4 = puVar4 + -1;
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) break;
      } while (0x80 < iVar6 + iVar9);
    }
    uVar2 = *(uint *)(param_1 + 0x34);
    if (-1 < iVar9) {
      iVar6 = ((*(int *)(param_1 + 0x38) + DAT_08009ec0 >> 4) + 0x1c) * 0x10000 >> 0x10;
      if (0x80 < iVar6 + iVar9) {
        uVar7 = iVar9 * -0x10000 + 0x800000;
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = uVar7;
          uVar7 = uVar7 + 0x10000;
          puVar4 = puVar4 + -1;
          iVar9 = iVar9 + -1;
          if (iVar9 < 0) goto LAB_08009c48;
        } while (0x80 < iVar6 + iVar9);
      }
      if ((-1 < iVar9) && (0x77 < iVar6 + iVar9)) {
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = iVar6 << 0x10 | (uVar2 & 0x3ffff) >> 2;
          puVar4 = puVar4 + -1;
          iVar9 = iVar9 + -1;
          if (iVar9 < 0) break;
        } while (0x77 < iVar6 + iVar9);
      }
    }
LAB_08009c48:
    uVar2 = *(uint *)(param_1 + 0x34);
    if (-1 < iVar9) {
      iVar6 = ((*(int *)(param_1 + 0x38) + DAT_08009ec0 >> 5) + 0x20) * 0x10000 >> 0x10;
      if (0x77 < iVar6 + iVar9) {
        uVar7 = iVar9 * -0x10000 + 0x770000;
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = uVar7;
          uVar7 = uVar7 + 0x10000;
          puVar4 = puVar4 + -1;
          iVar9 = iVar9 + -1;
          if (iVar9 < 0) goto LAB_08009cba;
        } while (0x77 < iVar6 + iVar9);
      }
      if ((-1 < iVar9) && (0x70 < iVar6 + iVar9)) {
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = iVar6 << 0x10 | (uVar2 & 0x7ffff) >> 3;
          puVar4 = puVar4 + -1;
          iVar9 = iVar9 + -1;
          if (iVar9 < 0) break;
        } while (0x70 < iVar6 + iVar9);
      }
    }
LAB_08009cba:
    sVar5 = (short)iVar9;
    uVar2 = *(uint *)(param_1 + 0x68);
    iVar6 = *(int *)(param_1 + 0x34);
    iVar9 = 0;
    if (((uint)(int)sVar5 < 0x80000000) &&
       (iVar3 = (int)(short)((short)(*(int *)(param_1 + 0x38) + DAT_08009ec4 >> 4) + 0x18),
       iVar3 < 0x27)) {
      puVar4 = puVar1;
      do {
        *puVar4 = iVar3 << 0x10 | (uVar2 >> 1) + (iVar6 >> 2) & 0xffff;
        puVar4 = puVar4 + 1;
        iVar9 = iVar9 + 1;
        if (sVar5 < iVar9) break;
      } while (iVar3 + iVar9 < 0x27);
    }
    iVar6 = DAT_08009ec8;
    uVar2 = (*(uint *)(param_1 + 0x68) >> 2) + (*(int *)(param_1 + 0x34) >> 3) & 0xffff;
    iVar3 = (int)sVar5;
    if (iVar9 <= iVar3) {
      iVar8 = ((*(int *)(param_1 + 0x38) + DAT_08009ec4 >> 5) + 0x18) * 0x10000 >> 0x10;
      if (iVar8 + iVar9 < 0x27) {
        uVar7 = iVar9 * -0x10000 + 0x270000;
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = uVar7 | uVar2;
          uVar7 = uVar7 + iVar6;
          iVar9 = iVar9 + 1;
          if (iVar3 < iVar9) goto LAB_08009d96;
          puVar4 = puVar4 + 1;
        } while (iVar8 + iVar9 < 0x27);
      }
      if ((iVar9 <= iVar3) && (iVar8 + iVar9 < 0x35)) {
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = iVar8 << 0x10 | uVar2;
          puVar4 = puVar4 + 1;
          iVar9 = iVar9 + 1;
          if (iVar3 < iVar9) break;
        } while (iVar8 + iVar9 < 0x35);
      }
    }
LAB_08009d96:
    iVar6 = DAT_08009ec8;
    uVar2 = (*(uint *)(param_1 + 0x68) >> 3) + (*(int *)(param_1 + 0x34) >> 4) & 0xffff;
    if (iVar9 <= iVar3) {
      iVar8 = ((*(int *)(param_1 + 0x38) + DAT_08009ec4 >> 6) + 0x18) * 0x10000 >> 0x10;
      if (iVar8 + iVar9 < 0x35) {
        uVar7 = iVar9 * -0x10000 + 0x350000;
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = uVar7 | uVar2;
          uVar7 = uVar7 + iVar6;
          iVar9 = iVar9 + 1;
          if (iVar3 < iVar9) goto LAB_08009e26;
          puVar4 = puVar4 + 1;
        } while (iVar8 + iVar9 < 0x35);
      }
      if ((iVar9 <= iVar3) && (iVar8 + iVar9 < 0x40)) {
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = iVar8 << 0x10 | uVar2;
          puVar4 = puVar4 + 1;
          iVar9 = iVar9 + 1;
          if (iVar3 < iVar9) break;
        } while (iVar8 + iVar9 < 0x40);
      }
    }
LAB_08009e26:
    uVar2 = (*(uint *)(param_1 + 0x68) >> 4) + (*(int *)(param_1 + 0x34) >> 5) & 0xffff;
    if (iVar9 <= iVar3) {
      iVar6 = ((*(int *)(param_1 + 0x38) + DAT_08009ec4 >> 7) + 0x18) * 0x10000 >> 0x10;
      if (iVar6 + iVar9 < 0x40) {
        uVar7 = iVar9 * -0x10000 + 0x400000;
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = uVar7 | uVar2;
          uVar7 = uVar7 + DAT_08009ec8;
          iVar9 = iVar9 + 1;
          if (iVar3 < iVar9) goto LAB_08009ed6;
          puVar4 = puVar4 + 1;
        } while (iVar6 + iVar9 < 0x40);
      }
      if ((iVar9 <= iVar3) && (iVar6 + iVar9 < 0x48)) {
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = iVar6 << 0x10 | uVar2;
          puVar4 = puVar4 + 1;
          iVar9 = iVar9 + 1;
          if (iVar3 < iVar9) break;
        } while (iVar6 + iVar9 < 0x48);
      }
    }
LAB_08009ed6:
    iVar6 = DAT_08009f9c;
    uVar2 = (*(uint *)(param_1 + 0x68) >> 5) + (*(int *)(param_1 + 0x34) >> 6) & 0xffff;
    if (iVar9 <= iVar3) {
      iVar8 = ((*(int *)(param_1 + 0x38) + DAT_08009f98 >> 8) + 0x18) * 0x10000 >> 0x10;
      if (iVar8 + iVar9 < 0x48) {
        uVar7 = iVar9 * -0x10000 + 0x480000;
        puVar4 = puVar1 + iVar9;
        do {
          *puVar4 = uVar7 | uVar2;
          uVar7 = uVar7 + iVar6;
          iVar9 = iVar9 + 1;
          if (iVar3 < iVar9) {
            return in_lr;
          }
          puVar4 = puVar4 + 1;
        } while (iVar8 + iVar9 < 0x48);
      }
      if (iVar9 <= iVar3) {
        if (iVar8 + iVar9 < 0x54) {
          puVar4 = puVar1 + iVar9;
          do {
            *puVar4 = iVar8 << 0x10 | uVar2;
            puVar4 = puVar4 + 1;
            iVar9 = iVar9 + 1;
            if (iVar3 < iVar9) {
              return in_lr;
            }
          } while (iVar8 + iVar9 < 0x54);
        }
        iVar6 = DAT_08009f9c;
        if (iVar9 <= iVar3) {
          uVar2 = iVar9 * -0x10000 + 0x720000;
          puVar1 = puVar1 + iVar9;
          do {
            *puVar1 = uVar2;
            puVar1 = puVar1 + 1;
            uVar2 = uVar2 + iVar6;
            iVar9 = iVar9 + 1;
          } while (iVar9 <= iVar3);
        }
      }
    }
  }
  return in_lr;
}


