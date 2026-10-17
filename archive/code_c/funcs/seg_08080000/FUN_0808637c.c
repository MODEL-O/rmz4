// undefined FUN_0808637c(void)
// entry 0x808637c


undefined4 FUN_0808637c(int param_1)

{
  undefined4 in_lr;
  
  if ((0x1e000 < (*(int *)(param_1 + 100) - *(int *)(*DAT_080863bc + 0x54)) + 0xf000U) ||
     (0x14000 < (*(int *)(param_1 + 0x68) - *(int *)(*DAT_080863bc + 0x58)) + 0xc400U)) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


