// undefined FUN_080e25a8(void)
// entry 0x80e25a8


undefined4 FUN_080e25a8(int param_1)

{
  undefined4 in_lr;
  
  FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x58) + DAT_080e25d8 < *(int *)(DAT_080e25d0 + DAT_080e25d4)) {
    FUN_08002b10(0x2a);
  }
  else {
    FUN_08002b10(0x31);
  }
  return in_lr;
}


