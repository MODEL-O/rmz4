// undefined FUN_08037364(void)
// entry 0x8037364


undefined4 FUN_08037364(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x156) = 0;
  puVar2 = (undefined1 *)(param_1 + DAT_080373b4);
  *puVar2 = 8;
  FUN_0803a3b0(param_1,0x2900);
  FUN_0803a3f0(param_1,0x2900);
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 == '\x02') {
    cVar1 = *(char *)(param_1 + DAT_0803740c) + -1;
    *(char *)(param_1 + DAT_0803740c) = cVar1;
    if (cVar1 == -1) {
      *puVar2 = 0xff;
      *(undefined1 *)(param_1 + DAT_08037410) = 4;
      *(undefined1 *)(param_1 + 0x102) = 0;
    }
  }
  else {
    if (cVar1 != '\b') {
      if (*(char *)(param_1 + 0xc0) == '\x02') {
        *(char *)(param_1 + 0xc0) = cVar1;
      }
      else {
        *(char *)(param_1 + 0xc1) = cVar1;
      }
    }
    *(undefined1 *)(param_1 + DAT_080373d0) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}


