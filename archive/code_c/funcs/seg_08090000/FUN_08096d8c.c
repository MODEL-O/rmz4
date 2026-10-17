// undefined FUN_08096d8c(void)
// entry 0x8096d8c


undefined4 FUN_08096d8c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_08096dd8);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_08096ddc;
    *(undefined1 *)(iVar2 + 9) = 0x1e;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x78);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 1;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return in_lr;
}


