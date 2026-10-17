// undefined FUN_08047088(void)
// entry 0x8047088


undefined8 FUN_08047088(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080470e0);
  iVar1 = DAT_080470e4;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 9) = 0x1b;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x6c);
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    *(undefined2 *)(iVar2 + 0x20) = *DAT_080470e8;
    *(undefined1 *)(iVar2 + 0x22) = *DAT_080470ec;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 1;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar2);
}


