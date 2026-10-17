// undefined FUN_080e34e4(void)
// entry 0x80e34e4


undefined4 FUN_080e34e4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + DAT_080e3538;
  FUN_080d0c88(1,&local_10);
  FUN_08002b10(0x2a);
  local_c = *(int *)(param_1 + 0x58) + DAT_080e353c;
  FUN_080d0c88(1,&local_10);
  FUN_08002b10(0x2a);
  FUN_080e3110(param_1 + 0x54,1,3);
  *(undefined1 *)(param_1 + 0x11) = 2;
  FUN_080e3370(param_1);
  return in_lr;
}


