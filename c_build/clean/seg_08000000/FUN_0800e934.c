// undefined FUN_0800e934(void)
// entry 0x800e934


void FUN_0800e934(void)

{
  int iVar1;
  int iVar2;
  iVar1 = DAT_0800e98c;
  *(undefined1 *)(DAT_0800e98c + DAT_0800e990) = 0;
  iVar2 = DAT_0800e994;
  *(undefined1 *)(iVar1 + DAT_0800e994) = 0;
  *(undefined1 *)(iVar1 + iVar2 + -5) = 0;
  *(undefined4 *)(iVar1 + iVar2 + 7) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 5) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 6) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0xb) = 0;
  if ((*(byte *)(iVar1 + DAT_0800e998) & 0xf) == 2) {
    FUN_080074c0(3,0x15,0x5b);
    FUN_080074c0(3,0x16,0x5c);
  }
  return;
}


