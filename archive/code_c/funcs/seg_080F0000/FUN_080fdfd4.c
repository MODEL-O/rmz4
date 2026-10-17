// undefined FUN_080fdfd4(void)
// entry 0x80fdfd4


undefined8 FUN_080fdfd4(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080fe020);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar1 = DAT_080fe024;
    *(undefined1 *)(iVar2 + 9) = 0x2f;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xbc);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


