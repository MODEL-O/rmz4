// undefined FUN_08003384(void)
// entry 0x8003384


undefined4 FUN_08003384(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  FUN_08128be0(local_14,param_1,DAT_080033b8);
  *(int *)(param_1 + 0x200) = param_1;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  return in_lr;
}


