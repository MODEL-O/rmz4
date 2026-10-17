// undefined FUN_080ed734(void)
// entry 0x80ed734


undefined8 FUN_080ed734(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080ed78c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar1 = DAT_080ed790;
    *(undefined1 *)(iVar2 + 9) = 0xf;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x3c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(iVar2 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar2);
}


