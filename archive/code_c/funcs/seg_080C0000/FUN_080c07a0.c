// undefined FUN_080c07a0(void)
// entry 0x80c07a0


undefined4 FUN_080c07a0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  return in_lr;
}


