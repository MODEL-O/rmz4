// undefined FUN_080b1ce8(void)
// entry 0x80b1ce8


undefined4 FUN_080b1ce8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b1d40);
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined1 *)(param_1 + 0x12) = 0x80;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_080b2170(param_1);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_080b1e38(param_1);
  }
  cVar1 = FUN_080b2158(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


