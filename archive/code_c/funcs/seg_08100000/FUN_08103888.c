// undefined FUN_08103888(void)
// entry 0x8103888


undefined4 FUN_08103888(undefined1 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_081038f4);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar1 = DAT_081038f8;
    *(undefined1 *)(iVar2 + 9) = 0x46;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x118);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(int *)(iVar2 + 0x54) = param_2 + 0x1800;
    *(int *)(iVar2 + 0x58) = param_3 + 0x1800;
    *(undefined1 *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 0x11) = 1;
    FUN_0801fe64(5,iVar2 + 0x54);
  }
  return in_lr;
}


