// undefined FUN_080128e8(void)
// entry 0x80128e8


undefined4 FUN_080128e8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_08012904 = 0x1e0000;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


