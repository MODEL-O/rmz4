// undefined FUN_080920fc(void)
// entry 0x80920fc


undefined4 FUN_080920fc(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_080054cc(*DAT_08092150);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_08092154;
    *(undefined1 *)(iVar2 + 9) = 0x17;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x5c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined1 *)(iVar2 + 0x10) = 1;
    *(undefined1 *)(iVar2 + 0x12) = param_3;
    *(undefined4 *)(iVar2 + 0x54) = param_1;
    *(undefined4 *)(iVar2 + 0x58) = param_2;
  }
  return in_lr;
}


