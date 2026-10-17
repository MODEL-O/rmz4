// undefined FUN_0808444c(void)
// entry 0x808444c


undefined4 FUN_0808444c(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x1c00);
    FUN_08005784(param_1 + 0x74,DAT_080844d4);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar2 + 0xa00);
  if (sVar1 != 0) {
    iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2 + DAT_080844d8;
  }
  iVar2 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xb4));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    FUN_08005784(param_1 + 0x74,DAT_080844dc);
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 9;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


