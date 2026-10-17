// undefined FUN_08041900(void)
// entry 0x8041900


undefined4 FUN_08041900(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  FUN_0801cf00(param_1,DAT_08041924);
  FUN_08002b10(0x44);
  uVar1 = FUN_080416d4(uVar1,param_1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return in_lr;
}


