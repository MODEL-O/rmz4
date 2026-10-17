// undefined FUN_08009954(void)
// entry 0x8009954


void FUN_08009954(void)

{
  int iVar1;
  int iVar2;
  iVar2 = DAT_080099ac;
  iVar1 = DAT_080099a8;
  *(undefined1 *)(DAT_080099a8 + DAT_080099ac) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 2) = 0;
  *(undefined4 *)(iVar1 + iVar2 + 4) = 0;
  *(undefined4 *)(iVar1 + DAT_080099b0) = 0xff000;
  *(undefined4 *)(iVar1 + DAT_080099b4) = 0x12000;
  *(undefined1 *)(iVar1 + DAT_080099b8) = 0;
  *(undefined2 *)(iVar1 + DAT_080099bc) = 0;
  if ((*(byte *)(DAT_080099c0 + 4) & 0x20) != 0) {
    FUN_080074c0(0x10,1,0x30);
  }
  return;
}


