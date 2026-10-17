// undefined FUN_080e31f8(void)
// entry 0x80e31f8


undefined4 FUN_080e31f8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080e3110(param_1 + 0x54,1,3);
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + DAT_080e3254;
    FUN_080e3110(&local_10,1,2);
    FUN_080e3110(param_1 + 0x54,1,4);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e3258);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


