// undefined FUN_08032f8c(void)
// entry 0x8032f8c


undefined4 FUN_08032f8c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x4f00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*DAT_08032fd4 == '\0') {
    if (*(short *)(DAT_08032fd8 + 0x1d0) != 6) {
      uVar1 = FUN_0800864c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar1;
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return in_lr;
}


