// undefined FUN_080c3090(void)
// entry 0x80c3090


undefined8 FUN_080c3090(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c30e0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c30e4;
    *(undefined1 *)(iVar2 + 9) = 0x11;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x44);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 1;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
    *(undefined1 *)(iVar2 + 0xb4) = param_3;
  }
  return CONCAT44(in_lr,iVar2);
}


