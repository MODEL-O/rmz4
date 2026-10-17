// undefined FUN_08053e9c(void)
// entry 0x8053e9c


undefined4 FUN_08053e9c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 2;
    FUN_0801cf00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08054fb0(param_1);
  if ((*(byte *)(DAT_08053ee8 + 0x12) & 1) == 0) {
    FUN_08054ff0(param_1);
  }
  return in_lr;
}


