// undefined FUN_0800cb48(void)
// entry 0x800cb48


void FUN_0800cb48(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  piVar1 = 0x08df2048;
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 2) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 3)) {
    puVar4 = (undefined1 *)(0x02000ab0 + 0x0002d02c);
    uVar3 = FUN_08129120(*puVar4,3);
    iVar2 = 0x08df2188;
    FUN_08001ea4(*piVar1 + (uVar3 & 0xff) * 0x14 + 0x08df2188,0x4000);
    uVar3 = FUN_08129120(*puVar4,3);
    FUN_08002208(*piVar1 + (uVar3 & 0xff) * 0x14 + iVar2 + 0xc,0);
  }
  return;
}


