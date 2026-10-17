// undefined FUN_080d6898(void)
// entry 0x80d6898


undefined4 FUN_080d6898(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d68dc);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d68e0;
    *(undefined1 *)(iVar2 + 9) = 0x15;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x54);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined1 *)(iVar2 + 0x10) = 3;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    *(undefined4 *)(iVar2 + 0x54) = param_1;
    *(undefined4 *)(iVar2 + 0x58) = param_2;
  }
  return in_lr;
}


