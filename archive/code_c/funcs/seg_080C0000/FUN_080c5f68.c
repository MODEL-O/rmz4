// undefined FUN_080c5f68(void)
// entry 0x80c5f68


undefined4 FUN_080c5f68(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    FUN_08002b5c(0x18a);
    *(char *)(param_1 + 0xb8) = '\0';
  }
  FUN_080bd3f8(param_1);
  return in_lr;
}


