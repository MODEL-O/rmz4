// undefined FUN_080acb90(void)
// entry 0x80acb90


undefined8 FUN_080acb90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080acbfc);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_080acc00;
    *(undefined1 *)(iVar2 + 9) = 0x4c;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x130);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    *(undefined1 *)(iVar2 + 0xb6) = 0;
    *(undefined1 *)(iVar2 + 0xb8) = 1;
    *(undefined1 *)(iVar2 + 0xb9) = 0;
    *(undefined1 *)(iVar2 + 0xbc) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


