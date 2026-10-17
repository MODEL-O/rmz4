// undefined FUN_080c53d8(void)
// entry 0x80c53d8


undefined4 FUN_080c53d8(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb4);
  *pcVar1 = *pcVar1 + -1;
  FUN_080bd3f8();
  return in_lr;
}


