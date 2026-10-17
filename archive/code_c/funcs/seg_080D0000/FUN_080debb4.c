// undefined FUN_080debb4(void)
// entry 0x80debb4


undefined4 FUN_080debb4(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb6);
  *pcVar1 = *pcVar1 + -1;
  FUN_080d0c30();
  return in_lr;
}


