// undefined FUN_08111998(void)
// entry 0x8111998


undefined4 FUN_08111998(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  param_1 = param_1 + 0x14;
  FUN_08003470(param_1);
  *DAT_081119d8 = 0;
  local_14[0] = 0;
  FUN_08128be0(local_14,DAT_081119dc,DAT_081119e0);
  puVar1 = DAT_081119e4;
  FUN_0801c79c(*DAT_081119e4);
  FUN_0801c924(*puVar1,param_1);
  FUN_08003420(param_1);
  return in_lr;
}


