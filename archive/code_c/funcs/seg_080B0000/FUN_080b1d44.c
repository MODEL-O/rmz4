// undefined FUN_080b1d44(void)
// entry 0x80b1d44


undefined4 FUN_080b1d44(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b1d80);
    *(undefined1 *)(param_1 + 0x12) = 0x32;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) < 0x1e) && (cVar1 = FUN_080b21e4(param_1), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  else {
    cVar1 = FUN_080b2158(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


