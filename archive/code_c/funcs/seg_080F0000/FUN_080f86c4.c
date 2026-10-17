// undefined FUN_080f86c4(void)
// entry 0x80f86c4


undefined4 FUN_080f86c4(int param_1,byte *param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_080f872c();
  if (cVar1 != '\f') {
    *param_2 = *param_2 ^ 1;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + DAT_080f86f4 + (char)*param_2 * 0x200;
  return in_lr;
}


