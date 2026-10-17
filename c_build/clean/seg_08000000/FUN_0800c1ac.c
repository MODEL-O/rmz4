// undefined FUN_0800c1ac(void)
// entry 0x800c1ac


void FUN_0800c1ac(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_24 [2];
  
  puVar5 = DAT_0800c224;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)DAT_0800c224 = ((ushort)DAT_0800c228 & *(int *)DAT_0800c224 | 0x2401) & (ushort)DAT_0800c22c;
    puVar5[4] = (ushort)DAT_0800c230;
    piVar3 = DAT_0800c234;
    uVar10 = 0;
    puVar5 = puVar5 + 4;
    do {
      if ((uVar10 & 1) == 0) {
        FUN_08128be0(*(int *)DAT_0800c360 + uVar10 * 0x10 + DAT_0800c364,
                     (*puVar5 & 0x1f00) * 8 + uVar10 * 0x20 + 0x6000000,8);
      }
      else {
        FUN_08128be0(*piVar3 + uVar10 * 0x10 + DAT_0800c238,
                     (*puVar5 & 0x1f00) * 8 + uVar10 * 0x20 + 0x6000000,8);
      }
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 < 0x24);
    local_24[0] = 0;
    FUN_08128be0(local_24,(*(ushort *)(DAT_0800c368 + 4) & 0x1f00) * 8 + uVar10 * 0x20 + 0x6000000,
                 DAT_0800c36c);
    piVar3 = DAT_0800c370;
    FUN_08001ea4(*(int *)DAT_0800c370 + DAT_0800c374,0x4000);
    FUN_08002208(*piVar3 + DAT_0800c378,0);
    *(undefined4 *)(param_1 + 0x68) = 0x152000;
    *(undefined4 *)(param_1 + 0x6c) = 0x2b000;
    *(undefined4 *)(param_1 + 0x74) = 0x1cc00;
    *(undefined4 *)(param_1 + 0x78) = 0x7000;
    *(undefined2 *)(param_1 + 0x70) = 0x3c00;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = DAT_0800c37c;
  bVar1 = *(byte *)(DAT_0800c380 + DAT_0800c37c);
  if ((bVar1 & 2) != 0) {
    *(byte *)(DAT_0800c380 + DAT_0800c37c) = bVar1 & 0xfd;
    *(undefined2 *)(DAT_0800c384 + iVar4) = 1;
  }
  uVar10 = (uint)*(ushort *)(DAT_0800c384 + iVar4);
  if (uVar10 == 0) {
    return;
  }
  uVar9 = *(ushort *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = (short)uVar9;
  uVar2 = *(ushort *)(param_1 + 0x12);
  *(ushort *)(param_1 + 0x12) = uVar2 + 1;
  if (uVar10 < 200) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x38;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -0x38;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + DAT_0800c388;
    if (0x80 < (uVar9 & 0xffff)) {
      *(short *)(param_1 + 0x70) =
           (*(short *)((uVar9 & 0xff) * 2 + DAT_0800c38c) >> 6) + *(short *)(param_1 + 0x70);
    }
  }
  else if (uVar10 < 0x100) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + DAT_0800c3c4;
    uVar2 = *(ushort *)((uVar9 & 0xff) * 2 + DAT_0800c3c8);
    iVar6 = (int)((uint)uVar2 << 0x10) >> 0x12;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - iVar6;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar6;
    *(short *)(param_1 + 0x70) = ((short)uVar2 >> 6) + *(short *)(param_1 + 0x70);
  }
  else {
    if (DAT_0800c40c < uVar10) {
      if (uVar10 <= DAT_0800c410) {
        psVar7 = (short *)((uVar9 & 0xff) * 2 + DAT_0800c414);
        iVar6 = *psVar7 * 5 >> 2;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar6;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar6;
        *(short *)(param_1 + 0x70) = (*psVar7 >> 1) + *(short *)(param_1 + 0x70);
        *(undefined2 *)(param_1 + 0x12) = 0;
        goto LAB_0800c52e;
      }
      if (uVar10 <= DAT_0800c45c) {
        iVar6 = *(short *)((uVar2 + 0x41 & 0xff) * 2 + DAT_0800c460) * 5;
        iVar8 = iVar6 >> 4;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar8;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar8;
        puVar5 = (ushort *)(param_1 + 0x70);
        uVar10 = (iVar6 >> 7) + (uint)*puVar5;
        *puVar5 = (ushort)uVar10;
        if (0x4000 < (uVar10 & 0xffff)) {
          *puVar5 = 0x4000;
        }
        goto LAB_0800c52e;
      }
      if (DAT_0800c470 < uVar10) {
        if (DAT_0800c49c < uVar10) {
          if (DAT_0800c4d8 < uVar10) {
            if (uVar10 == 0x192) {
              *(short *)(DAT_0800c4f4 + iVar4) = *(short *)(DAT_0800c4f4 + iVar4) + 1;
            }
            else {
              puVar5 = (ushort *)(DAT_0800c54c + iVar4);
              *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x200 + (uint)*puVar5;
              *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -0x40 + (uint)(*puVar5 >> 2);
              puVar5 = (ushort *)(param_1 + 0x70);
              uVar2 = *puVar5;
              *puVar5 = uVar2 + 2;
              if (0x4000 < (ushort)(uVar2 + 2)) {
                *puVar5 = 0x4000;
              }
            }
          }
          else {
            puVar5 = (ushort *)((uVar9 & 0xff) * 2 + DAT_0800c4dc);
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (short)*puVar5 * 2;
            *(int *)(param_1 + 0x6c) =
                 *(int *)(param_1 + 0x6c) - ((int)((uint)*puVar5 << 0x10) >> 0x11);
            *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 2;
          }
        }
        else {
          puVar5 = (ushort *)((uVar9 & 0xff) * 2 + DAT_0800c4a0);
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (short)*puVar5 * 2;
          *(int *)(param_1 + 0x6c) =
               *(int *)(param_1 + 0x6c) - ((int)((uint)*puVar5 << 0x10) >> 0x11);
        }
        goto LAB_0800c52e;
      }
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
LAB_0800c52e:
  uVar2 = *(ushort *)(DAT_0800c550 + iVar4);
  if (uVar2 <= DAT_0800c554) {
    *(ushort *)(DAT_0800c550 + iVar4) = uVar2 + 1;
  }
  return;
}


