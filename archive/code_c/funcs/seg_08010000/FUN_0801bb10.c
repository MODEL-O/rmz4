// undefined FUN_0801bb10(void)
// entry 0x801bb10


undefined4 FUN_0801bb10(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  undefined4 in_lr;
  
  uVar3 = *(uint *)(param_1 + 0x5c);
  uVar11 = uVar3 & 0xffff;
  if (*(short *)(DAT_0801bb50 + DAT_0801bb54) != 0) {
    if (*(char *)(DAT_0801bb50 + DAT_0801bb58) == '\0') {
      FUN_08002734(uVar3 & 0xff,DAT_0801bbc0,99,0,0);
    }
    else {
      FUN_08002734(uVar3 & 0xff,DAT_0801bb5c,0x59,0,0);
    }
  }
  iVar4 = DAT_0801bbd0;
  iVar5 = DAT_0801bbc4;
  if ((*(int *)(DAT_0801bbc4 + DAT_0801bbc8) != 0) &&
     (bVar1 = *(byte *)(*(int *)(DAT_0801bbc4 + DAT_0801bbc8) + 0x1d),
     (*(uint *)((uint)(bVar1 >> 5) * 4 + DAT_0801bbcc) & 1 << (bVar1 & 0x1f)) != 0)) {
    *(undefined2 *)(DAT_0801bbd0 + DAT_0801bbd4) = 0x40;
    *(undefined2 *)(iVar4 + DAT_0801bbd8) = 0x60;
  }
  if (*(char *)(iVar5 + DAT_0801bbdc) == '\x01') {
    *DAT_0801bd10 = *DAT_0801bd10 & ~(ushort)(uVar11 << 8);
  }
  else {
    *DAT_0801bbe0 = (ushort)(uVar11 << 8) | *DAT_0801bbe0;
  }
  iVar7 = DAT_0801bd18;
  iVar4 = DAT_0801bd14;
  iVar8 = (uVar11 >> 4) * 4;
  puVar12 = (ushort *)(iVar8 + DAT_0801bd14);
  *puVar12 = ((short)*(undefined4 *)(param_1 + 0x34) -
             (short)((uint)*(undefined4 *)(iVar5 + DAT_0801bd18) >> 8)) + 0x50 +
             *(short *)(iVar5 + DAT_0801bd18 + 8) +
             (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
  puVar9 = (ushort *)(iVar8 + iVar4 + 2);
  *puVar9 = ((short)*(undefined4 *)(param_1 + 0x38) -
            (short)((uint)*(undefined4 *)(iVar5 + DAT_0801bd1c) >> 8)) +
            *(short *)(iVar5 + iVar7 + 10) + (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  uVar13 = 0;
  uVar3 = 0;
  uVar2 = *puVar12;
  uVar11 = (uint)*puVar9;
  iVar4 = FUN_08000a70(0x280);
  iVar5 = DAT_0801bd20;
  if (iVar4 != 0) {
    *(int *)(DAT_0801bd20 + 0x174) = iVar4;
    *(undefined4 *)(iVar5 + 0x178) = DAT_0801bd24;
    *(undefined4 *)(iVar5 + 0x17c) = DAT_0801bd28;
    uVar10 = uVar11 * 0x10000;
    iVar5 = (int)uVar10 >> 0x10;
    if (iVar5 != -0xa0 && 0x9f < -iVar5) {
      do {
        *(uint *)((short)uVar13 * 4 + iVar4) = uVar10 | uVar2;
        uVar6 = (int)(short)uVar13 + 1;
        uVar13 = uVar6 & 0xffff;
        iVar8 = (int)(uVar6 * 0x10000) >> 0x10;
        iVar7 = iVar8 + 0xa0;
        if (iVar7 + iVar5 < 0 == SCARRY4(iVar7,iVar5)) break;
      } while (iVar8 < 0xa0);
    }
    iVar5 = uVar13 << 0x10;
    if (iVar5 >> 0x10 < 0xa0) {
      do {
        iVar7 = (int)(short)uVar3;
        *(uint *)((iVar5 >> 0x10) * 4 + iVar4) =
             (iVar7 * *(short *)(((uVar11 + uVar13) * 2 + (uint)*(byte *)(param_1 + 0x12) & 0xff) *
                                 2 + DAT_0801bd2c) >> 0xc) + (int)(short)uVar2 & DAT_0801bd30 |
             uVar10;
        if (iVar7 < 200) {
          uVar3 = iVar7 + 2U & 0xffff;
        }
        uVar6 = (iVar5 >> 0x10) + 1;
        uVar13 = uVar6 & 0xffff;
        iVar5 = uVar6 * 0x10000;
      } while (iVar5 >> 0x10 < 0xa0);
    }
  }
  return in_lr;
}


