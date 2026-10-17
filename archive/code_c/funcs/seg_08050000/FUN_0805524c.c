// undefined FUN_0805524c(void)
// entry 0x805524c


undefined4 FUN_0805524c(int param_1)

{
  undefined4 in_lr;
  undefined4 local_c;
  int local_8;
  undefined4 uStack_4;
  
  local_c = *(undefined4 *)(param_1 + 0x54);
  local_8 = *(int *)(param_1 + 0x58) + DAT_08055268;
  uStack_4 = in_lr;
  FUN_0800d7e4(&local_c);
  return uStack_4;
}


