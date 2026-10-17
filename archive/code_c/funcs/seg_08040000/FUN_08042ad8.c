// undefined FUN_08042ad8(void)
// entry 0x8042ad8


undefined4 FUN_08042ad8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  FUN_0801cd28();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08042b14);
  FUN_08002b10(0x73);
  uVar1 = FUN_080428c0(uVar1,param_1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return in_lr;
}


