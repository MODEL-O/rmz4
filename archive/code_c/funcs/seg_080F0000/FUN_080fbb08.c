// undefined FUN_080fbb08(void)
// entry 0x80fbb08


undefined4 FUN_080fbb08(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbd) == '\0') {
    FUN_08002624(0xac);
  }
  else {
    FUN_08002624(0x36);
    *(char *)(param_1 + 0xbd) = '\0';
  }
  FUN_080e954c(param_1);
  return in_lr;
}


