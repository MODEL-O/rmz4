// undefined FUN_0811eacc(void)
// entry 0x811eacc


undefined4 FUN_0811eacc(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  *(uint *)(param_1 + DAT_0811eb0c) = (DAT_0811eb14 & *DAT_0811eb10) * 0x100 + 0x7800;
  param_1 = param_1 + DAT_0811eb18;
  FUN_08003470(param_1);
  puVar1 = DAT_0811eb1c;
  FUN_0801c79c(*DAT_0811eb1c);
  FUN_0801c924(*puVar1,param_1);
  FUN_08003420(param_1);
  return in_lr;
}


