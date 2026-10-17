// undefined FUN_08040db4(void)
// entry 0x8040db4


undefined4 FUN_08040db4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbe) != '\0') {
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x27);
  }
  FUN_0803a8b4(param_1);
  return in_lr;
}


