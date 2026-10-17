// undefined FUN_08011fb0(void)
// entry 0x8011fb0


undefined4 FUN_08011fb0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  piVar2 = DAT_080120c0;
  iVar1 = DAT_080120b4;
  if ((((*(byte *)(DAT_080120b4 + DAT_080120b8) & 0xf) == 3) &&
      (*(ushort *)(DAT_080120b4 + DAT_080120bc) >> 8 == 6)) &&
     ((*(ushort *)(DAT_080120b4 + DAT_080120bc) & 0xff) == 1)) {
    puVar4 = (undefined1 *)(DAT_080120b4 + DAT_080120c4);
    uVar3 = FUN_08129120(*puVar4,3);
    iVar5 = DAT_080120c8;
    FUN_08001ea4(*piVar2 + (uVar3 & 0xff) * 0x14 + DAT_080120c8,0x4000);
    uVar3 = FUN_08129120(*puVar4,3);
    FUN_08002208(*piVar2 + (uVar3 & 0xff) * 0x14 + iVar5 + 0xc,0);
    uVar3 = FUN_08129120(*puVar4,3);
    iVar5 = iVar5 + 0x78;
    FUN_08001ea4(*piVar2 + (uVar3 & 0xff) * 0x14 + iVar5,0x4000);
    uVar3 = FUN_08129120(*puVar4,3);
    FUN_08002208(*piVar2 + (uVar3 & 0xff) * 0x14 + iVar5 + 0xc,0);
    puVar4 = (undefined1 *)(iVar1 + DAT_080120cc);
    uVar3 = FUN_08129120(*puVar4,6);
    iVar1 = DAT_080120d0;
    FUN_08001ea4(*piVar2 + (uVar3 & 0xff) * 0x14 + DAT_080120d0,0x4000);
    uVar3 = FUN_08129120(*puVar4,6);
    FUN_08002208(*piVar2 + (uVar3 & 0xff) * 0x14 + iVar1 + 0xc,0);
  }
  return in_lr;
}


