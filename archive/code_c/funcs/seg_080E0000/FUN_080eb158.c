// undefined FUN_080eb158(void)
// entry 0x80eb158


undefined4 FUN_080eb158(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 9) == '\x03') {
    if (*(char *)(param_1 + 0xb8) != -0x3d) {
      *(char *)(param_1 + 0xb8) = -0x3d;
      FUN_0801cf00(param_1,*(byte *)(param_1 + 0x70) | 0xc300);
      FUN_0801cff0(param_1);
    }
    *(undefined2 *)(param_1 + 0xba) = 1;
  }
  return in_lr;
}


