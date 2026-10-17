// undefined FUN_0808b1dc(void)
// entry 0x808b1dc


longlong FUN_0808b1dc(int param_1)

{
  int iVar1;
  uint in_lr;
  
  if (((*(char *)(param_1 + 0xc1) == '\0') &&
      (iVar1 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
      0x440 < iVar1 - *(int *)(param_1 + 0x58))) &&
     (*(int *)(param_1 + 0x58) = iVar1, 0x40 < *(int *)(param_1 + 0x60))) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return (ulonglong)in_lr << 0x20;
}


