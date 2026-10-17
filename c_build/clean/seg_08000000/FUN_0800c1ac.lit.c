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
  
  puVar5 = 0x02000a00;
  if (*(char *)(param_1 + 0xe) == '\0') {
    (*(ushort *)0x02000a00) = ((ushort)0x0000fff8 & (*(ushort *)0x02000a00) | 0x2401) & (ushort)0x0000c7ff;
    puVar5[4] = (ushort)0x000084c6;
    piVar3 = 0x08b2c0b0;
    uVar10 = 0;
    puVar5 = puVar5 + 4;
    do {
      if ((uVar10 & 1) == 0) {
        FUN_08128be0((*(int *)0x08b2c0d0) + uVar10 * 0x10 + 0x08b2c0d8,
                     (*puVar5 & 0x1f00) * 8 + uVar10 * 0x20 + 0x6000000,8);
      }
      else {
        FUN_08128be0(*piVar3 + uVar10 * 0x10 + 0x08b2c0a8,
                     (*puVar5 & 0x1f00) * 8 + uVar10 * 0x20 + 0x6000000,8);
      }
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 < 0x24);
    local_24[0] = 0;
    FUN_08128be0(local_24,(*(ushort *)(0x02000a04 + 4) & 0x1f00) * 8 + uVar10 * 0x20 + 0x6000000,
                 0x010002e0);
    piVar3 = 0x08df2004;
    FUN_08001ea4((*(int *)0x08df2004) + 0x08df2054,0x4000);
    FUN_08002208(*piVar3 + 0x08df2060,0);
    *(undefined4 *)(param_1 + 0x68) = 0x152000;
    *(undefined4 *)(param_1 + 0x6c) = 0x2b000;
    *(undefined4 *)(param_1 + 0x74) = 0x1cc00;
    *(undefined4 *)(param_1 + 0x78) = 0x7000;
    *(undefined2 *)(param_1 + 0x70) = 0x3c00;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = 0x02000ab0;
  bVar1 = *(byte *)(0x0002d025 + 0x02000ab0);
  if ((bVar1 & 2) != 0) {
    *(byte *)(0x0002d025 + 0x02000ab0) = bVar1 & 0xfd;
    *(undefined2 *)(0x0002d030 + iVar4) = 1;
  }
  uVar10 = (uint)*(ushort *)(0x0002d030 + iVar4);
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
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 0xffffff00;
    if (0x80 < (uVar9 & 0xffff)) {
      *(short *)(param_1 + 0x70) =
           (*(short *)((uVar9 & 0xff) * 2 + 0x0812930c) >> 6) + *(short *)(param_1 + 0x70);
    }
  }
  else if (uVar10 < 0x100) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 0xffffff00;
    uVar2 = *(ushort *)((uVar9 & 0xff) * 2 + 0x0812930c);
    iVar6 = (int)((uint)uVar2 << 0x10) >> 0x12;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - iVar6;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar6;
    *(short *)(param_1 + 0x70) = ((short)uVar2 >> 6) + *(short *)(param_1 + 0x70);
  }
  else {
    if (0x00000103 < uVar10) {
      if (uVar10 <= 0x0000011b) {
        psVar7 = (short *)((uVar9 & 0xff) * 2 + 0x0812930c);
        iVar6 = *psVar7 * 5 >> 2;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar6;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar6;
        *(short *)(param_1 + 0x70) = (*psVar7 >> 1) + *(short *)(param_1 + 0x70);
        *(undefined2 *)(param_1 + 0x12) = 0;
        goto LAB_0800c52e;
      }
      if (uVar10 <= 0x0000015b) {
        iVar6 = *(short *)((uVar2 + 0x41 & 0xff) * 2 + 0x0812930c) * 5;
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
      if (0x0000015f < uVar10) {
        if (0x00000181 < uVar10) {
          if (0x00000191 < uVar10) {
            if (uVar10 == 0x192) {
              *(short *)(0x0002d032 + iVar4) = *(short *)(0x0002d032 + iVar4) + 1;
            }
            else {
              puVar5 = (ushort *)(0x0002d032 + iVar4);
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
            puVar5 = (ushort *)((uVar9 & 0xff) * 2 + 0x0812930c);
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (short)*puVar5 * 2;
            *(int *)(param_1 + 0x6c) =
                 *(int *)(param_1 + 0x6c) - ((int)((uint)*puVar5 << 0x10) >> 0x11);
            *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 2;
          }
        }
        else {
          puVar5 = (ushort *)((uVar9 & 0xff) * 2 + 0x0812930c);
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
  uVar2 = *(ushort *)(0x0002d030 + iVar4);
  if (uVar2 <= 0x000003ff) {
    *(ushort *)(0x0002d030 + iVar4) = uVar2 + 1;
  }
  return;
}


