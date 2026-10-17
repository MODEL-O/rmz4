// undefined FUN_0801b5bc(void)
// entry 0x801b5bc


undefined4 FUN_0801b5bc(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_0801b624;
  piVar1 = DAT_0801b61c;
  if ((*(ushort *)(DAT_0801b614 + DAT_0801b618) >> 8 == 0x10) &&
     ((*(ushort *)(DAT_0801b614 + DAT_0801b618) & 0xff) == 6)) {
    pbVar3 = (byte *)(DAT_0801b614 + DAT_0801b620);
    FUN_08001ea4(*DAT_0801b61c + (uint)(*pbVar3 >> 1) * 0x14 + DAT_0801b624,0x4000);
    FUN_08002208(*piVar1 + (uint)(*pbVar3 >> 1) * 0x14 + iVar2 + 0xc,0);
  }
  return in_lr;
}


