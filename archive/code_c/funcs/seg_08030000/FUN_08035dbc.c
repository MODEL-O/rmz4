// undefined FUN_08035dbc(void)
// entry 0x8035dbc


undefined4 FUN_08035dbc(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_0803a428(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + DAT_08035e08) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + DAT_08035e0c) = 4;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08035fec(param_1);
  }
  else if (((*(uint *)(param_1 + 600) & 0x40) == 0) || (*(char *)(param_1 + 0xc5) != '\v')) {
    if (((*(uint *)(param_1 + 600) & 0x80) == 0) || ((*(ushort *)(param_1 + 200) & 0x10) == 0)) {
      *(undefined1 *)(param_1 + DAT_08035e9c) = 1;
      *(undefined1 *)(param_1 + 0x102) = 0;
      FUN_08035ea0(param_1);
    }
    else {
      *(undefined1 *)(param_1 + DAT_08035e78) = 7;
      *(undefined1 *)(param_1 + 0x102) = 0;
      FUN_08036204(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + DAT_08035e44) = 6;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08036188(param_1);
  }
  return in_lr;
}


