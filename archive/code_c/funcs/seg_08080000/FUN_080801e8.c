// undefined FUN_080801e8(void)
// entry 0x80801e8


undefined4 FUN_080801e8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xc2) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xb8) != '\0') {
    iVar1 = *(int *)(param_1 + 0x54) - *(int *)(*DAT_0808022c + 0x54);
    if (iVar1 < 0) {
      if (DAT_0808026c < *(int *)(*DAT_0808022c + 0x54) - *(int *)(param_1 + 0x54)) {
        return in_lr;
      }
    }
    else if (DAT_08080230 < iVar1) {
      return in_lr;
    }
    *(char *)(param_1 + 0xb8) = '\0';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  FUN_080806b0(param_1);
  return in_lr;
}


