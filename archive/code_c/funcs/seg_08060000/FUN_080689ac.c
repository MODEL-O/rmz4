// undefined FUN_080689ac(void)
// entry 0x80689ac


undefined4 FUN_080689ac(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0x4a);
    *(bool *)(*(int *)(param_1 + 0x2c) + 0xd8) =
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54) <
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
  }
  return in_lr;
}


