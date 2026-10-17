// undefined FUN_0808d5d8(void)
// entry 0x808d5d8


undefined4 FUN_0808d5d8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0808d618;
  FUN_08005784(param_1 + 0x74,DAT_0808d618);
  iVar2 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xbc));
  if (iVar2 != 0) {
    FUN_08005784(param_1 + 0x74,iVar1 + -0xc0);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      FUN_0808db14(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


