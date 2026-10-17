// undefined FUN_080c1a2c(void)
// entry 0x80c1a2c


undefined4 FUN_080c1a2c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c1a70);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c1a74;
    *(undefined1 *)(iVar2 + 9) = 0xe;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x38);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
  }
  return in_lr;
}


