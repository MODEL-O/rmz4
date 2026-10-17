// undefined FUN_0810c5c8(void)
// entry 0x810c5c8


undefined8 FUN_0810c5c8(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0810c62c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    iVar1 = DAT_0810c630;
    *(undefined1 *)(iVar2 + 9) = 9;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x24);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined1 *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
    *(undefined1 *)(iVar2 + 0x74) = 0;
    *(undefined1 *)(iVar2 + 0x75) = 0x16;
    *(undefined2 *)(iVar2 + 0x7a) = 0x100;
    *(undefined2 *)(iVar2 + 0x78) = 0x100;
    *(undefined1 *)(iVar2 + 0x76) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


