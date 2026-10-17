// undefined FUN_0808a23c(void)
// entry 0x808a23c


longlong FUN_0808a23c(int param_1)

{
  short sVar1;
  uint in_lr;
  
  if ((0 < *(int *)(param_1 + 0x60)) &&
     (sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40),
     sVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 8;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return (ulonglong)in_lr << 0x20;
}


