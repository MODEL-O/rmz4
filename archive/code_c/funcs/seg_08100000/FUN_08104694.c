// undefined FUN_08104694(void)
// entry 0x8104694


undefined4 FUN_08104694(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  FUN_0801cff0(param_1);
  if (0x2000 < *(int *)(DAT_081046c8 + 0x3c) - (*(int *)(param_1 + 0x58) + 0x5000)) {
    FUN_080e954c(param_1);
  }
  return in_lr;
}


