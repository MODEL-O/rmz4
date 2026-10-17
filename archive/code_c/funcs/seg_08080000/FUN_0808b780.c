// undefined FUN_0808b780(void)
// entry 0x808b780


undefined4 FUN_0808b780(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  iVar1 = FUN_0808bcb8(param_1);
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


