// undefined FUN_080104fc(void)
// entry 0x80104fc


void FUN_080104fc(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  code *UNRECOVERED_JUMPTABLE;
  uint *local_24;
  
  if ((*(byte *)(DAT_08010850 + DAT_08010854) & 0xf) == 3) {
    iVar19 = 0x9f;
    uVar2 = *(ushort *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x38);
    puVar16 = (uint *)FUN_08000a70(0x280);
    if (puVar16 == (uint *)0x0) {
      FUN_080113b2();
    }
    iVar5 = DAT_08010858;
    *(uint **)(DAT_08010858 + 0x174) = puVar16;
    *(undefined4 *)(iVar5 + 0x178) = DAT_0801085c;
    *(undefined4 *)(iVar5 + 0x17c) = DAT_08010860;
    iVar9 = (uint)uVar1 * 0x10000;
    uVar18 = iVar9 + DAT_08010864;
    iVar8 = (uint)uVar2 << 0x10;
    iVar4 = iVar8 >> 0x12;
    uVar11 = ((*(int *)(param_1 + 0x68) << 3) >> 3) + iVar4 & 0xffff;
    iVar5 = FUN_08128fb8((int)uVar18 >> 0xe,6);
    iVar14 = (iVar5 + 0x74) * 0x10000 >> 0x10;
    if (0xfe < iVar14 + 0x9f) {
      uVar13 = 0x600000;
      puVar6 = puVar16 + 0x9f;
      do {
        *puVar6 = uVar13 | uVar11;
        uVar13 = uVar13 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar14 + iVar19 < 0xff) break;
      } while (-1 < iVar19);
    }
    uVar13 = (iVar5 + 0x74) * 0x10000;
    iVar5 = (int)uVar13 >> 0x10;
    if ((0xf7 < iVar5 + iVar19) && (-1 < iVar19)) {
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar13 | uVar11;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar5 + iVar19 < 0xf8) break;
      } while (-1 < iVar19);
    }
    iVar5 = (int)(uVar18 & 0xffff0000) >> 0xe;
    iVar14 = FUN_08128fb8(iVar5,0xc);
    uVar18 = (*(int *)(param_1 + 0x68) * 7 >> 3) + iVar4 & 0xffff;
    iVar17 = (iVar14 + 0x74) * 0x10000 >> 0x10;
    if ((0xf7 < iVar17 + iVar19) && (-1 < iVar19)) {
      uVar11 = iVar19 * -0x10000 + 0xb80000;
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar11 | uVar18;
        uVar11 = uVar11 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar17 + iVar19 < 0xf8) break;
      } while (-1 < iVar19);
    }
    uVar11 = (iVar14 + 0x74) * 0x10000;
    iVar14 = (int)uVar11 >> 0x10;
    if ((0xdd < iVar14 + iVar19) && (-1 < iVar19)) {
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar11 | uVar18;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar14 + iVar19 < 0xde) break;
      } while (-1 < iVar19);
    }
    iVar14 = FUN_08128fb8(iVar5,0x12);
    uVar18 = (*(int *)(param_1 + 0x68) * 6 >> 3) + (iVar8 >> 0x13) & 0xffff;
    iVar17 = (iVar14 + 0x74) * 0x10000 >> 0x10;
    if ((0xdd < iVar17 + iVar19) && (-1 < iVar19)) {
      uVar11 = iVar19 * -0x10000 + 0xdd0000;
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar11 | uVar18;
        uVar11 = uVar11 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar17 + iVar19 < 0xde) break;
      } while (-1 < iVar19);
    }
    uVar11 = (iVar14 + 0x74) * 0x10000;
    iVar14 = (int)uVar11 >> 0x10;
    if ((0xbe < iVar14 + iVar19) && (-1 < iVar19)) {
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar11 | uVar18;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar14 + iVar19 < 0xbf) break;
      } while (-1 < iVar19);
    }
    iVar14 = FUN_08128fb8(iVar5,0x14);
    iVar17 = *(int *)(param_1 + 0x68);
    iVar10 = (iVar14 + 0x74) * 0x10000 >> 0x10;
    if ((0xbe < iVar10 + iVar19) && (-1 < iVar19)) {
      uVar18 = iVar19 * -0x10000 + 0xbf0000;
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar18;
        uVar18 = uVar18 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar10 + iVar19 < 0xbf) break;
      } while (-1 < iVar19);
    }
    uVar18 = (iVar14 + 0x74) * 0x10000;
    iVar14 = (int)uVar18 >> 0x10;
    if ((0xb7 < iVar14 + iVar19) && (-1 < iVar19)) {
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar18 | ((iVar17 << 2) >> 3) + (iVar8 >> 0x14) & 0xffffU;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar14 + iVar19 < 0xb8) break;
      } while (-1 < iVar19);
    }
    iVar14 = FUN_08128fb8(iVar5,0x15);
    iVar10 = *(int *)(param_1 + 0x68);
    iVar17 = (iVar14 + 0x74) * 0x10000 >> 0x10;
    if ((0xb7 < iVar17 + iVar19) && (-1 < iVar19)) {
      uVar18 = iVar19 * -0x10000 + 0xb80000;
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar18;
        uVar18 = uVar18 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar17 + iVar19 < 0xb8) break;
      } while (-1 < iVar19);
    }
    uVar18 = (iVar14 + 0x74) * 0x10000;
    iVar14 = (int)uVar18 >> 0x10;
    if ((0xaf < iVar14 + iVar19) && (-1 < iVar19)) {
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar18 | (iVar10 * 3 >> 3) + (iVar8 >> 0x15) & 0xffffU;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar14 + iVar19 < 0xb0) break;
      } while (-1 < iVar19);
    }
    iVar14 = FUN_08128fb8(iVar5,0x16);
    uVar18 = ((*(int *)(param_1 + 0x68) << 1) >> 3) + (iVar8 >> 0x16) & 0xffff;
    iVar17 = (iVar14 + 0x74) * 0x10000 >> 0x10;
    if ((0xaf < iVar17 + iVar19) && (-1 < iVar19)) {
      uVar11 = iVar19 * -0x10000 + 0xb00000;
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar11 | uVar18;
        uVar11 = uVar11 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar17 + iVar19 < 0xb0) break;
      } while (-1 < iVar19);
    }
    uVar11 = (iVar14 + 0x74) * 0x10000;
    iVar14 = (int)uVar11 >> 0x10;
    if ((0xa7 < iVar14 + iVar19) && (-1 < iVar19)) {
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar11 | uVar18;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar14 + iVar19 < 0xa8) break;
      } while (-1 < iVar19);
    }
    iVar5 = FUN_08128fb8(iVar5,0x17);
    iVar14 = iVar8 >> 0x17;
    uVar18 = (*(int *)(param_1 + 0x68) >> 3) + iVar14 & 0xffff;
    iVar17 = (iVar5 + 0x74) * 0x10000 >> 0x10;
    if ((0xa7 < iVar17 + iVar19) && (-1 < iVar19)) {
      uVar11 = iVar19 * -0x10000 + 0xa80000;
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar11 | uVar18;
        uVar11 = uVar11 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar17 + iVar19 < 0xa8) break;
      } while (-1 < iVar19);
    }
    uVar11 = (iVar5 + 0x74) * 0x10000;
    iVar5 = (int)uVar11 >> 0x10;
    if ((0x9f < iVar5 + iVar19) && (-1 < iVar19)) {
      puVar6 = puVar16 + iVar19;
      do {
        *puVar6 = uVar11 | uVar18;
        puVar6 = puVar6 + -1;
        iVar19 = iVar19 + -1;
        if (iVar5 + iVar19 < 0xa0) break;
      } while (-1 < iVar19);
    }
    uVar18 = DAT_08010c5c + iVar9;
    iVar5 = FUN_08128fb8((int)uVar18 >> 0xd,0x18);
    iVar17 = *(int *)(param_1 + 0x68);
    iVar10 = 0;
    iVar9 = iVar5 * 0x10000 >> 0x10;
    sVar3 = (short)iVar19;
    if ((iVar9 < 0x1a) && (puVar6 = puVar16, (uint)(int)sVar3 < 0x80000000)) {
      do {
        *puVar6 = iVar5 * 0x10000 | (iVar17 * 7 >> 4) + iVar4 & 0xffffU;
        iVar10 = iVar10 + 1;
        if (0x19 < iVar9 + iVar10) break;
        puVar6 = puVar6 + 1;
      } while (iVar10 <= sVar3);
    }
    iVar19 = DAT_08010c60;
    uVar11 = (int)(uVar18 & 0xffff0000) >> 0xd;
    uVar18 = uVar11;
    if ((int)uVar11 < 0) {
      uVar18 = uVar11 + 0x1f;
    }
    uVar13 = (*(int *)(param_1 + 0x68) * 6 >> 4) + (iVar8 >> 0x13) & 0xffff;
    iVar5 = (int)(uVar18 << 0xb) >> 0x10;
    iVar4 = (int)sVar3;
    if ((iVar5 + iVar10 < 0x1a) && (iVar10 <= iVar4)) {
      uVar7 = iVar10 * -0x10000 + 0x1a0000;
      local_24 = puVar16 + iVar10;
      do {
        *local_24 = uVar7 | uVar13;
        local_24 = local_24 + 1;
        uVar7 = uVar7 + iVar19;
        iVar10 = iVar10 + 1;
        if (0x19 < iVar5 + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    uVar18 = ((uVar18 & 0x1fffff) >> 5) * 0x10000;
    iVar19 = (int)uVar18 >> 0x10;
    if ((iVar19 + iVar10 < 0x27) && (iVar10 <= iVar4)) {
      puVar6 = puVar16 + iVar10;
      do {
        *puVar6 = uVar18 | uVar13;
        puVar6 = puVar6 + 1;
        iVar10 = iVar10 + 1;
        if (0x26 < iVar19 + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    iVar5 = FUN_08128fb8(uVar11,0x28);
    iVar19 = DAT_08010c60;
    uVar18 = (*(int *)(param_1 + 0x68) * 5 >> 4) + (iVar8 >> 0x14) & 0xffff;
    if (((short)iVar5 + iVar10 < 0x27) && (iVar10 <= iVar4)) {
      uVar13 = iVar10 * -0x10000 + 0x270000;
      local_24 = puVar16 + iVar10;
      do {
        *local_24 = uVar13 | uVar18;
        local_24 = local_24 + 1;
        uVar13 = uVar13 + iVar19;
        iVar10 = iVar10 + 1;
        if (0x26 < (short)iVar5 + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    iVar19 = iVar5 * 0x10000 >> 0x10;
    if ((iVar19 + iVar10 < 0x40) && (iVar10 <= iVar4)) {
      puVar6 = puVar16 + iVar10;
      do {
        *puVar6 = iVar5 * 0x10000 | uVar18;
        puVar6 = puVar6 + 1;
        iVar10 = iVar10 + 1;
        if (0x3f < iVar19 + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    iVar5 = FUN_08128fb8(uVar11,0x30);
    iVar19 = DAT_08010c60;
    uVar18 = ((*(int *)(param_1 + 0x68) << 2) >> 4) + (iVar8 >> 0x15) & 0xffff;
    if (((short)iVar5 + iVar10 < 0x40) && (iVar10 <= iVar4)) {
      uVar13 = iVar10 * -0x10000 + 0x400000;
      local_24 = puVar16 + iVar10;
      do {
        *local_24 = uVar13 | uVar18;
        local_24 = local_24 + 1;
        uVar13 = uVar13 + iVar19;
        iVar10 = iVar10 + 1;
        if (0x3f < (short)iVar5 + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    iVar19 = iVar5 * 0x10000 >> 0x10;
    if ((iVar19 + iVar10 < 0x4f) && (iVar10 <= iVar4)) {
      puVar6 = puVar16 + iVar10;
      do {
        *puVar6 = iVar5 * 0x10000 | uVar18;
        puVar6 = puVar6 + 1;
        iVar10 = iVar10 + 1;
        if (0x4e < iVar19 + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    iVar5 = FUN_08128fb8(uVar11,0x38);
    iVar19 = DAT_08010c60;
    uVar18 = (*(int *)(param_1 + 0x68) * 3 >> 4) + (iVar8 >> 0x16) & 0xffff;
    if (((short)iVar5 + iVar10 < 0x4f) && (iVar10 <= iVar4)) {
      uVar13 = iVar10 * -0x10000 + 0x4f0000;
      local_24 = puVar16 + iVar10;
      do {
        *local_24 = uVar13 | uVar18;
        local_24 = local_24 + 1;
        uVar13 = uVar13 + iVar19;
        iVar10 = iVar10 + 1;
        if (0x4e < (short)iVar5 + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    iVar19 = iVar5 * 0x10000 >> 0x10;
    if ((iVar19 + iVar10 < 0x6a) && (iVar10 <= iVar4)) {
      puVar6 = puVar16 + iVar10;
      do {
        *puVar6 = iVar5 * 0x10000 | uVar18;
        puVar6 = puVar6 + 1;
        iVar10 = iVar10 + 1;
        if (0x69 < iVar19 + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    iVar5 = FUN_08128fb8(uVar11,0x3c);
    iVar19 = DAT_08010c60;
    uVar18 = ((*(int *)(param_1 + 0x68) << 1) >> 4) + iVar14 & 0xffff;
    if (((short)iVar5 + iVar10 < 0x6a) && (iVar10 <= iVar4)) {
      uVar13 = iVar10 * -0x10000 + 0x6a0000;
      local_24 = puVar16 + iVar10;
      do {
        *local_24 = uVar13 | uVar18;
        local_24 = local_24 + 1;
        uVar13 = uVar13 + iVar19;
        iVar10 = iVar10 + 1;
        if (0x69 < (short)iVar5 + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    iVar19 = iVar5 * 0x10000 >> 0x10;
    if ((iVar19 + iVar10 < 0x9f) && (iVar10 <= iVar4)) {
      puVar6 = puVar16 + iVar10;
      do {
        *puVar6 = iVar5 * 0x10000 | uVar18;
        puVar6 = puVar6 + 1;
        iVar10 = iVar10 + 1;
        if (0x9e < iVar19 + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    iVar19 = DAT_08010cdc;
    if ((int)uVar11 < 0) {
      uVar11 = uVar11 + 0x3f;
    }
    uVar18 = (*(int *)(param_1 + 0x68) >> 4) + iVar14 & 0xffff;
    if (((int)uVar11 >> 6) + iVar10 < 0x9f) {
      if (iVar4 < iVar10) goto code_r0x080113b2;
      uVar13 = iVar10 * -0x10000 + 0x9f0000;
      puVar6 = puVar16 + iVar10;
      do {
        *puVar6 = uVar13 | uVar18;
        puVar6 = puVar6 + 1;
        uVar13 = uVar13 + iVar19;
        iVar10 = iVar10 + 1;
        if (0x9e < ((int)uVar11 >> 6) + iVar10) break;
      } while (iVar10 <= iVar4);
    }
    iVar19 = DAT_08010cdc;
    if (iVar10 <= iVar4) {
      uVar11 = iVar10 * -0x10000 + 0xa00000;
      puVar16 = puVar16 + iVar10;
      do {
        *puVar16 = uVar11 | uVar18;
        puVar16 = puVar16 + 1;
        uVar11 = uVar11 + iVar19;
        iVar10 = iVar10 + 1;
      } while (iVar10 <= iVar4);
    }
  }
  else {
    iVar19 = 0x9f;
    uVar2 = *(ushort *)(param_1 + 0x34);
    uVar18 = (uint)*(ushort *)(param_1 + 0x38);
    if (*(short *)(param_1 + 0x38) <= DAT_08011018) {
      uVar18 = 0x1b0;
    }
    iVar4 = FUN_08000a70(0x280);
    iVar5 = DAT_0801101c;
    if (iVar4 != 0) {
      *(int *)(DAT_0801101c + 0x174) = iVar4;
      *(undefined4 *)(iVar5 + 0x178) = DAT_08011020;
      *(undefined4 *)(iVar5 + 0x17c) = DAT_08011024;
      iVar17 = uVar18 * 0x10000;
      iVar8 = *(int *)(param_1 + 0x68);
      iVar14 = (uint)uVar2 << 0x10;
      iVar5 = (iVar17 + DAT_08011028 >> 0x12) + 0x10;
      iVar9 = iVar5 * 0x10000 >> 0x10;
      if (0xfe < iVar9 + 0x9f) {
        iVar10 = 0x190000;
        piVar15 = (int *)(iVar4 + 0x27c);
        do {
          *piVar15 = iVar10;
          iVar10 = iVar10 + 0x10000;
          piVar15 = piVar15 + -1;
          iVar19 = iVar19 + -1;
          if (iVar9 + iVar19 < 0xff) break;
        } while (-1 < iVar19);
      }
      uVar18 = iVar5 * 0x10000;
      iVar5 = (int)uVar18 >> 0x10;
      if ((0xf8 < iVar5 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | (iVar8 * 6 >> 3) + (iVar14 >> 0x12) & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar5 + iVar19 < 0xf9) break;
        } while (-1 < iVar19);
      }
      iVar5 = (DAT_0801102c + iVar17 >> 0x12) + 0x10;
      uVar18 = (*(int *)(param_1 + 0x68) * 5 >> 3) + (iVar14 >> 0x13) & 0xffff;
      iVar8 = iVar5 * 0x10000 >> 0x10;
      if ((0xf8 < iVar8 + iVar19) && (-1 < iVar19)) {
        uVar11 = iVar19 * -0x10000 + 0xf80000;
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar11 | uVar18;
          uVar11 = uVar11 + 0x10000;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar8 + iVar19 < 0xf9) break;
        } while (-1 < iVar19);
      }
      uVar11 = iVar5 * 0x10000;
      iVar5 = (int)uVar11 >> 0x10;
      if ((0xdd < iVar5 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar11 | uVar18;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar5 + iVar19 < 0xde) break;
        } while (-1 < iVar19);
      }
      iVar5 = (DAT_08011030 + iVar17 >> 0x12) + 0x10;
      uVar18 = ((*(int *)(param_1 + 0x68) << 2) >> 3) + (iVar14 >> 0x14) & 0xffff;
      iVar8 = iVar5 * 0x10000 >> 0x10;
      if ((0xdd < iVar8 + iVar19) && (-1 < iVar19)) {
        uVar11 = iVar19 * -0x10000 + 0xdd0000;
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar11 | uVar18;
          uVar11 = uVar11 + 0x10000;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar8 + iVar19 < 0xde) break;
        } while (-1 < iVar19);
      }
      uVar11 = iVar5 * 0x10000;
      iVar5 = (int)uVar11 >> 0x10;
      if ((0xc4 < iVar5 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar11 | uVar18;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar5 + iVar19 < 0xc5) break;
        } while (-1 < iVar19);
      }
      iVar8 = *(int *)(param_1 + 0x68);
      if ((0xbb < iVar5 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar11 | (iVar8 * 3 >> 3) + (iVar14 >> 0x15) & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar5 + iVar19 < 0xbc) break;
        } while (-1 < iVar19);
      }
      iVar8 = *(int *)(param_1 + 0x68);
      if ((0xb3 < iVar5 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar11 | ((iVar8 << 1) >> 3) + (iVar14 >> 0x16) & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar5 + iVar19 < 0xb4) break;
        } while (-1 < iVar19);
      }
      iVar8 = (DAT_08011034 + iVar17 >> 0x12) + 0x10;
      iVar5 = *(int *)(param_1 + 0x68);
      iVar9 = iVar8 * 0x10000 >> 0x10;
      if ((0xb3 < iVar9 + iVar19) && (-1 < iVar19)) {
        iVar10 = iVar19 * -0x10000 + 0xb40000;
        piVar15 = (int *)(iVar19 * 4 + iVar4);
        do {
          *piVar15 = iVar10;
          iVar10 = iVar10 + 0x10000;
          piVar15 = piVar15 + -1;
          iVar19 = iVar19 + -1;
          if (iVar9 + iVar19 < 0xb4) break;
        } while (-1 < iVar19);
      }
      uVar18 = iVar8 * 0x10000;
      iVar8 = (int)uVar18 >> 0x10;
      if ((0xa9 < iVar8 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | (iVar5 >> 4) + (iVar14 >> 0x17) & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar8 + iVar19 < 0xaa) break;
        } while (-1 < iVar19);
      }
      iVar5 = *(int *)(param_1 + 0x68);
      if ((0xa0 < iVar8 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | ((iVar5 << 1) >> 4) + (iVar14 >> 0x17) & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar8 + iVar19 < 0xa1) break;
        } while (-1 < iVar19);
      }
      iVar5 = *(int *)(param_1 + 0x68);
      if ((0x97 < iVar8 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | ((iVar5 << 2) >> 4) + (iVar14 >> 0x16) & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar8 + iVar19 < 0x98) break;
        } while (-1 < iVar19);
      }
      iVar5 = *(int *)(param_1 + 0x68);
      if ((0x8c < iVar8 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | (iVar5 * 5 >> 4) + (iVar14 >> 0x15) & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar8 + iVar19 < 0x8d) break;
        } while (-1 < iVar19);
      }
      iVar5 = (DAT_0801139c + iVar17 >> 0x12) + 0x10;
      iVar8 = *(int *)(param_1 + 0x68);
      iVar14 = iVar14 >> 0x10;
      iVar9 = FUN_08128fb8(iVar14,0x38);
      iVar10 = (int)(short)iVar5;
      if ((0x8c < iVar10 + iVar19) && (-1 < iVar19)) {
        iVar12 = iVar19 * -0x10000 + 0x8d0000;
        piVar15 = (int *)(iVar19 * 4 + iVar4);
        do {
          *piVar15 = iVar12;
          iVar12 = iVar12 + 0x10000;
          piVar15 = piVar15 + -1;
          iVar19 = iVar19 + -1;
          if (iVar10 + iVar19 < 0x8d) break;
        } while (-1 < iVar19);
      }
      uVar18 = iVar5 * 0x10000;
      iVar5 = (int)uVar18 >> 0x10;
      if ((0x76 < iVar5 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | (iVar8 * 6 >> 4) + iVar9 & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar5 + iVar19 < 0x77) break;
        } while (-1 < iVar19);
      }
      iVar5 = (iVar17 + -0x2000000 >> 0x12) + 0x10;
      iVar8 = *(int *)(param_1 + 0x68);
      iVar9 = FUN_08128fb8(iVar14,0x30);
      iVar10 = (int)(short)iVar5;
      if ((0x76 < iVar10 + iVar19) && (-1 < iVar19)) {
        iVar12 = iVar19 * -0x10000 + 0x760000;
        piVar15 = (int *)(iVar19 * 4 + iVar4);
        do {
          *piVar15 = iVar12;
          iVar12 = iVar12 + 0x10000;
          piVar15 = piVar15 + -1;
          iVar19 = iVar19 + -1;
          if (iVar10 + iVar19 < 0x77) break;
        } while (-1 < iVar19);
      }
      uVar18 = iVar5 * 0x10000;
      iVar5 = (int)uVar18 >> 0x10;
      if ((0x5d < iVar5 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | (iVar8 * 7 >> 4) + iVar9 & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar5 + iVar19 < 0x5e) break;
        } while (-1 < iVar19);
      }
      iVar5 = (DAT_080113a0 + iVar17 >> 0x12) + 0x10;
      iVar10 = *(int *)(param_1 + 0x68);
      iVar8 = FUN_08128fb8(iVar14,0x28);
      iVar9 = (int)(short)iVar5;
      if ((0x5d < iVar9 + iVar19) && (-1 < iVar19)) {
        iVar12 = iVar19 * -0x10000 + 0x5d0000;
        piVar15 = (int *)(iVar19 * 4 + iVar4);
        do {
          *piVar15 = iVar12;
          iVar12 = iVar12 + 0x10000;
          piVar15 = piVar15 + -1;
          iVar19 = iVar19 + -1;
          if (iVar9 + iVar19 < 0x5e) break;
        } while (-1 < iVar19);
      }
      uVar18 = iVar5 * 0x10000;
      iVar5 = (int)uVar18 >> 0x10;
      if ((0x50 < iVar5 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | ((iVar10 << 3) >> 4) + iVar8 & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar5 + iVar19 < 0x51) break;
        } while (-1 < iVar19);
      }
      iVar8 = *(int *)(param_1 + 0x68);
      iVar5 = iVar14;
      if (iVar14 < 0) {
        iVar5 = iVar14 + 0x1f;
      }
      uVar18 = ((DAT_080113a4 + iVar17 >> 0x12) + 0x10) * 0x10000;
      iVar9 = (int)uVar18 >> 0x10;
      if ((0x50 < iVar9 + iVar19) && (-1 < iVar19)) {
        iVar10 = iVar19 * -0x10000 + 0x5d0000;
        piVar15 = (int *)(iVar19 * 4 + iVar4);
        do {
          *piVar15 = iVar10;
          iVar10 = iVar10 + 0x10000;
          piVar15 = piVar15 + -1;
          iVar19 = iVar19 + -1;
          if (iVar9 + iVar19 < 0x51) break;
        } while (-1 < iVar19);
      }
      if ((0x30 < iVar9 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | (iVar8 * 9 >> 4) + (iVar5 >> 5) & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar9 + iVar19 < 0x31) break;
        } while (-1 < iVar19);
      }
      iVar5 = (DAT_080113a8 + iVar17 >> 0x12) + 0x10;
      iVar8 = *(int *)(param_1 + 0x68);
      iVar9 = FUN_08128fb8(iVar14,0x18);
      iVar10 = (int)(short)iVar5;
      if ((0x30 < iVar10 + iVar19) && (-1 < iVar19)) {
        iVar12 = iVar19 * -0x10000 + 0x310000;
        piVar15 = (int *)(iVar19 * 4 + iVar4);
        do {
          *piVar15 = iVar12;
          iVar12 = iVar12 + 0x10000;
          piVar15 = piVar15 + -1;
          iVar19 = iVar19 + -1;
          if (iVar10 + iVar19 < 0x31) break;
        } while (-1 < iVar19);
      }
      uVar18 = iVar5 * 0x10000;
      iVar5 = (int)uVar18 >> 0x10;
      if ((0x18 < iVar5 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | (iVar8 * 10 >> 4) + iVar9 & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar5 + iVar19 < 0x19) break;
        } while (-1 < iVar19);
      }
      iVar5 = *(int *)(param_1 + 0x68);
      if (iVar14 < 0) {
        iVar14 = iVar14 + 0xf;
      }
      uVar18 = ((DAT_080113ac + iVar17 >> 0x12) + 0x10) * 0x10000;
      iVar8 = (int)uVar18 >> 0x10;
      if ((0x18 < iVar8 + iVar19) && (-1 < iVar19)) {
        iVar9 = iVar19 * -0x10000 + 0x190000;
        piVar15 = (int *)(iVar19 * 4 + iVar4);
        do {
          *piVar15 = iVar9;
          iVar9 = iVar9 + 0x10000;
          piVar15 = piVar15 + -1;
          iVar19 = iVar19 + -1;
          if (iVar8 + iVar19 < 0x19) break;
        } while (-1 < iVar19);
      }
      if ((-1 < iVar8 + iVar19) && (-1 < iVar19)) {
        puVar16 = (uint *)(iVar19 * 4 + iVar4);
        do {
          *puVar16 = uVar18 | (iVar5 * 0xb >> 4) + (iVar14 >> 4) & 0xffffU;
          puVar16 = puVar16 + -1;
          iVar19 = iVar19 + -1;
          if (iVar8 + iVar19 < 0) break;
        } while (-1 < iVar19);
      }
    }
  }
code_r0x080113b2:
                    /* WARNING: Could not recover jumptable at 0x080113c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


