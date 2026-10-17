// undefined FUN_080f46c0(void)
// entry 0x80f46c0


undefined4 FUN_080f46c0(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cd28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080f4730,param_1 + 0x54,0x1c);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080f4734;
  FUN_0801cf00(param_1,DAT_080f4738);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  *(undefined1 *)(param_1 + 0x25) = 0xf;
  *(undefined1 *)(param_1 + 0xb5) = 0xc0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  return in_lr;
}


