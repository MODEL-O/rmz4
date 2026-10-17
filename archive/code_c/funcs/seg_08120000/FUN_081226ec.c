// undefined FUN_081226ec(void)
// entry 0x81226ec


undefined4 FUN_081226ec(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  *(uint *)(param_1 + DAT_0812272c) = (DAT_08122734 & *DAT_08122730) * 0x100 + 0x7800;
  param_1 = param_1 + DAT_08122738;
  FUN_08003470(param_1);
  puVar1 = DAT_0812273c;
  FUN_0801c79c(*DAT_0812273c);
  FUN_0801c924(*puVar1,param_1);
  FUN_08003420(param_1);
  return in_lr;
}


