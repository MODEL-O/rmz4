// undefined FUN_08128ab8(void)
// entry 0x8128ab8


undefined4 FUN_08128ab8(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = **(byte **)(param_2 + 0x40);
  *(byte **)(param_2 + 0x40) = *(byte **)(param_2 + 0x40) + 1;
  FUN_08128f84(param_1,param_2,*(undefined4 *)((uint)bVar1 * 4 + DAT_08128ad4));
  return in_lr;
}


