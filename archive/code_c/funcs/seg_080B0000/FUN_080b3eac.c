// undefined FUN_080b3eac(void)
// entry 0x80b3eac


undefined8 FUN_080b3eac(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8);
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x54);
  }
  return CONCAT44(in_lr,(uint)(0x2800 < iVar1));
}


