// undefined FUN_08027c00(void)
// entry 0x8027c00


undefined4 FUN_08027c00(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (0 < *(int *)(param_1 + 0x160))) {
    *(int *)(*(int *)(param_1 + 0x10) + 0x54) = *(int *)(param_1 + 0x160);
  }
  return in_lr;
}


