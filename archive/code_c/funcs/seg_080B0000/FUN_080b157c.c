// undefined FUN_080b157c(void)
// entry 0x80b157c


undefined4 FUN_080b157c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_0801cf00(param_1,0xb900);
    if (*(char *)(param_1 + 0xc2) == '\x0f') {
      FUN_08005784(param_1 + 0x74,DAT_080b15ac);
    }
    *(char *)(param_1 + 0xc2) = '\0';
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


