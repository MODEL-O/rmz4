// undefined FUN_080b1d9c(void)
// entry 0x80b1d9c


undefined4 FUN_080b1d9c(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b1df8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    FUN_0801cf00(param_1,DAT_080b1dfc + (uint)*(byte *)(param_1 + 0xb5) & 0xffff);
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0xb5) * 0x60 + DAT_080b1e00);
    FUN_08002b10(DAT_080b1e04);
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x02') {
      cVar1 = '\0';
      *(undefined1 *)(param_1 + 0xd) = 0;
      goto LAB_080b1e28;
    }
    FUN_0801cf00(param_1,DAT_080b1e30);
    FUN_08005784(param_1 + 0x74,DAT_080b1e34);
  }
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080b1e28:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}


