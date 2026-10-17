// undefined FUN_080d6784(void)
// entry 0x80d6784


undefined4 FUN_080d6784(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d67c4);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d67c8;
    *(undefined1 *)(iVar2 + 9) = 0x15;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x54);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x13) = param_2;
  }
  return in_lr;
}


