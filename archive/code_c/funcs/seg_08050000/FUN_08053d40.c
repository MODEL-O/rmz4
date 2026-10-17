// undefined FUN_08053d40(void)
// entry 0x8053d40


undefined4 FUN_08053d40(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08054fb0(param_1);
  if ((*(ushort *)(DAT_08053d80 + 8) & 8) == 0) {
    FUN_08054ff0(param_1);
  }
  return in_lr;
}


