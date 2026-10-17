// undefined FUN_080a9b2c(void)
// entry 0x80a9b2c


undefined8 FUN_080a9b2c(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  int local_c [3];
  
  local_c[0] = *DAT_080a9b6c;
  local_c[1] = DAT_080a9b6c[1];
  local_c[2] = in_lr;
  sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) +
                       *(int *)((int)local_c + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)
                               ) * 0x100,*(int *)(param_1 + 0x58) + DAT_080a9b70);
  return CONCAT44(local_c[2],(uint)(sVar1 != 0));
}


