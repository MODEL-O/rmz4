// undefined FUN_0801e8d8(void)
// entry 0x801e8d8


undefined4 FUN_0801e8d8(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  FUN_08128be0(&local_14,param_1,DAT_0801e910);
  local_10 = 0;
  FUN_08128be4(&local_10,param_1 + 0x20,DAT_0801e914);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x30;
  return in_lr;
}


