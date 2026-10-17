// undefined FUN_080eba78(void)
// entry 0x80eba78


undefined4 FUN_080eba78(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080ebae8);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar1 = DAT_080ebaec;
    *(undefined1 *)(iVar2 + 9) = 5;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x14);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(int *)(iVar2 + 0x28) = param_1;
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0xbd) = (char)*(undefined2 *)(param_1 + 0xa4);
    *(byte *)(iVar2 + 0xbe) = *(byte *)(param_1 + 10) >> 4 & 1;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return in_lr;
}


