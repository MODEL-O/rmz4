// undefined FUN_080aa844(void)
// entry 0x80aa844


undefined4 FUN_080aa844(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if ((*(char *)(param_1 + 0xb6) == '\x01') && ((*(byte *)(param_1 + 0x13) & 0xf) == 0)) {
    FUN_080aaa44(param_1);
  }
  cVar1 = FUN_080aab30(param_1);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0xb6) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


