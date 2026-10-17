// undefined FUN_080f3bac(void)
// entry 0x80f3bac


undefined4 FUN_080f3bac(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cc9c(param_1);
    FUN_0801cf00(param_1,0x3100);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


