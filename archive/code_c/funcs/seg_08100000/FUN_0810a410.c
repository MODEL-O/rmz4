// undefined FUN_0810a410(void)
// entry 0x810a410


undefined8 FUN_0810a410(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0810a458);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    iVar1 = DAT_0810a45c;
    *(undefined1 *)(iVar2 + 9) = 1;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 4);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = 0xff;
  }
  return CONCAT44(in_lr,iVar2);
}


