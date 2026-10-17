// undefined FUN_0808754c(void)
// entry 0x808754c


undefined4 FUN_0808754c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080875d4);
    FUN_0801cf00(param_1,0x1d00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (((*(int *)(*DAT_080875d8 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) &&
     ((*(int *)(*DAT_080875d8 + 0x58) - *(int *)(param_1 + 0x58)) + 0xa000U < 0x14001)) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


