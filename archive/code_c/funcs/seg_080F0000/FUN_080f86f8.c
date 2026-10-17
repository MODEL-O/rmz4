// undefined FUN_080f86f8(void)
// entry 0x80f86f8


undefined4 FUN_080f86f8(int *param_1,byte *param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_080f872c();
  if (cVar1 != '\r') {
    *param_2 = *param_2 ^ 1;
  }
  *param_1 = *param_1 + DAT_080f8728 + (char)*param_2 * 0x200;
  return in_lr;
}


