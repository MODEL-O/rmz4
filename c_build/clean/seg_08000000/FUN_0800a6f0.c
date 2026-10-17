// undefined FUN_0800a6f0(void)
// entry 0x800a6f0


void FUN_0800a6f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  iVar2 = DAT_0800a838;
  piVar1 = DAT_0800a834;
  if ((((*(ushort *)(DAT_0800a824 + DAT_0800a828) >> 8 == 1) &&
       ((*(ushort *)(DAT_0800a824 + DAT_0800a828) & 0xff) == 0)) &&
      (*(ushort *)(DAT_0800a824 + DAT_0800a82c) >> 8 == 1)) &&
     (((*(ushort *)(DAT_0800a824 + DAT_0800a82c) & 0xff) == 1 &&
      (*(char *)(DAT_0800a824 + DAT_0800a830) != '\x02')))) {
    pbVar6 = (byte *)(DAT_0800a824 + DAT_0800a83c);
    FUN_08001ea4((int)DAT_0800a834 +
                 *(int *)DAT_0800a834 + (uint)*(byte *)((uint)(*pbVar6 >> 1) + DAT_0800a838) * 0x14,0x4000)
    ;
    FUN_08002208((int)piVar1 + *piVar1 + (uint)*(byte *)((uint)(*pbVar6 >> 1) + iVar2) * 0x14 + 0xc,
                 0);
    iVar5 = DAT_0800a840;
    FUN_08001ea4(*piVar1 + (uint)*(byte *)((uint)(*pbVar6 >> 1) + iVar2) * 0x14 + DAT_0800a840,
                 0x4000);
    FUN_08002208(*piVar1 + (uint)*(byte *)((uint)(*pbVar6 >> 1) + iVar2) * 0x14 + iVar5 + 0xc,0);
  }
  piVar3 = DAT_0800a898;
  piVar1 = DAT_0800a834;
  if (((*(ushort *)(DAT_0800a824 + DAT_0800a828) >> 8 == 1) &&
      ((*(ushort *)(DAT_0800a824 + DAT_0800a828) & 0xff) == 3)) &&
     ((*(ushort *)(DAT_0800a824 + DAT_0800a82c) >> 8 == 1 &&
      ((*(ushort *)(DAT_0800a824 + DAT_0800a82c) & 0xff) == 2)))) {
    pbVar6 = (byte *)(DAT_0800a824 + DAT_0800a844);
    if (*pbVar6 < 0x14) {
      uVar4 = FUN_08129120(*pbVar6,5);
      iVar2 = DAT_0800a848;
      FUN_08001ea4(*piVar1 + (uVar4 & 0xff) * 0x14 + DAT_0800a848,0x4000);
      uVar4 = FUN_08129120(*pbVar6,5);
      FUN_08002208(*piVar1 + (uVar4 & 0xff) * 0x14 + iVar2 + 0xc,0);
    }
    else {
      iVar5 = FUN_08128fb8(*pbVar6 - 0x14,3);
      iVar2 = DAT_0800a89c;
      FUN_08001ea4(*piVar3 + iVar5 * 0x14 + DAT_0800a89c,0x4000);
      iVar5 = FUN_08128fb8(*pbVar6 - 0x14,3);
      FUN_08002208(*piVar3 + iVar5 * 0x14 + iVar2 + 0xc,0);
    }
  }
  return;
}


