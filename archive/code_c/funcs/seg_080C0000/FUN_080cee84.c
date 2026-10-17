// undefined FUN_080cee84(void)
// entry 0x80cee84


undefined4 FUN_080cee84(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080ceed4);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080ceed8;
    *(undefined1 *)(iVar2 + 9) = 0x38;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xe0);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(int *)(iVar2 + 0x28) = param_1;
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return in_lr;
}


