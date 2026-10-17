// undefined FUN_08083a78(void)
// entry 0x8083a78


undefined4 FUN_08083a78(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,DAT_08083ad4);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08083ad8,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  return in_lr;
}


