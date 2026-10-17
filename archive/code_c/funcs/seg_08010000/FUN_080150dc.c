// undefined FUN_080150dc(void)
// entry 0x80150dc


undefined4 FUN_080150dc(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ushort *puVar9;
  undefined4 in_lr;
  
  piVar4 = DAT_080154a0;
  iVar1 = DAT_080152e4;
  piVar2 = DAT_080152dc;
  if ((*(byte *)(DAT_080152d0 + DAT_080152d4) & 0xf) == 1) {
    if ((*(ushort *)(DAT_080152d0 + DAT_080152d8) >> 8 == 9) &&
       ((*(ushort *)(DAT_080152d0 + DAT_080152d8) & 0xff) == 0)) {
      pbVar8 = (byte *)(DAT_080152d0 + DAT_080152e0);
      FUN_08001ea4(*DAT_080152dc + (*pbVar8 >> 1 & 3) * 0x14 + DAT_080152e4,0x4000);
      FUN_08002208(*piVar2 + (*pbVar8 >> 1 & 3) * 0x14 + iVar1 + 0xc,0);
    }
    piVar2 = DAT_080152dc;
    iVar1 = DAT_080152d0;
    puVar9 = (ushort *)(DAT_080152e8 + DAT_080152d0);
    if (*puVar9 >> 8 == 9) {
      if ((*puVar9 & 0xff) == 2) {
        pbVar8 = (byte *)(DAT_080152d0 + DAT_080152ec);
        uVar5 = FUN_08129198(*pbVar8 >> 2,3);
        iVar3 = DAT_080152f0;
        FUN_08001ea4(*piVar2 + (uVar5 & 0xff) * 0x14 + DAT_080152f0,0x4000);
        uVar5 = FUN_08129198(*pbVar8 >> 2,3);
        FUN_08002208(*piVar2 + (uVar5 & 0xff) * 0x14 + iVar3 + 0xc,0);
        uVar5 = FUN_08129198(*pbVar8 >> 2,3);
        iVar3 = DAT_080152f4;
        FUN_08001ea4(*piVar2 + (uVar5 & 0xff) * 0x14 + DAT_080152f4,0x4000);
        uVar5 = FUN_08129198(*pbVar8 >> 2,3);
        FUN_08002208(*piVar2 + (uVar5 & 0xff) * 0x14 + iVar3 + 0xc,0);
      }
      piVar2 = DAT_080152dc;
      if (*puVar9 >> 8 == 9) {
        if ((*puVar9 & 0xff) == 1) {
          pbVar8 = (byte *)(iVar1 + DAT_080152f8);
          uVar5 = FUN_08129198(*pbVar8 >> 2,3);
          FUN_08001ea4((int)piVar2 + *piVar2 + (0x1d - (uVar5 & 0xff)) * 0x14,0x4000);
          uVar5 = FUN_08129198(*pbVar8 >> 2,3);
          FUN_08002208((int)piVar2 + *piVar2 + (0x1d - (uVar5 & 0xff)) * 0x14 + 0xc,0);
        }
        piVar4 = DAT_08015380;
        iVar3 = DAT_08015300;
        piVar2 = DAT_080152dc;
        if ((*puVar9 >> 8 == 9) && ((*puVar9 & 0xff) == 4)) {
          pbVar8 = (byte *)(iVar1 + DAT_080152fc);
          uVar5 = (uint)*pbVar8;
          if (uVar5 < 0x60) {
            FUN_08001ea4(*DAT_08015380 + DAT_08015384,0x4000);
            FUN_08002208(*piVar4 + DAT_08015388,0);
          }
          else {
            iVar6 = FUN_08128fb8(uVar5 - 0x60,3);
            iVar1 = DAT_08015304;
            FUN_08001ea4(*piVar2 + (uint)*(byte *)(iVar6 + iVar3) * 0x14 + DAT_08015304,0x4000);
            iVar6 = FUN_08128fb8(*pbVar8 - 0x60,3);
            FUN_08002208(*piVar2 + (uint)*(byte *)(iVar6 + iVar3) * 0x14 + iVar1 + 0xc,0);
          }
          iVar1 = DAT_0801538c;
          piVar2 = DAT_08015380;
          puVar7 = (undefined1 *)(DAT_08015390 + DAT_08015394);
          uVar5 = FUN_08129120(*puVar7,3);
          iVar3 = DAT_08015398;
          FUN_08001ea4(*piVar2 + (uint)*(byte *)((uVar5 & 0xff) + iVar1) * 0x14 + DAT_08015398,
                       0x4000);
          uVar5 = FUN_08129120(*puVar7,3);
          FUN_08002208(*piVar2 + (uint)*(byte *)((uVar5 & 0xff) + iVar1) * 0x14 + iVar3 + 0xc,0);
        }
      }
    }
  }
  else {
    if ((*(ushort *)(DAT_080152d0 + DAT_0801549c) >> 8 == 9) &&
       ((*(ushort *)(DAT_080152d0 + DAT_0801549c) & 0xff) == 0)) {
      FUN_08001ea4(*DAT_080154a0 + DAT_080154a4,0x4000);
      FUN_08002208(*piVar4 + DAT_080154a8,0);
    }
    piVar2 = DAT_080154a0;
    puVar9 = (ushort *)(DAT_080154ac + DAT_080154b0);
    if (*puVar9 >> 8 == 9) {
      if ((*puVar9 & 0xff) == 2) {
        FUN_08001ea4(*DAT_080154a0 + DAT_080154b4,0x4000);
        FUN_08002208(*piVar2 + DAT_080154b8,0);
        FUN_08001ea4(*piVar2 + DAT_080154bc,0x4000);
        FUN_08002208(*piVar2 + DAT_080154c0,0);
      }
      piVar2 = DAT_080154a0;
      if (*puVar9 >> 8 == 9) {
        if ((*puVar9 & 0xff) == 1) {
          FUN_08001ea4(*DAT_080154a0 + DAT_080154c4,0x4000);
          FUN_08002208(*piVar2 + DAT_080154c8,0);
        }
        piVar2 = DAT_080154a0;
        if ((*puVar9 >> 8 == 9) && ((*puVar9 & 0xff) == 4)) {
          FUN_08001ea4(*DAT_080154a0 + DAT_080154cc,0x4000);
          FUN_08002208(*piVar2 + DAT_080154d0,0);
          FUN_08001ea4(*piVar2 + DAT_080154d4,0x4000);
          FUN_08002208(*piVar2 + DAT_080154d8,0);
        }
      }
    }
  }
  return in_lr;
}


