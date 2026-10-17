// undefined FUN_0808657c(void)
// entry 0x808657c


undefined4 FUN_0808657c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080865b8);
    FUN_08086a14(param_1,4);
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_08086a48(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  return in_lr;
}


