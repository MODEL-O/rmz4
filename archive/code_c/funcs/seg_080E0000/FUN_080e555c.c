// undefined FUN_080e555c(void)
// entry 0x80e555c


undefined4 FUN_080e555c(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + DAT_080e5594;
  FUN_080d0c88(1,&local_10);
  *(undefined1 *)(param_1 + 0x11) = 2;
  FUN_080e52b4(param_1 + 0x54,1,4);
  FUN_080e5450(param_1);
  return in_lr;
}


