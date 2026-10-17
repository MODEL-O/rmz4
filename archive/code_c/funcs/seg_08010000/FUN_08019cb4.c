// undefined FUN_08019cb4(void)
// entry 0x8019cb4


undefined4 FUN_08019cb4(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 in_lr;
  
  piVar1 = DAT_08019d24;
  if ((*(ushort *)(DAT_08019d1c + DAT_08019d20) >> 8 == 0xe) &&
     ((*(ushort *)(DAT_08019d1c + DAT_08019d20) & 0xff) == 6)) {
    puVar4 = (undefined1 *)(DAT_08019d1c + DAT_08019d28);
    uVar3 = FUN_08129120(*puVar4,6);
    iVar2 = DAT_08019d2c;
    FUN_08001ea4(*piVar1 + (uVar3 & 0xff) * 0x14 + DAT_08019d2c,0x4000);
    uVar3 = FUN_08129120(*puVar4,6);
    FUN_08002208(*piVar1 + (uVar3 & 0xff) * 0x14 + iVar2 + 0xc,0);
  }
  return in_lr;
}


