// undefined FUN_080dec30(void)
// entry 0x80dec30


undefined4 FUN_080dec30(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080dec70);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080dec74;
    *(undefined1 *)(iVar2 + 9) = 0x33;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xcc);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 1;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return in_lr;
}


