// undefined FUN_080c3004(void)
// entry 0x80c3004


undefined4 FUN_080c3004(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb5);
    *pcVar1 = *pcVar1 + -1;
  }
  FUN_080bd3f8(param_1);
  return in_lr;
}


