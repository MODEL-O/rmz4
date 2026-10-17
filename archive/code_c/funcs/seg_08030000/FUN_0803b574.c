// undefined FUN_0803b574(void)
// entry 0x803b574


undefined4 FUN_0803b574(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0xb4) + 0x148);
  *pcVar1 = *pcVar1 - *(char *)(param_1 + 0xc2);
  FUN_080055a4();
  return in_lr;
}


