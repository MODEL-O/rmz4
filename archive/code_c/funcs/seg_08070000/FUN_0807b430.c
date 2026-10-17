// undefined FUN_0807b430(void)
// entry 0x807b430


undefined4 FUN_0807b430(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0x44);
    *(bool *)(*(int *)(param_1 + 0x2c) + 0xd4) =
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54) <
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
  }
  return in_lr;
}


