// undefined FUN_080c4ba0(void)
// entry 0x80c4ba0


undefined4 FUN_080c4ba0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    FUN_08002b5c(DAT_080c4bc4);
    *(char *)(param_1 + 0xb8) = '\0';
  }
  FUN_080bd3f8(param_1);
  return in_lr;
}


