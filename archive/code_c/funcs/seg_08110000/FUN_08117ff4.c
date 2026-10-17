// undefined FUN_08117ff4(void)
// entry 0x8117ff4


undefined4 FUN_08117ff4(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  *(uint *)(param_1 + DAT_08118034) = (DAT_0811803c & *DAT_08118038) * 0x100 + 0x7800;
  param_1 = param_1 + DAT_08118040;
  FUN_08003470(param_1);
  puVar1 = DAT_08118044;
  FUN_0801c79c(*DAT_08118044);
  FUN_0801c924(*puVar1,param_1);
  FUN_08003420(param_1);
  return in_lr;
}


