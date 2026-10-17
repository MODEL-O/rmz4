// undefined FUN_08009954(void)
// entry 0x8009954


void FUN_08009954(void)

{
  int iVar1;
  int iVar2;
  iVar2 = 0x0002d024;
  iVar1 = 0x02000ab0;
  *(undefined1 *)(0x02000ab0 + 0x0002d024) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 2) = 0;
  *(undefined4 *)(iVar1 + iVar2 + 4) = 0;
  *(undefined4 *)(iVar1 + 0x0002d02c) = 0xff000;
  *(undefined4 *)(iVar1 + 0x0002d030) = 0x12000;
  *(undefined1 *)(iVar1 + 0x0002d025) = 0;
  *(undefined2 *)(iVar1 + 0x0002d036) = 0;
  if ((*(byte *)(0x0202e8b0 + 4) & 0x20) != 0) {
    FUN_080074c0(0x10,1,0x30);
  }
  return;
}


