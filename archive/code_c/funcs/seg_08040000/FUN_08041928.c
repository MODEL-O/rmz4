// undefined FUN_08041928(void)
// entry 0x8041928


undefined4 FUN_08041928(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  FUN_0801cf00(param_1,DAT_08041988);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0804198c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08041990;
  FUN_08041778(uVar1,param_1,0);
  FUN_08041778(uVar1,param_1,1);
  FUN_08041778(uVar1,param_1,2);
  FUN_08041778(uVar1,param_1,3);
  *(undefined4 *)(param_1 + 0x5c) = 0xc00;
  return in_lr;
}


