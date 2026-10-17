// undefined FUN_0804bfb4(void)
// entry 0x804bfb4


undefined8 FUN_0804bfb4(undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0804c014);
  iVar1 = DAT_0804c018;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 9) = 0x2c;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xb0);
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    *(undefined2 *)(iVar2 + 0x20) = *DAT_0804c01c;
    *(undefined1 *)(iVar2 + 0x22) = *DAT_0804c020;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 1;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
    *(undefined1 *)(iVar2 + 0x12) = param_3;
  }
  return CONCAT44(in_lr,iVar2);
}


