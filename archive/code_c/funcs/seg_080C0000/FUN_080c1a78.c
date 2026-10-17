// undefined FUN_080c1a78(void)
// entry 0x80c1a78


undefined4 FUN_080c1a78(undefined4 param_1,undefined4 param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c1acc);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c1ad0;
    *(undefined1 *)(iVar2 + 9) = 0xe;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x38);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x54) = param_1;
    *(undefined4 *)(iVar2 + 0x58) = param_2;
    *(undefined1 *)(iVar2 + 0x10) = 2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
    *(char *)(iVar2 + 0xbd) = param_4 + -1;
  }
  return in_lr;
}


