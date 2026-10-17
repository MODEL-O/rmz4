// undefined FUN_080c839c(void)
// entry 0x80c839c


undefined4 FUN_080c839c(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb4);
    *pcVar1 = *pcVar1 + -1;
  }
  FUN_080bd3f8(param_1);
  return in_lr;
}


