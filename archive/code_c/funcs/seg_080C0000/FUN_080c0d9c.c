// undefined FUN_080c0d9c(void)
// entry 0x80c0d9c


undefined8 FUN_080c0d9c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c0de4);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c0de8;
    *(undefined1 *)(iVar2 + 9) = 0xc;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x30);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 1;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar2);
}


