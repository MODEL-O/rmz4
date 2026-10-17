// undefined FUN_08015f88(void)
// entry 0x8015f88


undefined4 FUN_08015f88(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_08016030;
  piVar1 = DAT_08016028;
  if ((*(ushort *)(DAT_08016020 + DAT_08016024) >> 8 == 10) &&
     ((*(ushort *)(DAT_08016020 + DAT_08016024) & 0xff) == 0)) {
    pbVar3 = (byte *)(DAT_08016020 + DAT_0801602c);
    FUN_08001ea4(*DAT_08016028 + (uint)(*pbVar3 >> 2) * 0x14 + DAT_08016030,0x4000);
    FUN_08002208(*piVar1 + (uint)(*pbVar3 >> 2) * 0x14 + iVar2 + 0xc,0);
  }
  piVar1 = DAT_08016028;
  if (((*(ushort *)(DAT_08016020 + DAT_08016024) >> 8 == 10) &&
      ((*(ushort *)(DAT_08016020 + DAT_08016024) & 0xff) == 2)) &&
     ((*(byte *)(DAT_08016020 + DAT_08016034) & 0xf) == 2)) {
    FUN_08001ea4(*DAT_08016028 + DAT_08016038,0x4000);
    FUN_08002208(*piVar1 + DAT_0801603c,0);
  }
  return in_lr;
}


