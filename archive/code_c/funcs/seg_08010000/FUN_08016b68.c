// undefined FUN_08016b68(void)
// entry 0x8016b68


undefined4 FUN_08016b68(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_08016be4;
  *(undefined1 *)(DAT_08016be4 + DAT_08016be8) = 0x80;
  iVar2 = DAT_08016bec;
  *(undefined1 *)(iVar1 + DAT_08016bec) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 4) = 0;
  *(undefined1 *)(iVar1 + DAT_08016bf0) = 0x10;
  *(undefined1 *)(iVar1 + DAT_08016bf4) = 0;
  *(undefined2 *)(iVar1 + DAT_08016bf8) = 0x78;
  if ((*(byte *)(DAT_08016bfc + 6) & 0x40) != 0) {
    FUN_080074c0(0x18,7,0x84);
    FUN_080074c0(0x19,7,0x85);
    FUN_080074c0(0x1c,7,0x86);
    FUN_080074c0(0x1d,7,0x87);
    FUN_080074c0(0x1e,7,0x88);
    FUN_080074c0(0x1f,7,0x89);
  }
  return in_lr;
}


