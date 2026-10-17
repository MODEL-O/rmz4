// undefined FUN_08037ea0(void)
// entry 0x8037ea0


undefined4 FUN_08037ea0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_0803a428(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + DAT_08037ee8) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + DAT_08037eec) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08037f8c(param_1);
  }
  else {
    *(undefined1 *)(param_1 + DAT_08037f10) = 1;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08037f14(param_1);
  }
  return in_lr;
}


