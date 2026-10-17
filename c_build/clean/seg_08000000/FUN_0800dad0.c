// undefined FUN_0800dad0(void)
// entry 0x800dad0


void FUN_0800dad0(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  iVar2 = DAT_0800db38;
  piVar1 = DAT_0800db30;
  if ((*(ushort *)(DAT_0800db28 + DAT_0800db2c) >> 8 == 3) &&
     ((*(ushort *)(DAT_0800db28 + DAT_0800db2c) & 0xff) == 3)) {
    pbVar3 = (byte *)(DAT_0800db28 + DAT_0800db34);
    FUN_08001ea4(*(int *)DAT_0800db30 + (uint)(*pbVar3 >> 1) * 0x14 + DAT_0800db38,0x4000);
    FUN_08002208(*piVar1 + (uint)(*pbVar3 >> 1) * 0x14 + iVar2 + 0xc,0);
  }
  return;
}


