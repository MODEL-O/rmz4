// undefined FUN_08027634(void)
// entry 0x8027634


undefined8 FUN_08027634(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((*(byte *)(DAT_0802768c + 0x12) & 1) != 0) {
    uVar1 = FUN_0802788c(param_1);
  }
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  FUN_080278f4(param_1);
  FUN_08027ce8(param_1);
  FUN_08027d68(param_1);
  FUN_0802795c(param_1);
  FUN_08027be4(param_1);
  FUN_08027c00(param_1);
  FUN_08027c1c(param_1);
  return CONCAT44(in_lr,uVar1);
}


