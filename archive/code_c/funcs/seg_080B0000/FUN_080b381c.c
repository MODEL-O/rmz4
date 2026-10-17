// undefined FUN_080b381c(void)
// entry 0x80b381c


undefined8 FUN_080b381c(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = FUN_08128bdc((**(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                       ((*(int **)(param_1 + 0x28))[1] - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
  return CONCAT44(in_lr,(uVar1 & 0xffff) >> 8);
}


