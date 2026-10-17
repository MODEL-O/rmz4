// undefined FUN_08053850(void)
// entry 0x8053850


undefined4 FUN_08053850(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0xb600);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(DAT_08053888 + 0x12) & 1) == 0) {
    FUN_080539e8(param_1);
  }
  return in_lr;
}


