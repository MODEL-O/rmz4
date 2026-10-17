// undefined FUN_0811c768(void)
// entry 0x811c768


undefined4 FUN_0811c768(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  *(uint *)(param_1 + DAT_0811c7a8) = (DAT_0811c7b0 & *DAT_0811c7ac) * 0x100 + 0x7800;
  param_1 = param_1 + DAT_0811c7b4;
  FUN_08003470(param_1);
  puVar1 = DAT_0811c7b8;
  FUN_0801c79c(*DAT_0811c7b8);
  FUN_0801c924(*puVar1,param_1);
  FUN_08003420(param_1);
  return in_lr;
}


