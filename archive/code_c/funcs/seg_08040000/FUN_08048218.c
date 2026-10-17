// undefined FUN_08048218(void)
// entry 0x8048218


undefined4 FUN_08048218(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(*(int *)(param_1 + 0x2c) + 0xbc) =
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54) <
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
  }
  return in_lr;
}


