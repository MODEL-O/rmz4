// undefined FUN_0811f268(void)
// entry 0x811f268


undefined4 FUN_0811f268(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  *(uint *)(param_1 + DAT_0811f2a8) = (DAT_0811f2b0 & *DAT_0811f2ac) * 0x100 + 0x7800;
  param_1 = param_1 + DAT_0811f2b4;
  FUN_08003470(param_1);
  puVar1 = DAT_0811f2b8;
  FUN_0801c79c(*DAT_0811f2b8);
  FUN_0801c924(*puVar1,param_1);
  FUN_08003420(param_1);
  return in_lr;
}


