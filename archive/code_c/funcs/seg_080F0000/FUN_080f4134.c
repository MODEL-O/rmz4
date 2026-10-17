// undefined FUN_080f4134(void)
// entry 0x80f4134


undefined4 FUN_080f4134(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cd28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080f4190,param_1 + 0x54,0x1c);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080f4194;
  FUN_0801cf00(param_1,DAT_080f4198);
  *(undefined1 *)(param_1 + 0x25) = 0xf;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0xb5);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  return in_lr;
}


