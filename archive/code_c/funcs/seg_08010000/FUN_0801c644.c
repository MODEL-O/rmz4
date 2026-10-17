// undefined FUN_0801c644(void)
// entry 0x801c644


undefined4 FUN_0801c644(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 in_lr;
  
  piVar1 = DAT_0801c698;
  puVar4 = (undefined1 *)(DAT_0801c69c + DAT_0801c6a0);
  uVar3 = FUN_08129120(*puVar4,9);
  iVar2 = DAT_0801c6a4;
  FUN_08001ea4(*piVar1 + (uVar3 & 0xff) * 0x14 + DAT_0801c6a4,0x4000);
  uVar3 = FUN_08129120(*puVar4,9);
  FUN_08002208(*piVar1 + (uVar3 & 0xff) * 0x14 + iVar2 + 0xc,0);
  return in_lr;
}


