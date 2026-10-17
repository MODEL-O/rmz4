// undefined FUN_0800e934(void)
// entry 0x800e934


void FUN_0800e934(void)

{
  int iVar1;
  int iVar2;
  iVar1 = 0x02000ab0;
  *(undefined1 *)(0x02000ab0 + 0x0002d028) = 0;
  iVar2 = 0x0002d029;
  *(undefined1 *)(iVar1 + 0x0002d029) = 0;
  *(undefined1 *)(iVar1 + iVar2 + -5) = 0;
  *(undefined4 *)(iVar1 + iVar2 + 7) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 5) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 6) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0xb) = 0;
  if ((*(byte *)(iVar1 + 0x0002c010) & 0xf) == 2) {
    FUN_080074c0(3,0x15,0x5b);
    FUN_080074c0(3,0x16,0x5c);
  }
  return;
}


