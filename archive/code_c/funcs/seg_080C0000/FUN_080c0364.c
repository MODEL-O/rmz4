// undefined FUN_080c0364(void)
// entry 0x80c0364


undefined8 FUN_080c0364(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c03b8);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c03bc;
    *(undefined1 *)(iVar2 + 9) = 0xb;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x2c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
    *(undefined1 *)(iVar2 + 0xb4) = param_4;
  }
  return CONCAT44(in_lr,iVar2);
}


