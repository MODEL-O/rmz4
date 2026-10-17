// undefined FUN_080dec78(void)
// entry 0x80dec78


undefined4 FUN_080dec78(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080decc0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080decc4;
    *(undefined1 *)(iVar2 + 9) = 0x33;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xcc);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined4 *)(iVar2 + 0x2c) = param_2;
    *(undefined1 *)(iVar2 + 0x10) = 2;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return in_lr;
}


