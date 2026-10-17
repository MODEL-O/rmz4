// undefined FUN_0800e75c(void)
// entry 0x800e75c


undefined4 FUN_0800e75c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_0800e778 = 0xa5000;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


