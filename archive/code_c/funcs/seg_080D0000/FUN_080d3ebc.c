// undefined FUN_080d3ebc(void)
// entry 0x80d3ebc


undefined8 FUN_080d3ebc(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d3ed4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d3f04;
    *(undefined1 *)(iVar2 + 9) = 0xe;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x38);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined1 *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


