// undefined FUN_080d0ff4(void)
// entry 0x80d0ff4


undefined4 FUN_080d0ff4(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d1038);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d103c;
    *(undefined1 *)(iVar2 + 9) = 1;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 4);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined1 *)(iVar2 + 0x10) = param_3;
    *(undefined4 *)(iVar2 + 0x54) = param_1;
    *(undefined4 *)(iVar2 + 0x58) = param_2;
  }
  return in_lr;
}


