// undefined FUN_080b35b0(void)
// entry 0x80b35b0


undefined4 FUN_080b35b0(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined1 *)(param_1 + 0x11) = 0x3c;
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + -1;
  }
  else if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(byte *)(DAT_080b3610 + DAT_080b3614) =
         (byte)(1 << *(sbyte *)(param_1 + 0x10)) | *(byte *)(DAT_080b3610 + DAT_080b3614);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_08002b10(DAT_080b3618);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080b361c,param_1 + 0x54,(int)*(short *)(param_1 + 0xa4));
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080b3620;
  }
  FUN_080b3700(param_1);
  return in_lr;
}


