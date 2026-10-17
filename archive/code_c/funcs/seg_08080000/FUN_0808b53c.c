// undefined FUN_0808b53c(void)
// entry 0x808b53c


undefined4 FUN_0808b53c(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb9) = 0x60;
  FUN_0808bbc0(param_1,*(undefined1 *)(param_1 + 0xb8));
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)(DAT_0808b56c + 4));
  return in_lr;
}


