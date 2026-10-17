// undefined FUN_08084b58(void)
// entry 0x8084b58


undefined4 FUN_08084b58(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08084bcc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_08084bd0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  if (*(byte *)(param_1 + 0x10) < 2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_08084c1c,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_08084c20;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_08084bd4,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*DAT_08084bd8 == 0xe) {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined1 *)(param_1 + 0x25) = 0x14;
  FUN_08084c24(param_1);
  return in_lr;
}


