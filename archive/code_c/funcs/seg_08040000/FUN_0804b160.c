// undefined FUN_0804b160(void)
// entry 0x804b160


undefined4 FUN_0804b160(undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0804b1b8);
  iVar1 = DAT_0804b1bc;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 9) = 0x28;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xa0);
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    *(undefined2 *)(iVar2 + 0x20) = *DAT_0804b1c0;
    *(undefined1 *)(iVar2 + 0x22) = *DAT_0804b1c4;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return in_lr;
}


