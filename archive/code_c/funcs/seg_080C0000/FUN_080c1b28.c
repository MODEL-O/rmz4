// undefined FUN_080c1b28(void)
// entry 0x80c1b28


undefined4 FUN_080c1b28(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c1b70);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c1b74;
    *(undefined1 *)(iVar2 + 9) = 0xe;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x38);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 3;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return in_lr;
}


