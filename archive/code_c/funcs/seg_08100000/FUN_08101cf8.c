// undefined FUN_08101cf8(void)
// entry 0x8101cf8


undefined8 FUN_08101cf8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_08101d4c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar1 = DAT_08101d50;
    *(undefined1 *)(iVar2 + 9) = 0x40;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x100);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined4 *)(iVar2 + 0x58) = 0;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


