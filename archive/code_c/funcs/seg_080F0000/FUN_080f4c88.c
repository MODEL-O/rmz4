// undefined FUN_080f4c88(void)
// entry 0x80f4c88


undefined4 FUN_080f4c88(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cd28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080f4ce0,param_1 + 0x54,0x1c);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080f4ce4;
  FUN_0801cf00(param_1,DAT_080f4ce8);
  *(undefined1 *)(param_1 + 0x25) = 0xf;
  *(undefined1 *)(param_1 + 0xb5) = 0x80;
  *(undefined1 *)(param_1 + 0x24) = 0x80;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  return in_lr;
}


