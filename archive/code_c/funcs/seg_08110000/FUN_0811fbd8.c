// undefined FUN_0811fbd8(void)
// entry 0x811fbd8


undefined4 FUN_0811fbd8(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  *(uint *)(param_1 + DAT_0811fc18) = (DAT_0811fc20 & *DAT_0811fc1c) * 0x100 + 0x7800;
  param_1 = param_1 + DAT_0811fc24;
  FUN_08003470(param_1);
  puVar1 = DAT_0811fc28;
  FUN_0801c79c(*DAT_0811fc28);
  FUN_0801c924(*puVar1,param_1);
  FUN_08003420(param_1);
  return in_lr;
}


