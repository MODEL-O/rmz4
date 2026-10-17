// undefined FUN_080eb124(void)
// entry 0x80eb124


undefined4 FUN_080eb124(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 9) == '\x03') && (*(char *)(param_1 + 0xb8) != '\x15')) {
    *(char *)(param_1 + 0xb8) = '\x15';
    FUN_0801cf00(param_1,*(byte *)(param_1 + 0x70) | 0x1500);
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


