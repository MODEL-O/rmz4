// undefined FUN_08048470(void)
// entry 0x8048470


undefined4 FUN_08048470(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbd) != '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_080d0c88(1,param_1 + 0x54);
      FUN_08002b10(0x35);
    }
    else {
      FUN_080d0c88(2,param_1 + 0x54);
    }
  }
  FUN_0803a8b4(param_1);
  return in_lr;
}


