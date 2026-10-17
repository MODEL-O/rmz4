// undefined FUN_080c4bd4(void)
// entry 0x80c4bd4


undefined8 FUN_080c4bd4(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c4c18);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c4c1c;
    *(undefined1 *)(iVar2 + 9) = 0x17;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x5c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar2);
}


