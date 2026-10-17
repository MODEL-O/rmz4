// undefined FUN_080383f0(void)
// entry 0x80383f0


undefined4 FUN_080383f0(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(char *)(param_1 + 0x100) == '\x03') && (*(char *)(param_1 + 0x144) == '\x01')) &&
      (*(char *)(param_1 + 0xd) == '\x01')) && (*(char *)(param_1 + 0x101) == '\x02')) {
    *(undefined1 *)(param_1 + DAT_0803842c) = 0xff;
    *(char *)(param_1 + 0x100) = '\0';
  }
  return in_lr;
}


