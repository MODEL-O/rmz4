// undefined FUN_080f7f1c(void)
// entry 0x80f7f1c


undefined8 FUN_080f7f1c(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080f7f6c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar1 = DAT_080f7f70;
    *(undefined1 *)(iVar2 + 9) = 0x1d;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x74);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined1 *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar2);
}


