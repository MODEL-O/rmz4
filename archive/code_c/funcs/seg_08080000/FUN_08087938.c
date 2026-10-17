// undefined FUN_08087938(void)
// entry 0x8087938


undefined4 FUN_08087938(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb4) = 3;
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
      *(int *)(param_1 + 0x54) < *(int *)(*DAT_0808796c + 0x54)) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_0808798c));
  return in_lr;
}


