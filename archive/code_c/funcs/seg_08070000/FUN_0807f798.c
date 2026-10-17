// undefined FUN_0807f798(void)
// entry 0x807f798


undefined4 FUN_0807f798(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0x4d);
    *(bool *)(*(int *)(param_1 + 0x2c) + 0xd2) =
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54) <
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
  }
  return in_lr;
}


