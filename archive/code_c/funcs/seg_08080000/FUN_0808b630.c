// undefined FUN_0808b630(void)
// entry 0x808b630


undefined4 FUN_0808b630(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_0808b6b4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0808b6bc) * 4 + DAT_0808b6b8)) * 0x18 + DAT_0808b6c0);
  FUN_0808bbd8(param_1);
  cVar1 = *(char *)(param_1 + 0xb9);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xb9) = cVar1 + -1;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


