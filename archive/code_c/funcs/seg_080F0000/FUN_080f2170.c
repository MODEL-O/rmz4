// undefined FUN_080f2170(void)
// entry 0x80f2170


undefined4 FUN_080f2170(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080f219c;
  uVar1 = FUN_0801fb14(DAT_080f21a0,param_1 + 0x54);
  if (0x10000 < uVar1) {
    FUN_080e954c(param_1);
  }
  return in_lr;
}


