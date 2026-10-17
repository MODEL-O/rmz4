// undefined FUN_08040184(void)
// entry 0x8040184


undefined4 FUN_08040184(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080401dc);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080401e0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080401e4;
  uVar1 = DAT_08040200;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar1 = 0x3c0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = DAT_08040204;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  *(undefined1 *)(param_1 + 0x12) = 0x3c;
  return in_lr;
}


