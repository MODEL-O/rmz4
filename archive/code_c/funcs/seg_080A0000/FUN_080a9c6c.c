// undefined FUN_080a9c6c(void)
// entry 0x80a9c6c


undefined4 FUN_080a9c6c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb7) != '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
      if (*(char *)(param_1 + 0xb7) == '\x01') {
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
    }
    if ((*(char *)(param_1 + 0x10) == '\x01') &&
       (*(undefined1 *)(param_1 + 0xd) = 0, *(char *)(param_1 + 0xb7) == '\x02')) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


