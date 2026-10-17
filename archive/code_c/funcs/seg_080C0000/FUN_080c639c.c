// undefined FUN_080c639c(void)
// entry 0x80c639c


undefined4 FUN_080c639c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c63e0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c63e4;
    *(undefined1 *)(iVar2 + 9) = 0x1a;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x68);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 3;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
  }
  return in_lr;
}


