// undefined FUN_0810c778(void)
// entry 0x810c778


undefined4 FUN_0810c778(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0810c7c0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    iVar1 = DAT_0810c7c4;
    *(undefined1 *)(iVar2 + 9) = 10;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x28);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return in_lr;
}


