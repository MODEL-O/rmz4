// undefined FUN_080503cc(void)
// entry 0x80503cc


undefined4 FUN_080503cc(int param_1,undefined4 param_2,short param_3)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,param_2,param_1 + 0x54,(int)param_3);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return in_lr;
}


