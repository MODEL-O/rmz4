// undefined FUN_0806d0a4(void)
// entry 0x806d0a4


undefined4 FUN_0806d0a4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0x47);
    *(bool *)(*(int *)(param_1 + 0x2c) + 0xdb) =
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54) <
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
  }
  return in_lr;
}


