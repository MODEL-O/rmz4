// undefined FUN_0800cb48(void)
// entry 0x800cb48


undefined4 FUN_0800cb48(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 in_lr;
  
  piVar1 = DAT_0800cbb8;
  if ((*(ushort *)(DAT_0800cbb0 + DAT_0800cbb4) >> 8 == 2) &&
     ((*(ushort *)(DAT_0800cbb0 + DAT_0800cbb4) & 0xff) == 3)) {
    puVar4 = (undefined1 *)(DAT_0800cbb0 + DAT_0800cbbc);
    uVar3 = FUN_08129120(*puVar4,3);
    iVar2 = DAT_0800cbc0;
    FUN_08001ea4(*piVar1 + (uVar3 & 0xff) * 0x14 + DAT_0800cbc0,0x4000);
    uVar3 = FUN_08129120(*puVar4,3);
    FUN_08002208(*piVar1 + (uVar3 & 0xff) * 0x14 + iVar2 + 0xc,0);
  }
  return in_lr;
}


