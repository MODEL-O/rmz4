// undefined FUN_0800f2a0(void)
// entry 0x800f2a0


undefined4 FUN_0800f2a0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 in_lr;
  
  puVar5 = (ushort *)(param_1 + 0x6e);
  *(ushort *)(param_1 + 0x6c) = *puVar5;
  *puVar5 = (ushort)((uint)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x44)) >> 8);
  iVar3 = (uint)*puVar5 - (uint)*(ushort *)(param_1 + 0x6c);
  if (iVar3 < DAT_0800f2d8) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x30;
  }
  else if (0x100 < iVar3) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x30;
  }
  iVar3 = DAT_0800f324;
  uVar6 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
  *(short *)(uVar6 * 4 + DAT_0800f324) =
       *(short *)(param_1 + 0x6e) + (short)*(undefined4 *)(param_1 + 0x4c);
  puVar5 = (ushort *)(uVar6 * 4 + iVar3 + 2);
  *puVar5 = (ushort)((uint)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x48)) >> 8);
  uVar4 = (uint)*puVar5;
  bVar1 = *(byte *)(param_1 + 0x68);
  if (bVar1 == 1) {
    if (uVar4 <= DAT_0800f3a8) {
      FUN_08128be0(*DAT_0800f3ac + DAT_0800f3b0,
                   (*(ushort *)(uVar6 * 2 + iVar3 + -8) & 0x1f00) * 8 + 0x6000000,0x200);
      bVar1 = 0;
      goto LAB_0800f494;
    }
    if (uVar4 < 0x409) {
      return in_lr;
    }
    iVar2 = *DAT_0800f3dc + DAT_0800f3e0;
    iVar3 = (*(ushort *)(uVar6 * 2 + iVar3 + -8) & 0x1f00) * 8 + DAT_0800f3e4;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if (uVar4 < 0x309) {
        return in_lr;
      }
      FUN_08128be0(*DAT_0800f36c + DAT_0800f370,
                   (*(ushort *)(uVar6 * 2 + iVar3 + -8) & 0x1f00) * 8 + 0x6000000,0x200);
      bVar1 = 1;
      goto LAB_0800f494;
    }
    if (bVar1 == 2) {
      if (DAT_0800f418 < uVar4) {
        if (uVar4 < 0x509) {
          return in_lr;
        }
        FUN_08128be0(*DAT_0800f45c + DAT_0800f460,
                     (*(ushort *)(uVar6 * 2 + iVar3 + -8) & 0x1f00) * 8 + 0x6000000,0x200);
        bVar1 = 3;
      }
      else {
        FUN_08128be0(*DAT_0800f41c + DAT_0800f420,
                     (*(ushort *)(uVar6 * 2 + iVar3 + -8) & 0x1f00) * 8 + DAT_0800f424,0x200);
        bVar1 = 1;
      }
      goto LAB_0800f494;
    }
    if (bVar1 != 3) {
      return in_lr;
    }
    if (DAT_0800f49c < uVar4) {
      return in_lr;
    }
    iVar2 = *DAT_0800f4a0 + DAT_0800f4a4;
    iVar3 = (*(ushort *)(uVar6 * 2 + iVar3 + -8) & 0x1f00) * 8 + 0x6000000;
  }
  FUN_08128be0(iVar2,iVar3,0x200);
  bVar1 = 2;
LAB_0800f494:
  *(byte *)(param_1 + 0x68) = bVar1;
  return in_lr;
}


