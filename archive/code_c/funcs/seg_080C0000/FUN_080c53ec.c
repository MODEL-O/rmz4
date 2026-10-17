// undefined FUN_080c53ec(void)
// entry 0x80c53ec


undefined4 FUN_080c53ec(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb8);
  *pcVar1 = *pcVar1 + -1;
  FUN_080bd3f8();
  return in_lr;
}


