// undefined FUN_080dcd18(void)
// entry 0x80dcd18


undefined4 FUN_080dcd18(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080dcd60);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080dcd64;
    *(undefined1 *)(iVar2 + 9) = 0x2c;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xb0);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return in_lr;
}


