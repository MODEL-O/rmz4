// undefined FUN_08034e58(void)
// entry 0x8034e58


undefined4 FUN_08034e58(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_0803a428(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + DAT_08034eb4) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(byte *)(param_1 + DAT_08034eb8) = *(byte *)(param_1 + DAT_08034eb8) | 10;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + DAT_08034ebc) = 4;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08033b8c(param_1);
  }
  else {
    *(undefined1 *)(param_1 + DAT_08034ee0) = 1;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08034ee4(param_1);
  }
  return in_lr;
}


