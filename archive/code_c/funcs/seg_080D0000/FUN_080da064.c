// undefined FUN_080da064(void)
// entry 0x80da064


undefined8 FUN_080da064(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080da0b0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080da0b4;
    *(undefined1 *)(iVar2 + 9) = 0x21;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x84);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 2;
  }
  return CONCAT44(in_lr,iVar2);
}


