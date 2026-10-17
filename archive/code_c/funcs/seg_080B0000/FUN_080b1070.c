// undefined FUN_080b1070(void)
// entry 0x80b1070


undefined4 FUN_080b1070(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080b11ec(param_1);
  }
  else {
    FUN_080b1218(param_1);
  }
  return in_lr;
}


