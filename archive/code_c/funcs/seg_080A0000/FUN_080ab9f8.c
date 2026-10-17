// undefined FUN_080ab9f8(void)
// entry 0x80ab9f8


undefined8 FUN_080ab9f8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080aba44);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_080aba48;
    *(undefined1 *)(iVar2 + 9) = 0x4a;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x128);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar2);
}


