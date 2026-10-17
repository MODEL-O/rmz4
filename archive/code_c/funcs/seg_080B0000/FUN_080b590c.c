// undefined FUN_080b590c(void)
// entry 0x80b590c


undefined4 FUN_080b590c(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(char *)(param_1 + 0x12) = (*(char *)(param_1 + 0x11) + '\x01') * '\f';
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


