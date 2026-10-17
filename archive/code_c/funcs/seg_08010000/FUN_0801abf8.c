// undefined FUN_0801abf8(void)
// entry 0x801abf8


undefined4 FUN_0801abf8(void)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined4 in_lr;
  
  iVar2 = DAT_0801acc0;
  piVar1 = DAT_0801acb8;
  if ((*(ushort *)(DAT_0801acb0 + DAT_0801acb4) >> 8 == 0xf) &&
     ((*(ushort *)(DAT_0801acb0 + DAT_0801acb4) & 0xff) == 0)) {
    pbVar5 = (byte *)(DAT_0801acb0 + DAT_0801acbc);
    FUN_08001ea4(*DAT_0801acb8 + (uint)(*pbVar5 >> 2) * 0x14 + DAT_0801acc0,0x4000);
    FUN_08002208(*piVar1 + (uint)(*pbVar5 >> 2) * 0x14 + iVar2 + 0xc,0);
  }
  piVar1 = DAT_0801acb8;
  if ((*(ushort *)(DAT_0801acb0 + DAT_0801acc4) >> 8 == 0xf) &&
     ((uVar3 = *(ushort *)(DAT_0801acb0 + DAT_0801acc4) & 0xff, uVar3 == 3 || (uVar3 == 6)))) {
    puVar6 = (undefined1 *)(DAT_0801acb0 + DAT_0801acc8);
    uVar4 = FUN_08129120(*puVar6,5);
    iVar2 = DAT_0801accc;
    FUN_08001ea4(*piVar1 + (uVar4 & 0xff) * 0x14 + DAT_0801accc,0x4000);
    uVar4 = FUN_08129120(*puVar6,5);
    FUN_08002208(*piVar1 + (uVar4 & 0xff) * 0x14 + iVar2 + 0xc,0);
  }
  return in_lr;
}


