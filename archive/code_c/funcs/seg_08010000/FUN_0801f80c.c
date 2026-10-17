// undefined FUN_0801f80c(void)
// entry 0x801f80c


undefined4 FUN_0801f80c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_0801f868;
  if (((*(ushort *)(DAT_0801f86c + 4) & 8) != 0) && ((*(ushort *)(DAT_0801f870 + 8) & 0x80) != 0)) {
    if (*(char *)(DAT_0801f870 + 3) != -1) {
      *(char *)(DAT_0801f870 + 2) = *(char *)(DAT_0801f870 + 3);
    }
    FUN_0803830c(*(undefined4 *)(iVar1 + DAT_0801f874),iVar1 + DAT_0801f878);
    iVar3 = DAT_0801f880;
    iVar2 = DAT_0801f87c;
    *(undefined1 *)(DAT_0801f87c + DAT_0801f880) = 0;
    *(undefined1 *)(iVar2 + iVar3 + -1) = 0;
    *(undefined1 *)(iVar2 + 0x400) = 0;
    FUN_081126ac(iVar1,0xf00);
  }
  return in_lr;
}


