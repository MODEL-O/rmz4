// undefined FUN_080119c8(void)
// entry 0x80119c8


undefined4 FUN_080119c8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 in_lr;
  uint local_20 [2];
  
  iVar5 = DAT_08011aa0;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    if ((*(byte *)(DAT_08011a98 + DAT_08011a9c) & 0xf) == 3) {
      uVar6 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
      puVar7 = (ushort *)(uVar6 * 2 + DAT_08011aa0);
      uVar4 = *(uint *)(param_1 + 100) | DAT_08011aa4;
      *puVar7 = (ushort)uVar4;
      *(undefined4 *)(uVar6 * 4 + iVar5 + 8) = 0;
      FUN_08128be0(*DAT_08011aa8 + DAT_08011aac,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
      FUN_08128be0(*DAT_08011ab0 + DAT_08011ab4,(*puVar7 & 0x1f00) * 8 + DAT_08011ab8,0x200);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(ushort *)(param_1 + 0x68) = (ushort)bVar1;
      *(undefined1 *)(param_1 + 0x6a) = 1;
      *DAT_08011abc = (short)DAT_08011ac0;
      puVar7 = DAT_08011ac4;
      *DAT_08011ac4 = *DAT_08011ac4 | 0x4000;
      *(undefined1 *)((int)puVar7 + 0xd) = 0xfb;
      puVar7[3] = 0xff;
      puVar7[5] = 0xff;
      *(undefined4 *)(param_1 + 0x48) = 0xc0;
      if (DAT_08011ac8 < *(int *)(param_1 + 0x34)) {
        *(undefined4 *)(param_1 + 0x50) = 0xa8;
        iVar5 = 0x300;
      }
      else {
        *(undefined4 *)(param_1 + 0x50) = 0xb8;
        iVar5 = (DAT_08011acc + 0x36000 >> 8) + 0xb8;
      }
      *(int *)(param_1 + 0x70) = iVar5;
      *(undefined2 *)(param_1 + 0x76) = 0;
    }
    else {
      local_20[0] = (uint)bVar1;
      FUN_08128be0(local_20,(*(ushort *)
                              (((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08011b8c) &
                            0x1f00) * 8 + 0x6000000,DAT_08011b90);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(DAT_08011b94 + DAT_08011b98) & 0xf) != 3) {
    return in_lr;
  }
  puVar7 = (ushort *)(param_1 + 0x68);
  if ((*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x34)) * 0x10 + 0x2000 < (int)(uint)*puVar7) {
    *puVar7 = 0;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
  }
  *puVar7 = *puVar7 + 0x10;
  iVar5 = *(int *)(param_1 + 0x34);
  if (DAT_08011b9c < iVar5) {
    iVar8 = (iVar5 + DAT_08011c3c) * 0x10;
    iVar5 = 0x1000;
    if (0x1000 < iVar8) {
      iVar8 = iVar5;
    }
    uVar4 = *(ushort *)(param_1 + 0x10) + 1 & 0xff;
    *(short *)(param_1 + 0x10) = (short)uVar4;
    iVar8 = iVar8 + *(short *)((uVar4 + 0x40 & 0xff) * 2 + DAT_08011c40) * 4;
    if (iVar8 < 0x1001) {
      if (iVar8 < 0) {
        if (*(short *)(param_1 + 0x78) != 0) {
          FUN_08002b5c(0x7a);
          *(short *)(param_1 + 0x78) = 0;
        }
        iVar5 = 0;
      }
      else {
        iVar5 = iVar8;
        if (*(short *)(param_1 + 0x78) == 0) {
          FUN_08002b10(0x7a);
          *(short *)(param_1 + 0x78) = 0x7a;
        }
      }
    }
    uVar2 = (ushort)((uint)iVar5 >> 8);
    *(ushort *)(DAT_08011c9c + 2) = uVar2 & 0x1f | (0x10 - uVar2) * 0x100;
    if (0x800 < iVar5) {
      sVar3 = (short)DAT_08011ca0;
      goto LAB_08011cac;
    }
  }
  else {
    iVar8 = (iVar5 + DAT_08011ba0) * 0x10;
    iVar5 = 0x1000;
    if (0x1000 < iVar8) {
      iVar8 = iVar5;
    }
    uVar4 = *(ushort *)(param_1 + 0x10) + 1 & 0xff;
    *(short *)(param_1 + 0x10) = (short)uVar4;
    iVar8 = iVar8 + *(short *)((uVar4 + 0x40 & 0xff) * 2 + DAT_08011ba4) * 4;
    if (iVar8 < 0x1001) {
      if (iVar8 < 0) {
        if (*(short *)(param_1 + 0x78) != 0) {
          FUN_08002b5c(0x7a);
          *(short *)(param_1 + 0x78) = 0;
        }
        iVar5 = 0;
      }
      else {
        iVar5 = iVar8;
        if (*(short *)(param_1 + 0x78) == 0) {
          FUN_08002b10(0x7a);
          *(short *)(param_1 + 0x78) = 0x7a;
        }
      }
    }
    uVar2 = (ushort)((uint)iVar5 >> 8);
    *(ushort *)(DAT_08011c00 + 2) = uVar2 & 0x1f | (0x10 - uVar2) * 0x100;
    if (0x800 < iVar5) {
      sVar3 = (short)DAT_08011c04;
      goto LAB_08011cac;
    }
  }
  sVar3 = (short)(-iVar5 >> 4);
LAB_08011cac:
  *(short *)(param_1 + 0x76) = sVar3;
  if ((*(ushort *)(DAT_08011cdc + 8) & 8) == 0) {
    *(int *)(*DAT_08011ce0 + 0x1bc) =
         *(int *)(*DAT_08011ce0 + 0x1bc) + (int)*(short *)(param_1 + 0x76);
  }
  return in_lr;
}


