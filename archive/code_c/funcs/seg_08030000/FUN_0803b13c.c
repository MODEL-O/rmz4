// undefined FUN_0803b13c(void)
// entry 0x803b13c


undefined8 FUN_0803b13c(int param_1,undefined4 *param_2)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x10) != '\x01';
  if (bVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    param_2[1] = *(int *)(param_1 + 0x58) + DAT_0803b158;
  }
  return CONCAT44(in_lr,(uint)bVar1);
}


