// undefined FUN_080fb7fc(void)
// entry 0x80fb7fc


undefined4 FUN_080fb7fc(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0xbd) != '\0') {
      FUN_08002b10(DAT_080fb82c);
      if (*(char *)(param_1 + 0x10) == '\0') {
        FUN_0801cf00(param_1,DAT_080fb844);
      }
      else {
        FUN_0801cf00(param_1,DAT_080fb830);
      }
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      FUN_08002b5c(DAT_080fb870);
      if (*(char *)(param_1 + 0x10) == '\0') {
        FUN_0801cf00(param_1,DAT_080fb888);
      }
      else {
        FUN_0801cf00(param_1,DAT_080fb874);
      }
      *(undefined1 *)(param_1 + 0xd) = 2;
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x04') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_0801cf00(param_1,0xbf00);
    }
    else {
      FUN_0801cf00(param_1,DAT_080fb8ac);
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  return in_lr;
}


