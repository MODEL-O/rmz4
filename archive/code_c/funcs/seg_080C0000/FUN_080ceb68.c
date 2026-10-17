// undefined FUN_080ceb68(void)
// entry 0x80ceb68


undefined4 FUN_080ceb68(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb9) == '\0') {
    iVar2 = *(int *)(param_1 + 0xb4);
    iVar1 = *(int *)(param_1 + 0x58) - iVar2;
    if ((iVar1 < 0) && (iVar1 = iVar2 - *(int *)(param_1 + 0x58), iVar1 < 0)) {
      iVar1 = iVar1 + 0x1f;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    iVar1 = (iVar1 >> 5) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar1 >> 8;
    if (0x700 < iVar1 >> 8) {
      *(undefined4 *)(param_1 + 0x60) = DAT_080cebd0;
    }
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 8) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined1 *)(param_1 + 0xb9) = 1;
    }
    else {
      FUN_08002b10(0x16c);
    }
    *(int *)(param_1 + 0xb4) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(param_1 + 0x5c) * -0x100;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar1 >> 8;
    }
  }
  return in_lr;
}


