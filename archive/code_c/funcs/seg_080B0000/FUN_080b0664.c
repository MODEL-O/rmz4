// undefined FUN_080b0664(void)
// entry 0x80b0664


undefined4 FUN_080b0664(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  *(undefined1 *)(param_1 + 0x11) = 2;
  FUN_0801cf00(param_1,0xb200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080b06b8,param_1 + 0x54,0xc);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b06bc;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


