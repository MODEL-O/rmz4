// undefined FUN_080b1910(void)
// entry 0x80b1910


undefined4 FUN_080b1910(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0x5a;
    FUN_0801cf00(param_1,0xbb00);
    FUN_08005784(param_1 + 0x74,DAT_080b1954);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_080b1a8c(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


