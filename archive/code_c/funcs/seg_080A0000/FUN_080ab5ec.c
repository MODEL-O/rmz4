// undefined FUN_080ab5ec(void)
// entry 0x80ab5ec


undefined4 FUN_080ab5ec(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xbb);
  if (*pcVar1 != '\0') {
    *pcVar1 = *pcVar1 + -1;
  }
  FUN_0807f8ec(param_1);
  return in_lr;
}


