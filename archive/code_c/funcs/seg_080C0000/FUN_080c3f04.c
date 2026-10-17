// undefined FUN_080c3f04(void)
// entry 0x80c3f04


undefined8 FUN_080c3f04(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c3f44);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c3f48;
    *(undefined1 *)(iVar2 + 9) = 0x15;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x54);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 1;
  }
  return CONCAT44(in_lr,iVar2);
}


