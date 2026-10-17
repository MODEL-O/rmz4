// undefined FUN_0808eecc(void)
// entry 0x808eecc


undefined4 FUN_0808eecc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xb8) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0808ef78) * 4 + DAT_0808ef74)) * 0x18 + DAT_0808ef7c);
  if ((*(char *)(param_1 + 0xbb) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    FUN_0808fc18(param_1);
    *(char *)(param_1 + 0xbb) = '\0';
  }
  FUN_0808faf4(param_1);
  iVar1 = FUN_08128fb8(*(undefined4 *)(param_1 + 0x5c),-*(int *)(param_1 + 100));
  if ((iVar1 == -0x11 || -iVar1 < 0x11) && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


