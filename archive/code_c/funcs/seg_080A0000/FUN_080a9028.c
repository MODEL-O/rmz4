// undefined FUN_080a9028(void)
// entry 0x80a9028


undefined4 FUN_080a9028(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (((((*(uint *)(iVar7 + 0x8c) & 0x200) != 0) || (*(short *)(iVar7 + 0xa4) == 0)) &&
      ((*(ushort *)(DAT_080a9074 + 8) & 8) == 0)) || (1 < *(byte *)(iVar7 + 0xc))) {
    FUN_0801cff0(param_1);
    bVar1 = *(byte *)(param_1 + 0xf);
    if (bVar1 == 1) {
      iVar7 = *(ushort *)(param_1 + 0xbe) - 1;
      *(ushort *)(param_1 + 0xbe) = (ushort)iVar7;
      if (iVar7 * 0x10000 - DAT_080a90c8 != 0) {
        return in_lr;
      }
    }
    else {
      if (1 < bVar1) {
        if (bVar1 != 2) {
          return in_lr;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
        sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
        if (sVar3 == 0) {
          return in_lr;
        }
        piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a90f4);
        *(undefined4 *)(param_1 + 0xc) = 2;
        goto LAB_080a9114;
      }
      if (bVar1 != 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(ushort *)(param_1 + 0xbe) =
           (ushort)*(byte *)(iVar7 + 0xd4 + (uint)*(byte *)(param_1 + 0x10)) << 4;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a9124);
    *(undefined4 *)(param_1 + 0xc) = 2;
LAB_080a9114:
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080a9218(param_1);
    return in_lr;
  }
  piVar4 = (int *)(param_1 + 0xc0);
  if (*piVar4 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar5 = FUN_0802adac(0,param_1,DAT_080a91b8);
      *piVar4 = iVar5;
    }
    if (*piVar4 == 0) goto LAB_080a915c;
  }
  iVar5 = FUN_0802b3e4(*piVar4);
  if (iVar5 != 0) {
    *piVar4 = 0;
  }
LAB_080a915c:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a91bc));
  iVar6 = DAT_080a9214;
  iVar5 = DAT_080a91c0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    iVar6 = (uint)bVar1 * 0x20;
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar7 + 0x54) +
         ((int)*(short *)(iVar7 + 0xc0) *
          (int)*(short *)(((uint)(*(ushort *)(iVar7 + 0xc4) >> 8) + iVar6 + 0x40 & 0xff) * 2 +
                         DAT_080a91c0) >> 8);
    sVar3 = *(short *)(((uint)(*(ushort *)(iVar7 + 0xc4) >> 8) + iVar6 & 0xff) * 2 + iVar5);
    sVar2 = *(short *)(iVar7 + 0xc0);
  }
  else {
    iVar5 = (uint)bVar1 * 0x20;
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar7 + 0x54) +
         ((int)*(short *)(iVar7 + 0xc2) *
          (int)*(short *)(((uint)(*(ushort *)(iVar7 + 0xc6) >> 8) + iVar5 + 0x40 & 0xff) * 2 +
                         DAT_080a9214) >> 8);
    sVar3 = *(short *)(((uint)(*(ushort *)(iVar7 + 0xc6) >> 8) + iVar5 & 0xff) * 2 + iVar6);
    sVar2 = *(short *)(iVar7 + 0xc2);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + ((int)sVar2 * (int)sVar3 >> 8);
  return in_lr;
}


