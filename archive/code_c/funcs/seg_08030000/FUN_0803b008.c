// undefined FUN_0803b008(void)
// entry 0x803b008


undefined8 FUN_0803b008(int param_1,undefined4 *param_2)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x10) != '\x01';
  if (bVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    param_2[1] = *(undefined4 *)(param_1 + 0x58);
  }
  return CONCAT44(in_lr,(uint)bVar1);
}


