// undefined FUN_080d61d4(void)
// entry 0x80d61d4


undefined8 FUN_080d61d4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d6214);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d6218;
    *(undefined1 *)(iVar2 + 9) = 0x14;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x50);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar2);
}


