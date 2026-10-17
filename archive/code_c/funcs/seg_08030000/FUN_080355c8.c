// undefined FUN_080355c8(void)
// entry 0x80355c8


undefined4 FUN_080355c8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_0803a428(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + DAT_08035628) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(byte *)(param_1 + DAT_0803562c) = *(byte *)(param_1 + DAT_0803562c) | 10;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + DAT_08035630) = 4;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08033b8c(param_1);
  }
  else if (((*(uint *)(param_1 + 600) & 0xc0) == 0) || (*(char *)(param_1 + 0xc5) != '\v')) {
    if ((*(ushort *)(param_1 + 200) & 0x20) == 0) {
      *(undefined1 *)(param_1 + DAT_080356b0) = 1;
      *(undefined1 *)(param_1 + 0x102) = 0;
      FUN_080356b4(param_1);
    }
    else {
      *(undefined1 *)(param_1 + DAT_08035690) = 2;
      *(undefined1 *)(param_1 + 0x102) = 0;
      FUN_080357e4(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + DAT_08035664) = 3;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08035960(param_1);
  }
  return in_lr;
}


