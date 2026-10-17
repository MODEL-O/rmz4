// undefined FUN_080378f0(void)
// entry 0x80378f0


undefined4 FUN_080378f0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  FUN_0803a3b0(param_1,0x2c00);
  FUN_0803a3f0(param_1,0x2c00);
  cVar1 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + DAT_08037934) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}


